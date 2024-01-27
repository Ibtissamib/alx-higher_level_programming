#!/usr/bin/python3
if __name__ == '__main__':
    import sys
    print('{:} {}{}'.format(
        len(sys.argv) - 1,
        'argument' if len(sys.argv) == 2 else 'arguments',
        '.' if len(sys.argv) == 1 else ':'))
    for i in range(1, len(sys.argv)):
        print('{}: {}'.format(i, sys.argv[i]))
