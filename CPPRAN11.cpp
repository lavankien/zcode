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
        int res = 10000000;
        for(int i = 0; i < n-1; i++)
            for(int j = i+1; j < n; j++)
                if(abs(entry[i] - entry[j]) < res)
                    res = abs(entry[i] - entry[j]);
        cout << res << "\n";
    }
    return 0;
}