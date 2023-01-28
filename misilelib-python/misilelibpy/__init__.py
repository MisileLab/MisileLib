from os.path import join

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
