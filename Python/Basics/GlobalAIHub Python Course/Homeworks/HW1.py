#I TRIED TO MAKE DIFFERENT CODE , OF COURSE I CAN SOLVE IT IN A EASIER WAY.
#day2
#Generating a 3x3 matrix with 9 random prime numbers. 

#Source code:
from random import choice
# Initialize a list that will store prime numbers between the given range.
primes = []
stop=1000
for possiblePrime in range(2, stop):
    # Assume number is prime until shown it is not...
    isPrime = True
    for num in range(2, possiblePrime//2+1):
        if possiblePrime % num == 0:
            isPrime = False
    if isPrime:
        primes.append(possiblePrime)
#now, we are done storing prime numbers in the range of [2,1000) in a list that is "primes".
matrix=[[0,0,0],[0,0,0],[0,0,0]] # preallocation makes the code run faster, I think.
for i in range(3):
    for j in range(3):
        matrix[i][j]=choice(primes) # choosing 9 random numbers from the list primes...
#print(matrix) #this is going to give us one row out that is 2 dimantion matrix.
endl='\n'
print(endl,matrix[0],endl,matrix[1],endl,matrix[2]) #this is gonna make the output in better vision.
