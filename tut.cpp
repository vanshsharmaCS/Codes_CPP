/*
Print natural no. between 1-10
#include<iostream>
using namespace std;
int main() {
    int i;
    for( i = 0;  i<=10; i++)
{
    cout<<i<<endl;
}
return 0;
}*/
// Write a programe the sum of all natural no.

#include<iostream>
using namespace std;
int main() {
    int i,sum =0;
    int n;
    cin>>n;
    for( i = 1;  i<=n;  i++)
{
    cout<<i<<endl;
    sum=sum+i;
    
}
cout<<"The sum of natural number is "<<sum<<endl;
return 0;
}