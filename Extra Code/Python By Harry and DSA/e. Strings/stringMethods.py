# len()
# This is used to get the length of the string
name = "Shivam Jha"
print(len(name))

# upper()
# To make the alphabets into upper case we use it
str1 = "Shivam Jha"
print(str1.upper())

# lower()
# To make the uppercase characters converted to lower case
print(str1.lower())

# strip()
# This is used to remove the leading and trailing whitespace
str2 = "          Silver Spoon "
print(str2.strip())

# rstrip()
# This is used to remove any sort of trailing characters
str2 = "Hello !!!!!"
print(str2.rstrip("!"))

# replace()
# This is responsible to replace any set of characters from the string with something else
str2 = "Silver Spoon"
print(str2.replace("Sp", "M"))

# Strings are immutable thus even if we make changes on the string using methods
# The original String remains intact
print('''\nAs strings are immutable,
thus methods applied on them, 
don't make changes in the original string.''') 
print(str1)

