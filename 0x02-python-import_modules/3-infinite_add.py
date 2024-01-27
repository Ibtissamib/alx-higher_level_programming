#!/usr/bin/python3
if __name__ == '__main__':
    s = 0
    import sys
    for i in range(1, len(sys.argv)):
        s = s + int(sys.argv[i])
    print('{:}'.format(s))

