#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<int> v = {2, 3, 4, 5, 6};

    // Product of all elements
    int product = accumulate(v.begin(), v.end(), 1,
        [](int result, int x) {
            return result * x;
        });

    cout << "Product = " << product << endl;

    // Sum of even elements
    int evenSum = accumulate(v.begin(), v.end(), 0,
        [](int sum, int x) {
            if (x % 2 == 0)
                return sum + x;

            return sum;
        });

    cout << "Sum of even numbers = " << evenSum << endl;

    return 0;
}
