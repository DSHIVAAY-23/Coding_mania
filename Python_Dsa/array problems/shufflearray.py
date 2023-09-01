def shuffle( nums,n):
        
        array1 = []

        for i in range(n):

          array1.append(nums[i])
          array1.append(nums[i+n])

        return array1    

nums = [2,5,1,3,4,7]
res = shuffle(nums,3)
print(res)