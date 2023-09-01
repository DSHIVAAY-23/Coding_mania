#remove duplicates leetcode 
class Solution:
  def removeDuplicates(self, nums: List[int]) -> int:
    if not nums:  # Check if nums is empty
        return 0

    k = 1  # Initialize the count of unique elements
    n = len(nums)

    # Iterate through the array starting from the second element
    for i in range(1, n):
        if nums[i] != nums[i - 1]:
            nums[k] = nums[i]
            k += 1

    return k
 