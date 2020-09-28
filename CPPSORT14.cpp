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
        int res = 0;
        for(int i = 0; i < n-1; i++)
            if(entry[i+1] != entry[i])
                res += entry[i+1] - entry[i] - 1;
        cout << res << "\n";
    }
    return 0;
}