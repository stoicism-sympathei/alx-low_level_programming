
# C - Dynamic libraries


## Tasks :page_with_curl:

* [main.h](./main.h): Header file containing the prototypes of all functions
  included in `libdynamic.so`.

* **0. A library is not a luxury but one of the necessities of life**
  * [libdynamic.so](./libdynamic.so):

  * **1. Without libraries what have we? We have no past and no future**
    * [1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh): Bash script that creates a
      dynamic library called `liball.so` from all the `.c` files in the current directory.

  * **2. Let's call C functions from Python**
        * [100-operations.so](./100-operations.so): C dynamic library containing basic C
	  mathematical operation functions that can be called from Python.
