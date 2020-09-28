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
        int count = 0, res = 0;
        vector <int> entry1(n), entry2(n);
        for(auto &item: entry1)
            cin >> item;
        for(auto &item: entry2)
            cin >> item;
        int count1 = 0, count2 = 0;
        for(int i = 0; i < n; i++) {
            count1 = entry1[i];
            count2 = entry2[i];
            if(count1 == count2)
                count = count1;
            if(count > res)
                res = count;
            for(int j = i+1; j < n; j++) {
                count1+=entry1[j];
                count2+=entry2[j];
                if(count1 == count2){
                    // count = count1;
                    count = j-i+1;
                }
                if(count > res)
                    res = count;
            }
            if(count > res) 
                res = count;
            count = 0;
        }
        cout << res << "\n";
    }
    return 0;
}