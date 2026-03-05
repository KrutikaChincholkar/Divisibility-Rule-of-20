num = int(input("Enter a number: "))

last_digit = num % 10
last_two = num % 100

if last_digit == 0 and last_two % 4 == 0:
    print(num, "is divisible by 20")
else:
    print(num, "is not divisible by 20")
