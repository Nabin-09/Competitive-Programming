#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

#define vl(x, n) vector<int> x(n, 0) 
#define take(v) for(auto &i : v) cin >> i  
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vl(arr, n);
        take(arr);
        
        int mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            mini = min(mini, arr[i]);
        }
        if(mini == arr[0]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
