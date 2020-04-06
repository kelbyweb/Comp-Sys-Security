#!/usr/bin/python

# this is a python 2 program

import sys

# test 1
overflow = 'abcd'

# test 2
#overflow = '\x61\x62\x63\x64\x65'

# test 3
#overflow = '\x01\x02\x03\x04\x05\x06\x07\x08\x00\x00\x00\x00'

sys.stdout.write(overflow)
