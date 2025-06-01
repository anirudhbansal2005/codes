def binarySearch(arr, size, value):
    left=0
    right=size-1
    while(left<=right):
        mid=(left+right)/2
        if(arr[int(mid)]==value):
            return int(mid)
        if(arr[int(mid)]<value):
            left = int(mid+1)
        else:
            right = int(mid-1)
    return 0

arr = [1, 2, 3, 4, 50]
size = 5
value = 4
print(f'{binarySearch(arr, size, value)}')