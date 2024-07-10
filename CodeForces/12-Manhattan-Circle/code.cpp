#include<iostream>
#include<vector>
using namespace std;
  void solve(){
    int n , m ; 
    cin>>n>>m;
    vector<vector<char>> v(n,vector<char> (m));
    for(int i = 0 ; i < n ; i++){
        for(int  j = 0 ; j<m ; j++){
            cin>>v[i][j];
        }
    }
    int io = 0;
    int jo = 0;
    int cnt = 0;
    bool f = true;
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(v[i][j] == '#'){
                cnt = i;
                io = i;
                jo = j;
                f= false;
                break;
            }
        }
        if(!f) break;
    }
    while(true){
        if(io+1<n && v[io+1][jo] == '#'){
            io++;
        }
        else{
            break;
        }
    }
    cout<<((io+cnt)/2)+1<<" "<<jo+1<<endl;
  }
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve(); 
    }
    return 0;
}
