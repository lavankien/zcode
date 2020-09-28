#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int *entry = new int[1000000];
        int *n = new int;
        cin >> *n;
        for(int i = 0; i < *n; i++)
            cin >> *(entry+i);
        sort(entry, entry+*n);
        for(int i = 0; i < *n; i++)
            cout << *(entry+i) << " ";
        cout << "\n";
        delete n;
        delete [] entry;
    }
    return 0;
}