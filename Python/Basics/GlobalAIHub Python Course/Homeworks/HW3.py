#day4
#HW 3
def prime_first(num):
    isPrime = True
    if num<2:
        isPrime = False
    else:
        for number in range(2, num//2+1):
            if num % number == 0:
                isPrime = False
    if isPrime:
        print(num)
def prime_second(num):
    prime_first(num) # lazy me recalled the first function :)

for i in range (1001):
    if i==0:
        print("Prime numbers in the range of [0-500]:")
    if i==501:
        print("Prime numbers in the range of [500-1000]:")
    if i<=500:
        prime_first(i)
    if i>=500:
        prime_second(i)
