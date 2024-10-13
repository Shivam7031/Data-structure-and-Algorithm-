#include<iostream>
using namespace std;
void CountDigit(int n)
{
    int count = 0;
    while (n>0)
    {
     count++;
    n/=10;
  
    }
    cout<<"The number of digits are : "<<count<<endl ;
    
}
int main()
{
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    CountDigit(n);
    return 0;
}