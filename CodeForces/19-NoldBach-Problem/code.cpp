// #include<iostream>
// #include<vector>
// #include<math.h>

// #define ll long long
// using namespace std;
// bool IsPrime(int n){
//     for(int i = 2 ; i <= sqrt(n) ; i++){
//         if(n % i == 0){
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif
//     int n , k;
//     cin>>n>>k;
//     vector<int> primes;
//     for(int i = 2 ; i < n ; i++){
//         for(int j = 2 ; j < sqrt(i) ; j++){     
//             if(i % j == 0){
//                 primes.push_back(i);
//             }
//         }
//     }
//     int ans = 0;
//     for(int i = 0 ; i < primes.size()-1 ; i++){
//         int num = primes[i]+primes[i+1]+1;
//         if((IsPrime(num))&&(num<=n)){
//             ans++;
//         }
//     }
//       if(ans>=k) cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     return 0;
// }
//4264838   Aug 11, 2013 12:28:28 PM	fuwutu	 17A - Noldbach problem	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <cstdio>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    int prime[1000] = {3, 5}, count(2);
    for (int number = 7; number <= n && k != 0; number += 2)
    {
        int i = 0;
        while (i < count && number % prime[i] != 0)
        {
            ++i;
        }
        if (i == count)
        {
            for (int j = 1; j < count; ++j)
            {
                if (prime[j] + prime[j-1] + 1 == number)
                {
                    k -= 1;
                    break;
                }
            }
            prime[count++] = number;
        }
    }
    printf(k == 0 ? "YES\n" : "NO\n");
    return 0;
}