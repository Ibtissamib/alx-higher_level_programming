#!/usr/bin/python3
for i in range(0, 99):
	    d = i // 16
	        r = i % 16
	        if r == 10:
	            r = 'a'
	        elif r == 11:
	            r = 'b'
	        elif r == 12:
	            r = 'c'
	        elif r == 13:
	            r = 'd'
	        elif r == 14:
	            r = 'e'
	        elif r == 15:
	            r = 'f'
	        print('{:} = 0x{:}{:}'.format(i, d if d > 0 else '', r))
