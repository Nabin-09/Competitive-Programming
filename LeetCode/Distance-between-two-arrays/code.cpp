#include<iostream>
#include<vector>
using namespace std;
int FindTheDistance(vector<int> arr1 , vector<int> arr2 , int d){
        int ans = 0;
        for(int i:arr1){
            int exists = 0;
            for(auto j:arr2){
                if(abs(i-j)<=d){
                    exists  = 1 ; break;
                }
            }
            if(exists == 0) ans++;
        }
        return ans;
}
int main()
{
    return 0;
}
