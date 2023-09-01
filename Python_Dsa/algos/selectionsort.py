def selectionSort(arr):
    length = len(arr)
    for i in range (length-1):
        minindex = i
        for j in range(i+1,length):
            if  (arr[j] <arr[minindex]):
                minindex = j
        arr[i],arr[minindex] = arr[minindex],arr[i]

arr = [1,3,5,6,4,8,2] 
selectionSort(arr)
print(arr)