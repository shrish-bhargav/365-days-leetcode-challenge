#include <iostream>
#include <string>
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;

  

    string ans = "";
    for (string::size_type i = 0; i < x.size(); i++) {
        if (x[i] != y[i]) {
            ans += '1';  // Append '1' to the result string
        } else {
            ans += '0';  // Append '0' if characters are the same
        }
    }

    cout << ans << endl;
    return 0;
}
