#include<iostream>
using namespace std;
int min(int a,int b){
    if(a<=b){
        return a;
    }
    else
    return b;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int mini = INT32_MAX;
        for(int i = 1;i<=10;i++){
            mini = min(mini,((abs(i-a))+(abs(i-b))+(abs(i-c))));
        }
        cout<<mini<<endl;
    }
    return 0;
}
