# Variables
a = 1
print(a)

b = "Shivam"
print(b)

# Finding the type of the object
print(type(a))
print(type(b))

print('\n')
print('\n')

# Data Types : 1. Built In Data Types     2. User defined Data Types

# 1.  Built In Data Types

# a. Numeric Data Types
a = 1  # integer type
b = 2.73  # floating point type
l = complex(8, 2)  # complex
print('The type of a : ', a, ' is ', type(a))
print('The type of b : ', b, ' is ', type(b))
print('The type of l : ', l, ' is ', type(l))

print('\n')

# b. Text Data Type
c = "Hello"
print('The type of c : ', c, ' is ', type(c))

print('\n')

# c.  Boolean Data Type
d = True
print('The type of d : ', d, ' is ', type(d))

print('\n')

# d. Sequence Data Type : lists, tuples
# Lists
list1 = [1, 2, 3, 4, 5, [-4.3, 6.78], ['Apple', 'Banana']]
print('The type of list1 : ', list1, ' is ', type(list1))

print('\n')

# Tuples
tuple1 = (("Sparrow", "Koyal"), ("Apple", "Banana"))
print('The type of tuple1 : ', tuple1, ' is ', type(tuple1))

print('\n')

# e. Mapped Data Type : dict
# Dictionary
dict1 = {"Name": "foo", "Age": 12, "canVote": False}
print('The type of dict1 : ', dict1, ' is ', type(dict1))
