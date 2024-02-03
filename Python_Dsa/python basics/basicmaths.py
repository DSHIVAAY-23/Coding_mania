n = int(input())
rev_no = 0
while n > 0:
  last_digit = n%10
  n = n//10
  rev_no = (rev_no*10) + last_digit    #reverse without 00
 
print(rev_no)
    

    
    



