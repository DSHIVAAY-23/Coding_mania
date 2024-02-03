l2=[1,2,3,4,5,6,7,8,9]
l2_new=[]
l3_new=[ele**3 for ele in l2] 
#[output for lop and (condition)]
l4_new = [ele for ele in l2 if (ele%2==0 and ele%3==0)]

for i in l2:
    l2_new.append(i**2)
print(l2_new)    