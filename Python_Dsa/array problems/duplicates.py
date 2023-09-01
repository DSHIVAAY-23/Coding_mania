



def duplicates(self, arr, n):
        duplicates = []
        count = [0] * n

        for num in arr:
            count[num] += 1

        for i in range(n):
            if count[i] > 1:
                duplicates.append(i)

        if len(duplicates) == 0:
            duplicates.append(-1)

        return duplicates
    	    
arr = [1,1,2]
res = duplicates( arr,n)
print(res)