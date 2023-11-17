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
    //prime or not
    int a,f=0;
    cin>>a;
    for(int i=2;i<a;i++){
        if(a%i==0)
        f=1;
    }
    if(f==0)
    cout<<a<<" is prime number.";
    else
    cout<<a<<" is not a prime number.";
    return 0;
}
