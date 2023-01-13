#include <iostream>
using namespace std;

int main() {
    int n;
    double a, b;
    double total = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        total += a * b;
    }

    cout << total;

    return 0;

}
