#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <int> entry(n);
        for(auto &item: entry)
            cin >> item;
        sort(entry.begin(), entry.end());
        cout << entry[n-1] << "\n";
    }
    return 0;
}