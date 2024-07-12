#include<iostream>
#include<string>
using namespace std;
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
        int n , m;
        cin>>n>>m;
        string s;
        cin>>s;
        string t;
        cin>>t;

        bool found = false;
        for(int i = 0 ; i<= 5 ; i++){
            if(s.find(t) != string::npos) {// string::npos is equivalent to -1 for strings
                cout<<i<<endl;
                found = true;
                break;
            }
            s.append(s);
        }
        if(!found) cout<<-1<<endl;
    }
    return 0;
}
