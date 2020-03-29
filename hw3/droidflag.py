#!/usr/bin/python3
#-*- coding: utf-8 -*-
import base64

# ReverseMe example
import socket

# host = '127.0.0.1'
# port = 6464

# connect to server
# r = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
# r.connect((host,port))

# create string 
d = "ZmxhZ193YWl0X3dhc250X2l0X2RhbHZpawo="
print("\n" + d + "\n")
# decode + string
s = base64.b64decode(d).decode()
print(s)
