#include<iostream>
#include<vector>
using namespace std;
bool Sorted(vector<int> v){
    int n = v.size();
    for(int i = 0;i<n-1;i++){
        if(v[i+1]<v[i]){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(k>1){
            cout<<"YES"<<endl;
        }
        else{
            if(Sorted(v)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}
