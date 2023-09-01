def buubleSort(arr):
    n = len(arr)
    for i in range(n-1):
        for j in range(n-1-i):
            if (arr[j] > arr[j+1]):
                arr[j],arr[j+1] = arr[j+1],arr[j]
    

arr =[1,3,5,6,4,8,2] 
buubleSort(arr)
print(arr)