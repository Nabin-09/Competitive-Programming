#include<iostream>
#define ll long long
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
       int a , b, c ;
       cin>> a >> b >> c;
       cout<<min(a,c)*min(b,c)<<endl
    }
    return 0;
}
