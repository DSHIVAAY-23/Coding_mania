def missing_no(arr,n):
 
 sum1 = n*(n+1)//2
 sum2 = sum(arr)

 missing = sum1 - sum2
 return missing
 
 
# Example
print(missing_no([1, 2, 3, 4, 6], 6))  # Output: 5

# def missing_number(arr, n):
#     # Calculate the sum of first n natural numbers
#     total = n * (n + 1) // 2
    
#     # Calculate the sum of numbers in the array
#     sum_arr = sum(arr)
    
#     # Find the missing number by subtracting sum_arr from total
#     missing = total - sum_arr
    
#     return missing
 
# # Example
# print(missing_number([1, 2, 3, 4, 6], 6))  # Output: 5




