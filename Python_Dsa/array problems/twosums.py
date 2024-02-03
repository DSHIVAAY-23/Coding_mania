def two_sum(nums,target):
    array = []
    for i in range (len(nums)):
        for j in range(i+1, len(nums)):
            
             if (nums[i] == nums[j]):
               continue
                
                
             elif  nums[i] + nums[j] == target:
              array.insert([i,i])
              array.insert([j,j])
    return array
        
            
my_list = [2,1,3,4,2,1]
result = two_sum(my_list,6)
print(result)