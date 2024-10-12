#include <iostream>
using namespace std;

    int Fibonacci(int n)
    {
        if(n<=1)
        {
            return 1;
        }
        int last=Fibonacci(n-1);
        int seclast = Fibonacci(n-2);
        return  last+seclast;
    }
    int main()
{
    int n;
    cout<<"Enter the number of terms you want in the Fibonacci sequence :"<<endl;
    cin>>n;
    cout<<"The first "<<n<<" terms of the Fibonacci sequence are: "<<Fibonacci(n)<<endl;
    
    return 0;
}