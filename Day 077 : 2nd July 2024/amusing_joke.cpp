// https://codeforces.com/problemset/problem/141/A

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    
    // Combine strings a and b
    string combined = a + b;
    
    // Sort both combined and c
    sort(combined.begin(), combined.end());
    sort(c.begin(), c.end());
    
    // Compare the sorted versions
    if (combined == c) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
