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
    int n;
    cin >> n;
    char k;
    cin >> k;
    string str;
    cin >> str;
        for(int i = n-1; i >= 0; i--){
        if(str[i] - '0' > k) {
            if (i > 0) { 
                str.insert(i-1, 1, k); 
            }
        }
    }
    cout<<str<<"\n";
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }

    return 0;
}
