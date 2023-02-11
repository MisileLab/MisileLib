from os.path import join
from os import system, name

def check_path(pathp: str):
    a = pathp.split("/")
    return join(*a)

def write_once(path: str, con: str):
    with open(path, 'w') as a:
        a.write(con)

def read_once(path: str):
    with open(path, 'r') as a:
        b = a.read()
    return b

def cls():
    system('cls' if name=='nt' else 'clear')
