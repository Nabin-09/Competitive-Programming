#include<iostream>
#define ll long long
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w" ,stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2 == 0)
        cout<<2<<" "<<n<<endl;
        else
        cout<<2<<" "<<n-1<<endl;
    }
    return 0;
}
