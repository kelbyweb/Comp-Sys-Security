import base64, socket

host = '127.0.0.1'
port = 11111

# connects to the remote server at 127.0.0.1 at port 11111
r = socket.socket(socket.AF_INET, socket.SOCK_STREAM) # r = server
r.connect((host, port))

# receive data “d” from the server and decode it 
d = r.recv(2048).decode() # d = decoded message in base64
word = str(d)
print(word)
s = base64.b64decode(d).decode() # s = decoded base64 string
word = str(s)
print(word)
r.send((s+'\n').encode()) # send “s” back to the server

# create a loop to get data from the server & send response back to server automatically
# use “==” to determine if we need to answer the problems 
# or we receive a flag, assuming the flag does not have “==” in it
while str(d) != "=":
    d = r.recv(2048).decode()
    print(str(d[4])) 
    if str(d[4]) != '=':
        break
    word = str(d)
    print(word)
    s = base64.b64decode(d).decode()
    word = str(s)
    print(word)
    r.send((s+'\n').encode())

d = r.recv(2048)
word = str(d)
print(word)
