#include <iostream>
#include <algorithm>
#include <vector>

using ll = long long;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while(t--) {
        int n1, n2;
        std::cin >> n1 >> n2;
        std::vector <ll> entry1(n1), entry2(n2);
        for(auto &item: entry1)
            std::cin >> item;
        for(auto &item: entry2)
            std::cin >> item;
        std::sort(entry1.begin(), entry1.end());
        std::sort(entry2.begin(), entry2.end());
        ll res = entry1[n1-1]*entry2[0];
        std::cout << res << "\n";
    }
    return 0;
}