#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector <ll> v;
        v.resize(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        // for(int i = 0; i < n-1; i++) {
        //     if(v[i] == v[i+1]) {
        //         int next = i+1;
        //         while(v[i] == v[next] and next < n) {
        //             v[next] = -1;
        //         }
        //         i+=next-1;
        //     }
            
        // }
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(v[j] == i or v[i] == j) {
                    swap(v[i], v[j]);
                }
            }
        }
        for(int i = 0; i < n; i++)
            if(v[i] == i)
                cout << i << " ";
            else 
                cout << -1 << " ";
        cout << "\n";
        // cout << "hey";
    }
    return 0;
}   