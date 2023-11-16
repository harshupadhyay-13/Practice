#include <iostream>
using namespace std;
int main(){
    //print 1 to N but only odd numbers.
    int i,a;
    cin>>a;
    for(i=1;i<=a;i++)
    if(i%2!=0)
    cout<<i<<endl;
    return 0;
}