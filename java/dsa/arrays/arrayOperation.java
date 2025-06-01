
public class arrayOperation {
    void traverse(int arr[], int size){
        for(int i=0; i<size; i++){
            System.out.print(arr[i] + " ");
        }   
        System.out.println(); 
    }

    void indexInsertion(int arr[], int size, int cap, int element, int index){
        if(index>=cap){
            System.out.println("Error!");
        }
        else{
            for(int i=size-1; i>=index; i--){
                arr[i+1] = arr[i];
            }
            arr[index] = element;
        }
    }

    void indexDeletion(int arr[], int size, int cap, int index){
        if(index>=cap){
            System.out.println("Error!");
        }
        else{
            for(int i=index; i<size; i++){
                arr[i] = arr[i+1];
            }
        }
    }
  
    public static void main(String[] args) {
        arrayOperation opr = new arrayOperation();
        int[] arr = new int[100];
        int size = 5;
        for(int i=0; i<size; i++){
            arr[i] = i*i;
        } 
        opr.traverse(arr, size);
        opr.indexInsertion(arr, size, 100, 34, 2);
        size++;
        opr.traverse(arr, size);
        ;
        opr.indexDeletion(arr, size, 100, 4);
        size--;
        opr.traverse(arr, size);
    }
}
