#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
#define vl(x,n) vector<int> x(n,0)
#define long long ll 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vl(arr,n);
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
        }
        unordered_map<int , int> mpp;
        bool yes = true;
        for(int i = 0 ; i < n ; i++){
            mpp[arr[i]]++;
            if(mpp.size()>2){
                yes = false;
                break;
            }
        }
        if(mpp.size() == 2){
            int f1 = begin(mpp)->second;
            if(f1 != n/2 && f1 != (n+1)/2){
                yes = false;
            }
        }
        if(yes){ cout<<"Yes"<<endl;}
        else {cout<<"No"<<endl;}

    }
    return 0;
}
