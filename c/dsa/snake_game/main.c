#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <conio.h>
#include<time.h>
#define WIDTH 20
#define HEIGHT 20

int fruitX, fruitY;

enum Direction { UP, DOWN, LEFT, RIGHT };
enum Direction dir = RIGHT;
char grid[HEIGHT][WIDTH];
struct SnakeSegment {
    int x, y;
    struct SnakeSegment* next;
};

void drawGrid(struct SnakeSegment* head) {
    for (int i = 0; i < HEIGHT; i++)
        for (int j = 0; j < WIDTH; j++)
            grid[i][j] = ' ';


    struct SnakeSegment* temp = head;
    while (temp != NULL) {
        grid[temp->y][temp->x] = 'O';
        grid[fruitY][fruitX] = 'F';
        temp = temp->next;
    }
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++)
            printf("%c ", grid[i][j]);
        printf("\n");
    }
   
}
void generateFruit(struct SnakeSegment* head) {
    int valid = 0;
    while (!valid) {
        fruitX = rand() % WIDTH;
        fruitY = rand() % HEIGHT;

        // Ensure fruit doesn't appear on the snake
        struct SnakeSegment* temp = head;
        valid = 1;
        while (temp != NULL) {
            if (temp->x == fruitX && temp->y == fruitY) {
                valid = 0;
                break;
            }
            temp = temp->next;
        }
    }
}
struct SnakeSegment* createInitialSnake() {
    struct SnakeSegment* head = (struct SnakeSegment *)malloc(sizeof(struct SnakeSegment));
    head->x = 5;
    head->y = 5;
    head->next = NULL;

    struct SnakeSegment* second = (struct SnakeSegment *)malloc(sizeof(struct SnakeSegment));
    second->x = 4;
    second->y = 5;
    second->next = NULL;

    head->next = second;
    return head;
}
void moveSnake(struct SnakeSegment **head, enum Direction dir) {
    struct SnakeSegment* newHead = (struct SnakeSegment *)malloc(sizeof(struct SnakeSegment));
    newHead->x = (*head)->x;
    newHead->y = (*head)->y;

    // Change position based on direction
    if (dir == UP) newHead->y--;
    else if (dir == DOWN) newHead->y++;
    else if (dir == LEFT) newHead->x--;
    else if (dir == RIGHT) newHead->x++;

    newHead->next = *head;
    *head = newHead;

    // Remove tail
    if (newHead->x == fruitX && newHead->y == fruitY) {
        generateFruit(*head);  // generate new fruit
        // No tail deletion = snake grows
    } else {
        // Remove tail
        struct SnakeSegment* temp = *head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

int main() {
    struct SnakeSegment* snake = createInitialSnake();
    srand(time(NULL)); // seed randomness
    generateFruit(snake);
    while (1){
        if (_kbhit()){
            char ch = _getch();
            if (ch == 'w')
                dir = UP;
            else if (ch == 's')
                dir = DOWN;
            else if (ch == 'a')
                dir = LEFT;
            else if (ch == 'd')
                dir = RIGHT;
        }
        moveSnake(&snake, dir);
        drawGrid(snake);
        sleep(1);
        
    }
    return 0;
}