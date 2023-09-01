li =[1,2,3,4,5,6]
k = 3

print(li[:])
li[:] = li[::-1] #to rotate list
print(li[:])
li[:k] = li[:k][::-1]
print(li[:])
li[k:] = li[k:][::-1]
print(li[:])

  