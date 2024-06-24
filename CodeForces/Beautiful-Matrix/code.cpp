#include<iostream>
using namespace std;
int main()
{
    int arr[5][5];
    int x , y ;
    for(int i = 0 ;i<=4;i++){
        for(int j = 0;j<=4;j++){
            cin>>arr[i][j];
        }
    }
      for(int i = 0 ;i<=4;i++){
        for(int j = 0;j<=4;j++){
            if(arr[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }
    int count = 0;
    count = abs(2 - x) + abs(2-y);
    cout<<count;
    return 0;
}
