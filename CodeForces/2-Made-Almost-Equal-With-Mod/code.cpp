#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const ll MOD=1e9+7;

int main()
{   
    ll testCases;
    cin>>testCases;
    while(testCases--){
        ll arraySize, smallestPowerOfTwo = 2;
        cin>>arraySize;
        vector<ll> numbers(arraySize);
        for(ll i = 0; i < arraySize; i++) {
            cin>>numbers[i];
        }
        while(1) {
            set<ll> remainders;
            for(ll i = 0; i < (ll)numbers.size(); i++) {
                remainders.insert(numbers[i] % smallestPowerOfTwo);
            }
            if((ll)remainders.size() == 2)
                break;
            smallestPowerOfTwo *= 2;
        }
        cout << smallestPowerOfTwo << endl;
    }
    return 0;     
}
