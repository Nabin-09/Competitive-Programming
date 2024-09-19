#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<set>

#define pyes cout << "YES\n" ;
#define pno cout << "NO\n" ;
#define br cout << "\n" ;
#define ff first 
#define ss second
#define pb push_back
#define ppb pop_back
#define MOD 998244353
#define mod 1000000007
#define inf 9223372036854775807
#define all(x) (x).begin(),(x).end()

using namespace std;
int main()
{
    #ifdef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(60);
    s.insert(70);
    s.insert(55);
//checking if val exists in my set or not
    int val = 30;
    if(s.find(val) != s.end()) { pyes }
    else pno
//Iterating through the set.
for(auto it = s.begin() ; it!= s.end() ; ++it){
    cout<<*it<<" ";
}
br
cout<<"Size of set : "<<s.size();
br
//Deleting a range of elements
auto st = s.find(20);
auto jt = st;
for(int i = 0 ; i < 2 ; i++){
    jt++;
}
s.erase(st,jt);
for(auto it = s.begin() ; it!= s.end() ; ++it){
    cout<<*it<<" ";
}
br
/*OUTPUT :
YES
10 20 30 40 55 60 70 
Size of set : 7
10 40 55 60 70 */

    return 0;
}
