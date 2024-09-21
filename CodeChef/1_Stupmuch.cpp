#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t; 
    while(t--){
        ll i , j;
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;
        }
        ll ans = 0 , mincapacity = INT64_MAX;
        for(int i = 0 ;i < n; i++){
            mincapacity = min(mincapacity,a[i]);
            ans = ans + mincapacity;
        }
        cout<<ans<<endl;
    }

}
