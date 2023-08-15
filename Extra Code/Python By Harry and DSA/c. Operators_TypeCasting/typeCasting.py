# Type Cating
# The method of conversion of one data type to another is defined as typecating.

# They are namely of two types:
# a. Explicit TypeCastng : Done by developer as per needs manually
print('Explicit Type Casting : ')
string = "15"
number = 7
string_numeric = int(string)

summation = string_numeric + number
print(summation)


# b.  Implicit TypeCastng : Done by machine as per needs automatically

# And this is the bucket wala example and in the datatype with smaller order is converted to thet of higher order and then returned
# And in python this is done to avoid dataloss
print('Implicit Type Casting : ')
a = 7
print(type(a))

b = 7.2
print(type(b))

# On dummation the type of c is taking both a and b but is considering that of b because it is a higher order data type and is done thus to avoid data loss 
c = a+b
print(c,type(c))