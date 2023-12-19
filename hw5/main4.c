/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i = 12345;
    int j = 0;
    int l = 0;
    if(i >= 10000){
        j = i%10000/1000;
    }else{
        j = i/1000;
    }
    l = i%10;
    printf("%d", i-(j*1000)-l+(l*1000)+j);
    return 0;
}
