#include <iostream>
using namespace std;

int main() {
    int num_test_cases;
    cin >> num_test_cases;

    for (int i = 1; i <= num_test_cases; i++) {
        int num_rows, num_cols;
        cin >> num_rows >> num_cols;

        string image[num_rows];
        for (int j = 0; j < num_rows; j++) {
            cin >> image[j];
        }

        cout << "Test " << i << endl;
        for (int j = num_rows - 1; j >= 0; j--) {
            for (int k = num_cols - 1; k >= 0; k--) {
                cout << image[j][k];
            }
            cout << endl;
        }
    }

    return 0;
}
