#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        ll h, c;
        cin >> h >> c;
        vector <ll> entry(h*c);
        for(int i = 0; i < h*c; i++)
            cin >> entry[i];
        sort(entry.begin(), entry.end());
        for(auto item: entry)
            cout << item << " ";
        cout << "\n";
    }
    return 0;
}