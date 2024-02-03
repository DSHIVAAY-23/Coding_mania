import array

my_a2 = array.array('i',[1,2,3,4,5,6,8])
my_a2.remove()
print(my_a2)


def linear_search(arr,target):
    for i in range(len(arr)):
        if arr[i] == target:
         return i
    return -1


print(linear_search(my_a2,8))
print(linear_search(my_a2,9))


def missing_no(arr,n):
 n = 10
 sum1 = (n*(n+1)/2)
 sum2 = sum(arr)

 missing = sum1 - sum2
 return missing
 print(missing_no)