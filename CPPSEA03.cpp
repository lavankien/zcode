#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <ll> entry(n-1);
        for(auto &item: entry)  
            cin >> item;
        sort(entry.begin(), entry.end());
        if(entry[0] != 1) {
            cout << 1 << "\n";
            continue;
        }
        bool found = false;
        for(int i = 0; i < n-2; i++) {
            if(entry[i+1] - entry[i] > 1) {
                found=true;
                cout << entry[i]+1 << "\n";
                break;
            }
        }
        if(!found)
            cout << entry[n-2]+1 << "\n";
    }
    return 0;
}