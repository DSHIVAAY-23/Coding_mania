def binarySearch(arr,element):
   start = 0
   end = len(arr)-1
   while (start<=end):
      mid = (start+end)//2
      if(arr[mid]==element):
         return mid
      elif (arr[mid]<element):
         start = mid+1
      else:
         end = mid -1
            
   return -1   
      
 
arr = [1,2,3,5,7,8,34,45,67]
index = binarySearch(arr,67)
print(index)
