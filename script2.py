#!/usr/bin/python3
#-*- coding: utf-8 -*-

# Name: Kelby Webster 
# netID: klw231

# import base64 for decoding
import base64

# open file & read by line 
with open("catchthemall.txt", "r") as f:
    count = 0
    for line in f:
        # increment counter
        count += 1
        # decode every 8th line into bytes
        if (count) % 8 == 0:
            l = base64.b64decode(line)
            # convert bytes into string 
            decodeString = l.decode("UTF-8")
            # strip punctuation
            o = b''
            # print line # & 4 capital letters for every 8 lines
            print(count, ':', decodeString.strip())
            




