/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    //factorail of given number
    int a,fact;
    cin>>a;
    fact=a;
    while(a>1){
        a--;
        fact*=a;
    }
    cout<<fact;
    return 0;
}
