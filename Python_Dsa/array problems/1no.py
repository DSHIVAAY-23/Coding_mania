def getSingleElement(arr):
    n = len(arr)
    for i in range(n):
        num = arr[i]
        cnt = 0
        for j in range(n):
            if arr[j] == num:
                cnt += 1

        if cnt==1:
            return num
    return -1
arr = [1,1,2,2,3,3,4]
res = getSingleElement(arr)
print(res)
