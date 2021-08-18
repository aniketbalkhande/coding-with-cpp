#Armstrong: 
# the sum of cubes of digids = the number itself

number = int(input("Enter a number"))
sum = 0
temp = number
while number>0:
   remainder = number % 10
   print(remainder)
   sum += remainder*remainder*remainder
   number /=10

print(sum)
if sum == temp: 
   print("{} is armstrong ".format(temp))
else:
   print("{} is not armstron".format(temp))
