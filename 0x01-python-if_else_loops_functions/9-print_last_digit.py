#!/usr/bin/python3
def print_last_digit(number):
    i = (number % 10) if number >= 0 else ((-number) % 10)
    print('{:}'.format(i), end="")
    return (i)
