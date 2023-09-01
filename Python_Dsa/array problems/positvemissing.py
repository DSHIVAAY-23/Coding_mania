class Solution:
    
    #Function to find the smallest positive number missing from the array.
    def missingNumber(self, arr, n):
        # Initialize a boolean array visited[] of size n+1
        visited = [False] * (n+1)

        # Mark positive elements in the array as visited
        for num in arr:
            if 1 <= num <= n:
                visited[num] = True

        # Find the first false element in visited
        for i in range(1, n+1):
            if not visited[i]:
                return i

        # If all elements are visited, return n+1
        return n+1