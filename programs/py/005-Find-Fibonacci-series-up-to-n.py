#Fibonacci Series are those numbers which are started from 0, 1 and their next number is the sum of the previous two numbers. 


#Recursive Approach
# def Fib(num) : 
#    if num <= 1: 
#       return num
#    else:
#       return (Fib(num-1) + Fib(num-2))

# num = int(input("Enter The number "))

# if num<0: 
#    print("Please enter the positive number")
# else :
#    print("Fibonacci Series: ")
#    for i in range(num):
#       print(Fib(i))



##~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
num = int(input("Enter The number "))
n1 , n2 = 0, 1
print("fibonacci series: ")
print(n1)
print(n2)
for i in range(1,num):
   n3=n1+n2
   n1=n2
   n2=n3
   print(n3)


# Function for nth Fibonacci number
# def Fibonacci(n):

	# Check if input is 0 then it will
# 	# print incorrect input
# 	if n < 0:
# 		print("Incorrect input")

# 	# Check if n is 0
# 	# then it will return 0
# 	elif n == 0:
# 		return 0

# 	# Check if n is 1,2
# 	# it will return 1
# 	elif n == 1 or n == 2:
# 		return 1

# 	else:
# 		return Fibonacci(n-1) + Fibonacci(n-2)

# # Driver Program
# print(Fibonacci(9))



