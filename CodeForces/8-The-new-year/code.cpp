#include<iostream>
#include<algorithm>
using namespace std;
int maximum(int a , int b , int c){
     
     if(a>=b && a>=c)
     return a;

     else if(b>=a && b>=c)
     return b;

     else if(c>=b && c>=a)
     return c;
}
int main()
{
    int a  , b , c;
    cin >> a >> b >> c;
    int n = maximum(a , b , c);
    int mini = INT16_MAX;
    for(int i = 0 ; i<n ; i++){
        mini = min(mini,(abs(a-i))+(abs(b-i))+(abs(c-i)));
    }
    cout<<mini<<endl; 
    return 0;
}
