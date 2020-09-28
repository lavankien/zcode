#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int entry[1001], n, k;
        cin >> n >> k;
        for(int i = 0; i < n; i++)
            cin >> entry[i];
        int dem = 0;
        for(int i = 0; i < n-1; i++) 
            for(int j = i+1; j < n; j++)
                if(entry[i]+entry[j] == k)
                    dem++;
        cout << dem;
        cout << "\n";
    }
    return 0;
}