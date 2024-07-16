#include<iostream>
#include<vector>
#include<math.h>

#define ll long long
using namespace std;
bool IsPrime(int n){
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n , k;
    cin>>n>>k;
    vector<int> primes;
    for(int i = 2 ; i < n ; i++){
        for(int j = 2 ; j < sqrt(i) ; j++){     
            if(i % j == 0){
                primes.push_back(i);
            }
        }
    }
    int ans = 0;
    for(int i = 0 ; i < primes.size()-1 ; i++){
        int num = primes[i]+primes[i+1]+1;
        if((IsPrime(num))&&(num<=n)){
            ans++;
        }
    }
      if(ans>=k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    return 0;
}
