#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        vector <ll> entry(a+b);
        for(auto &item: entry)
            cin >> item;
        sort(entry.begin(), entry.end());
        for(auto item: entry)
            cout << item << " ";
        cout << "\n";
    }
    return 0;
}