#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>> n ;
        char s[n];
        cin>>s;
        int count = 0;
        int ans = INT16_MIN;
        for(int i = 0 ; s[i] != '\0' ; i++){
            if(s[i] == '.'){
                count++;
            }
            else{
                count = 0;
            }
            ans = max(ans , count);
        }
        if(ans>=3){
            cout<<"2"<<endl;
        }
        else{
            ans = 0 ;
            for(int i = 0 ; s[i] != '\0' ;i++){
                if(s[i] == '.'){
                    ans++;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
