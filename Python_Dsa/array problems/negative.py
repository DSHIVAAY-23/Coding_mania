def rearrangeArray(arr, n):
    left = 0
    right = n - 1
  
    while left <= right:
        if arr[left] < 0:
            arr[left], arr[right] = arr[right], arr[left]
            right -= 1
        else:
            left += 1
