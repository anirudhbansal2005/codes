
class myArray {
    int tsize;
    int usize;
    int[] ptr;

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
            System.out.println(ptr[i]);
        }
    }
}

public class arrayADT {
    public static void main(String[] args){
        myArray arr= new myArray(10, 3);
        arr.setVal();
        arr.display();
    }
}