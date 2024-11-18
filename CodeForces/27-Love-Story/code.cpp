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
   vector<int> arr(n);
   for(int &num : arr){
     cin >> num;
   }
   int count = 0;
   int ans = -1;
   for(int i = 0 ; i < n  ;i++){
     if(arr[i] == 0){
        count++;
     }
     else{
        count = 0;
     }
     ans = max(count , ans);
   }
   cout<<ans<<"\n";
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