from platform import system as getos
from os.path import join

def check_path(unixpath: str):
    a = pathp.split("/")
    return join(*a)

def write_once(path: str, con: str):
    a = open(path, 'w')
    a.write(con)
    a.close()

def read_once(path: str):
    a = open(path, 'r')
    b = a.read()
    a.close()
    return b
