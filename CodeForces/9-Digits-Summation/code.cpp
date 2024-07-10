#include<iostream>
#include<string>
using namespace std;
int main()
{
    string  a , b;
    cin>>a>>b;
    int x = a[a.size() - 1] - '0';
    int y = b[b.size() - 1] - '0';
    cout<<x+y<<endl;
    return 0;
}
