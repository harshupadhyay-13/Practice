#include <iostream>
using namespace std;
#define pi 3.14
int main(){
    //print counting from 1 to N.
    int a[20],sum=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
    }
    cout<<sum;
    return 0;
}