l1=[1,2,3,4,5,6,]
l2=[2,3,5,6,]
l3=[]
for i in l1:
    for j in l2:
        if l1[i]==l2[j]:
            l3.append(i)
print(l3)