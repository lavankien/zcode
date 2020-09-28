#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        ll n, k;
        bool found = false;
        cin >> n >> k;
        vector <ll> entry(n);
        for(auto &item: entry)
            cin >> item;
        for(int i = 0; i < n; i++)
            if(entry[i] == k) {
                found=true;
                cout << i+1;
                break;
            }
        if(!found)
            cout << -1;
        cout << "\n";
    }
    return 0;
}