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
        ll n;
        cin>>n;
        while(n%2==0){
            n = n / 2;
        }
        if(n==1) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
