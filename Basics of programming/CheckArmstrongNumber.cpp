#include<bits/stdc++.h>
using namespace std ;

bool ArmstrongNum(int n)
{
    int k= to_string(n).length();
    int sum=0;
    int  num =n ;
    while(n>0)
    {
        int ld=n%10;
        sum+=pow(ld,k);
        n/=10;
    }
    
  if (sum ==num)
{
    cout<<"The number is an Armstrong number"<<endl ;
   }
   else
   {
    cout<<"The number is not an Armstrong number"<<endl ;
   }
}
int main()
{
    int n ;
    cout<<"Enter the number :"<<endl;
    cin>>n ;
   ArmstrongNum(n);
   
    return 0;
}