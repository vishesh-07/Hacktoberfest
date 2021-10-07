import socket
host_name = socket.gethostname()
IP_address = socket.gethostbyname(host_name)
print("Host Name is:" + host_name)
print("Computer IP Address is:" + IP_address)