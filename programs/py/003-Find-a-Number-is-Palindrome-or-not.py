# A palindrome number means  reverse of a number and original number both 
# are equal,so given number is Palindrome
# STEPS:
# 1] Find reverse using while loop 
# 2] Then check if original no. == reverse.

# number = int(input("enter the number: "))
# temp = number
# reverse = 0 
# while number > 0: 
#    remainder = number % 10
#    reverse = reverse*10 + remainder
#    number = number // 10

# if temp == reverse:
#    print("{} is Palindrome".format(temp))
# else:
#    print("{} is not a palindrome".format(temp))


# string = str(input("enter a string : "))
# #Two pointer approach
# front = 0
# back = len(string)-1
# palindrome = True

# while front<back:
#    if string[front] != string[back]:
#       palindrome = False

#    front +=1
#    back -=1

# if palindrome==True:
#    print("{} is palindrome ".format(string))
# else:
#    print("{} is not palindrome".format(string))

#---------------------------------------------------------

# string = str(input("enter a string : "))
# # using python string techniques
# reverse = string[::-1]

# if string==reverse:
#    print("{} is palindrome ".format(string))
# else:
#    print("{} is not palindrome".format(string))

