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
        vector <ll> entry;
        entry.resize(n);
        for(auto &item: entry)
            cin >> item;
        vector <ll> a, b;
        for(auto item: entry)
            if(item != 0)
                a.push_back(item);
            else 
                b.push_back(item);
        for(auto item: a)
            cout << item << " ";
        for(auto item: b)
            cout << item << " ";
        cout << "\n";
    }
    return 0;
}