import array

my_a = array.array('i')
# print(my_a)

my_a2 = array.array('i',[1,2,3,4,5,6,])
my_a2([3])           
print(my_a2[5])  
   

#iterating or traverse

def traversearray(array):
    for i in array:
        print(i)

traversearray(my_a2)

#searching of element

def linear_search(arr,target):
    for i in range(len(arr)):
        if arr[i] == target:
         return i
        return -1
    print(linear_search(my_a2,3))
    print(linear_search(my_a2,9))

        
    
my_a2.append(6)
print(my_a2)    