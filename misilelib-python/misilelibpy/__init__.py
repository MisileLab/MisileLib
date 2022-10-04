from platform import system as getos

def check_path(unixpath: str):
    if getos() == "windows":
        return unixpath.replace('/', '\\')
    else:
        return unixpath
