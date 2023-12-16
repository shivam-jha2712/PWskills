# Length of the string could be found using the len() method.
fruit = "Mango"
print(len(fruit))


# Slicing in python
# It works like taking the first character till the charcater just before the last character mentioned.
print(fruit[0:3]) # Normal Slicing 
print(fruit[:3]) # Slicing without the first parameter
print(fruit[0:]) # Slicing without the last parameter
print(fruit[-2:]) #Negative indexing and slicing

# Negative Slicing and reversal using negative slicing
pie  = "ApplePie"
print(pie[::-1]) 

# Quick Quiz
nm = "Harry"
print(nm[-4:-2])