variable = input()
print(variable, type(variable)) # No matter what is the type of input given it would always be of class str

# And in order to make other datatype based input you need to typecast
a = int(input())
print(a, type(a)) # When type casted the type changes accordingly

b = float(input())
print(b, type(b))  # When type casted the type changes accordingly

# We can even add messages before taking our input as well
name =  input("Enter your name : ")
print("Hi !", name ," Nice to meet you.")