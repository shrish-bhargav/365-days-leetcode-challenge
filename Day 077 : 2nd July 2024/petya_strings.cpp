//https://codeforces.com/problemset/problem/112/A

#include <iostream>
#include <string>
#include <algorithm> // for transform

using namespace std;

int main() {
    string x, y;
    cin >> x >> y;
    
    // Convert both strings to lowercase
    transform(x.begin(), x.end(), x.begin(), ::tolower);
    transform(y.begin(), y.end(), y.begin(), ::tolower);
    
    int ans = 0;

    // Compare the strings
    if (x < y) {
        ans = -1;
    } else if (x > y) {
        ans = 1;
    } else {
        ans = 0;
    }
    
    cout << ans << endl;
    return 0;
}
