#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
if number >= 0:
	i = number % 10
else:
	i = -(-number % 10)
if i > 5:
	print('Last digit of', number, 'is', i, 'and is greater than 5')
elif i == 0:
	print('Last digit of', number, 'is', i, 'and is 0')
else:
	print('Last digit of', number, 'is', i, 'and is less than 6 and not 0')
