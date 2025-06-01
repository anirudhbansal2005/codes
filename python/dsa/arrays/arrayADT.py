class myArray:
    def __init__(self, tsize, usize):
        self.size = tsize
        self.used = usize
        self.ptr = [0] * tsize

    def setVal(self):
        for i in range(self.used):
            self.ptr[i] = i*i
        
    def show(self):
        for i in range(self.used):
            print(f"{self.ptr[i]} ")
    
arr  =  myArray(10, 4)
arr.setVal()
arr.show()