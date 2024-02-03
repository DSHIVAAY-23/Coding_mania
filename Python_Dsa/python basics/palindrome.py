


x = int(input())
rev_no = 0
d = x
while x>0:
    ld = x%10
    x = x//10
    rev_no = (rev_no*10) + ld
if d == rev_no:
     print(True)
else:
     print(False)    

print(d)     