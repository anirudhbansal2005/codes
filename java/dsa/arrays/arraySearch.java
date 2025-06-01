public class arraySearch {
    int binarySearch(int[] arr, int size, int value){
        int left = 0, right = size-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(arr[mid]==value){
                return mid;
            }
            if(arr[mid]<value){
                left = mid+1;
            }
            else {
                right = mid-1;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        arraySearch src = new arraySearch();
        int[] arr = {1, 2, 4, 6, 3, 6};
        int size = 6;
        System.err.println(src.binarySearch(arr, size, 4));
    }
    
}
