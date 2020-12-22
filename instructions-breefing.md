# Programming Mnemonics

### C:
* Every Program need to start by a function call main
```c
    int main(){
        //Algorithms
        return 0;
    }
```
* In order to be able to write to the screen and read inputs from the user, we need to import the library stdio.h
```c
    #include <stdio.h>
    ///Algorithms
```
* In order to use Compile a C program we need to invoke the compiler, called gcc
```bash
    gcc nomeDoPrograma.c
```
* In order to use all math advanced functions already created for us, we need to include math.h and compile the program with -lm at the end.
```c
    #include <stdio.h>
    #include <math.h>
```
```bash
    #Para compilar
    gcc nomeDoPrograma.c -lm
```
* In order to print in C we need to use printf statements with the correct prefix
```c
    #include <stdio.h>
    
    int main(){
        //Algorithms
        printf("prefix",value To Print);
    }
```

| Type | Prefix |
| -------- | -------- |
| int     | %d     |
| float | %f |
| double | %lf |
| char | %c |
| string | %s |
| boolean | <span style="color:red">There isn't a direct way to do it</span> |


### C++:

* Every Program need to start by a function call main
```cpp
    int main(){
        //Algorithms
        return 0;
    }
```
* In order to be able to write to the screen and read inputs from the user, we need to import the library iostream
```cpp
    #include <iostream>
    ///Algorithms
```
* In order to use Compile a C++ program we need to invoke the compiler, called g++
```bash
    g++ nomeDoPrograma.c
```
* In order to use all math advanced functions already created for us, we need to include cmath
```cpp
    #include<iostream>
    #include<cmath>
```
* In order to print in C++ we need to use printf statements with the correct prefix
```cpp
    #include <iostream>
    
    int main(){
        //Algorithms
        cout<<valueToPrint;
    }
```