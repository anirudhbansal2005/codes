#include<iostream>
using namespace std;
class myArray {
    private:
        int tsize;
        int usize;
        int *ptr;
    public:
        myArray(int x, int y){
          tsize = x;
          usize = y;
          ptr = new int[tsize];
        }

        void setVal(){
            for(int i=0; i<usize; i++){
                ptr[i] = i*i;
            }
        }

        void display(){
            for(int i=0; i<usize; i++){
                cout<<ptr[i]<<" ";
            }
        }

        ~myArray() {
            delete[] ptr;
        }
};

int main(){
    myArray arr(10, 3);
    arr.setVal();
    arr.display();
}
