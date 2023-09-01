def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)







_num = 6


l= factorial(_num)
print(l)