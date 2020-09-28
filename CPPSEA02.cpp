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
        cin >> n >> k;
        vector <ll> entry(n);
        for(auto &item: entry)
            cin >> item;
        sort(entry.begin(), entry.end());
        auto iter = lower_bound(entry.begin(), entry.end(), k);
        if(*iter == k)
            cout << 1;
        else    
            cout << -1;
        cout << "\n";
    }
    return 0;
}