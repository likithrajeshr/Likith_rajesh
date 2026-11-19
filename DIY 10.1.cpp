#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("nums.txt");

    if (!in) {
        cout << "File open failed";
        return 1;
    }

    int n, count = 0, sum = 0;
    int min, max;

    while (in >> n) {
        if (count == 0) {
            min = max = n;
        }

        if (n < min)
            min = n;

        if (n > max)
            max = n;

        sum += n;
        count++;
    }

    cout << "Count = " << count << endl;
    cout << "Sum = " << sum << endl;

    if (count > 0) {
        cout << "Minimum = " << min << endl;
        cout << "Maximum = " << max << endl;
    }

    return 0;
}
