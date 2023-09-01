def getSingleElement(arr):
    n = len(arr)
    if n == 1:  # If the array has only one element
        return arr[0]

    if arr[0] != arr[1]:  # Check the first element
        return arr[0]

    for i in range(1, n - 1):
        if arr[i] != arr[i - 1] and arr[i] != arr[i + 1]:
            return arr[i]

    if arr[n - 1] != arr[n - 2]:  # Check the last element
        return arr[n - 1]

arr = [1, 1, 2, 3, 3, 4, 4]
g = getSingleElement(arr)
print(g)