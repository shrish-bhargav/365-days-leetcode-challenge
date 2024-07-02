// https://codeforces.com/problemset/problem/133/A

#include <iostream>
#include <string>

using namespace std;

int main() {
    string p;
    cin >> p;
    
    string ans = "NO";
    
    for (string::size_type i = 0; i < p.size(); i++) {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
            ans = "YES";
            break; // No need to check further once a valid character is found
        }
    }
    cout << ans << endl;
    return 0;
}
