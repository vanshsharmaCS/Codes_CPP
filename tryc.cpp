#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int sum=0;
    while(a!=0){
        
        int rev=a%10;
      sum+=rev;
      a/=10;
    }
    cout<<sum;
}