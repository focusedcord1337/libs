#!/usr/bin/env python3
"""
===================================================================================================
By: focusedcord1337 (hugo.jobbb@gmail.com)

gpack.py a moduel/package that generates a .py file packages
==================================================================================================="""
from os import getcwd, path, sep, remove, makedirs
from glob import glob

##########################################################################################################################################    

def gen_package(pkg_nm:str = "test_pkg", doc_info:str = " ... ", p_dir:str = getcwd(), usr_nm:str = "jane doe"):
    """gen_package(pkg_nm:str = "test_pkg", doc_info:str = " ... ", p_dir:str = "py") ->bool
    Generates a *.py package from root dir of repo to desired dir 
    
    @pkg_nm:str     Name of the package
    @doc_info:str   Info about package (optional)
    @p_dir:str      The package directory
    
    """
    DOC_SEP = "==================================================================================================="
    PKG_DOC = 'a moduel/package that'
    SHEBANG = "#!/usr/bin/env python3"

    PKG_IMPORT0 = "from glob import glob"
    PKG_IMPORT1 = "from os import getcwd, path, sep, remove"
    F_EXTENSION = ".py"

    pkg_nm, doc_info, p_dir = str(pkg_nm), str(doc_info), str(p_dir)
    try:
        makedirs(name=p_dir,exist_ok=True)
        
        if (not F_EXTENSION in pkg_nm and True):
            pkg_nm += F_EXTENSION
        
        if (pkg_nm[0].isalpha() and (len(glob(p_dir)) > 0) and len(glob(p_dir + path.sep + pkg_nm)) == 0):
    
            template_pkg = f'''"""{DOC_SEP}
By: {usr_nm} 
{pkg_nm} {PKG_DOC} {doc_info} 
{DOC_SEP}"""
{SHEBANG}

try:
    {PKG_IMPORT0}
    {PKG_IMPORT1}
    if __name__ == "__main__":
        print(__doc__, end='\\n')

except Exception as err:
    print(f"In {pkg_nm} {{err}}")
'''
            pkg_nm = p_dir + path.sep + pkg_nm    
            with open(pkg_nm, "w") as f:
                f.write(template_pkg)
        else:
            if len(glob(pkg_nm)) != 0:
                print(f"{pkg_nm} cant exist in {p_dir}\n")
            else:
                print(f"package name need to start with an aplhabetical character!\n")
                            
    except Exception as err:
        print(f"In gen_package() {err}")
##########################################################################################################################################    

try:
    ##########################################################################################################################################    
    if __name__ == "__main__":
        print(__doc__, end='\n')

        p_nm = ""
        d_info = ""
        create_p = True
        inp = str()
        verbose = True
        while verbose:
            vrbs = input("verbose mode[y,n]: ")

            if vrbs.lower() == "n" or vrbs == "":
                verbose = False
            elif(vrbs.lower() == "y"):
                break
            else:
                continue

        while create_p:
            p_nm = input("Packages name: ")
            if len(p_nm) > 0:
                d_info = input("Doc info: ")
                if verbose:
                    dpth = input("dir Path: ")
                    u_nm = input("User name: ")
                    gen_package(pkg_nm=p_nm, doc_info=d_info, p_dir=dpth, usr_nm=u_nm)
                else:
                    gen_package(pkg_nm=p_nm, doc_info=d_info, usr_nm="focusedcord1337 (hugo.jobbb@gmail.com)")
            
            while True:
                inp = input("Want to try again[y,n]: ")
                if inp.lower() == "n":
                    create_p = False
                    break
                elif(inp.lower() == "y"):
                    create_p = True
                    break
                else:
                    continue
    ##########################################################################################################################################
except Exception as err:
    print(f"In gen_py.py {err}\n")
