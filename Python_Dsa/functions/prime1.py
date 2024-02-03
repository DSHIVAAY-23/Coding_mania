def isPRime(n):
    for d in range (2,n-1):
        if n%d ==0:
            break
    else:
        return True     
    return False
def isPRime2toN(n):
    for d in range (2,n+1):
        is_d_prime = isPRime(d)
        if(is_d_prime):
            print(d)  
n = int(input())
prime = isPRime(n)
prime1 = isPRime2toN(n)
print(prime1)
print(prime)