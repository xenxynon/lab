#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    double sum = 0, num;
    for (int i = 0; i < n; i++) {
        cout << "Enter number: ";
        cin >> num;
        sum += num;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
