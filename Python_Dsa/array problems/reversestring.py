
def reverse_string(string):
    reversed_string = ''
    for char in string:
        reversed_string = char +     reversed_string  
    return reversed_string

text = "hello"
reversed_text = reverse_string(text)
print(reversed_text)
