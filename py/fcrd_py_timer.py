"""===================================================================================================
By: focusedcord1337 (hugo.jobbb@gmail.com) 
fcrd_py_timer.py a moduel/package that handels timing things
==================================================================================================="""
#!/usr/bin/env python3

try:
    import time
    from functools import lru_cache

    def time_taken(func):
        """def time_taken(func: function)

            Takes in a function, times it, prints time to run func and then returns the value of that function
            
            @func   Function to run
            
            Tips : best to use as a decorator [@time_taken] and pair with [@lru_cache]
            \n""" 
        def wrapper(*args, **kwargs):
            bfr = time.time()
            val = func(*args, **kwargs)
            after = time.time()
            print(f"\nTime for {func.__name__}: {after -bfr} Seconds")          
            
            return val
        return wrapper

    if __name__ == "__main__":
        print(__doc__, end='\n')

        @time_taken
        @lru_cache
        def add_loop(x,y,z):
            for i in range(1,z):
                x += y

            return x

        print(f"[1]: Result of add_loop: {add_loop(x=0,y=1, z=100000000)}")
        print(f"[2]: Result of add_loop: {add_loop(x=0,y=1, z=100000000)}\n")

except Exception as err:
    print(f"In fcrd_py_timer.py {err}")
