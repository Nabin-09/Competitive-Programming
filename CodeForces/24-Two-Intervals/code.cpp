#include<bits/stdc++.h>
using namespace std;

#define pyes cout << "YES\n" ;
#define pno cout << "NO\n" ;
#define br cout << "\n" ;
#define ff first 
#define ss second
#define pb push_back
#define ppb pop_back
#define MOD 998244353
#define mod 1000000007
#define inf 9223372036854775807
#define all(x) (x).begin(),(x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void solve(){
    ll l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if(l2<l1){
        swap(l1, l2);   
        swap(r1,r2);
    }
    if(l2 > r1) cout<<"-1\n";
    else{
        cout<<l2<<" "<<min(r1,r2)<<"\n";
    }
}

int main() 
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    

    return 0;
}