#include <iostream>
#include <vector>

std::vector <int> v;

int n;

void print() {
    for(int i = 0; i < v.size(); i++)
        std::cout << v[i];
    std::cout << " ";
}

void Try(int i) {
    for(int j = 0; j <= 1; j++) {
        if(i == n) {
            print();
            return;
        }
        else {
            v.push_back(j);
            Try(i+1);
            v.pop_back();
        }
    }
}

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        std::cin >> n;
        Try(0);
        std::cout << "\n";
    }
    return 0;
}