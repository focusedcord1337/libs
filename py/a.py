"""===================================================================================================
By: jonathan 
a.py a moduel/package that a 
==================================================================================================="""
#!/usr/bin/env python3

try:
    from glob import glob
    from os import getcwd, path, sep, remove
    if __name__ == "__main__":
        print(__doc__, end='\n')

except Exception as err:
    print(f"In a.py {err}")
