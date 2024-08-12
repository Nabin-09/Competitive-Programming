#include<iostream>
#include<vector>
#include<algorithm>
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
      int n ;
      cin >> n;
      vector<int> a(n) , b(n);
      for(int i = 0 ; i < n ; i++){
        cin>>a[i];
      }
      for(int i = 0 ; i < n ; i++){
        cin >> b[i];
      }
      vector<int> c = b;
      reverse(c.begin() , c.end());
      if(a == b || a == c){
        cout<<"Bob\n";
      }
      else
      cout<<"Alice\n";
    }
    return 0;
}