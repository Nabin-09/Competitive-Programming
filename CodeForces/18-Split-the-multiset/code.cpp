#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

int minOperations(int n, int k) {
    if (n == 1) return 0;
    
    // BFS initialization
    queue<int> q;
    unordered_map<int, int> distance;
    q.push(n);
    distance[n] = 0;

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        int currentDistance = distance[current];

        // If we reached 1, return the distance
        if (current == 1) {
            return currentDistance;
        }

        // Generate next states by splitting current number
        for (int i = 1; i <= k; ++i) {
            if (current > i) {
                int next = current - i;
                if (distance.find(next) == distance.end()) {
                    distance[next] = currentDistance + 1;
                    q.push(next);
                }
            }
        }
    }

    return -1; // should not reach here for valid inputs
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << minOperations(n, k) << endl;
    }
    return 0;
}
