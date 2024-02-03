from  array import *


#travesrs a araay

my_a = array('i',[1,2,3,4,5])

def traverseArray(array):
    for i in array:
        print(i)
my_a = array('i',[1,2,3,4,5])

def traverseArray(array):
    for i in array:
        print(i)

traverseArray(my_a)       

# #2 accesses element

print(my_a[3])


def accesselement(array,index):
    if index < len(array):
        print(array[index])
    else :
        -1
accesselement(my_a,2)
print(my_a[3])

def accesselement(array,index):
    if index < len(array):
        print(array[index])
    else :
        -1
accesselement(my_a,2)
# #3
my_a.insert(2,3)
print(my_a)
#4
my_a.append(6)
print(my_a)
#extend

my_a1 = array('i',[0,2,3])
my_a.extend(my_a1)
print(my_a)

#remove
my_a.remove(3)
print(my_a)
#pop

my_a.pop()
print(my_a)
#index

print(my_a.index(2)) 
#reverse

my_a.reverse()
print(my_a)
#bufferinfo

my_a.buffer_info()
print(my_a)

#count
my_a.append(3)
print(my_a.count(3))
print(my_a)
#tostring
my_a.tostring()
print(my_a)

list

my_list = [1,2,3,4,5]
print(my_list)# from  array import *


#travesrs a araay

my_a = array('i',[1,2,3,4,5])

def traverseArray(array):
    for i in array:
        print(i)

traverseArray(my_a)       

#2 accesses element

print(my_a[3])

def accesselement(array,index):
    if index < len(array):
        print(array[index])
    else :
        -1
accesselement(my_a,2)
#3
my_a.insert(2,3)
print(my_a)
#4
my_a.append(6)
print(my_a)
#extend

my_a1 = array('i',[0,2,3])
my_a.extend(my_a1)
print(my_a)

#remove
my_a.remove(3)
print(my_a)
#pop

my_a.pop()
print(my_a)
#index

print(my_a.index(2)) 
#reverse

my_a.reverse()
print(my_a)
#bufferinfo

my_a.buffer_info()
print(my_a)
