def linear_search(arr,target):
    for i in range(len(arr)):
        if arr[i] == target:
         return i
    return -1


print(linear_search(my_a2,8))
print(linear_search(my_a2,9))


