#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long num = n;
    long number = 0;
    while(n!=0){
        int digit = num % 10;
        if(digit<=(9-digit)){
            number = number*10 + digit;
            n = n/10;
        }
        else{
            number = number*10 + (9-digit);
            n = n/10;
        }
    }
    cout<<number<<endl;
    return 0;
}
