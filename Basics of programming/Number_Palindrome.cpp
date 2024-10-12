#include<iostream>
using  namespace std;
 bool palindrome (int num)
 {
    int n=num;
    int rev=0;
    while (num>0){
        int last_digit=num%10;
        rev=rev*10+last_digit;
        num/=10;
    }
    if(rev==n)
    {
        return true;
    }
    else{
        return false;
    }
 }
 int main()
 {
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    if(palindrome(n))
    {
        cout<<"The number  is palindrome"<<endl;
    }
    else
    {
        cout<<"The  number is not palindrome"<<endl;
    }
    return 0;

 }
