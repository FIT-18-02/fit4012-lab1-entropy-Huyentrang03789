#include <iostream>

using namespace std;

int extended_euclid(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int g = extended_euclid(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, m;
    while (cin >> a >> m) {
        int x, y;
        int g = extended_euclid(a, m, x, y);
        
        if (g != 1) {
            cout << -1 << endl;
        } else {
            cout << (x % m + m) % m << endl;
        }
    }

    return 0;
}
