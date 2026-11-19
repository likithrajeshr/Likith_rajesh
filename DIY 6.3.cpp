#include <iostream>
#include <stdexcept>
using namespace std;

class SafeArray
{
    int *arr;
    int size;

public:
    SafeArray(int n)
    {
        size = n;
        arr = new int[size];
    }

    int& operator[](int index)
    {
        if (index < 0 || index >= size)
        {
            throw out_of_range("Array index out of range");
        }

        return arr[index];
    }

    ~SafeArray()
    {
        delete[] arr;
    }
};

int main()
{
    SafeArray a(5);

    a[0] = 10;
    a[1] = 20;
    a[2] = 30;

    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;

    try
    {
        cout << a[10] << endl;
    }
    catch (out_of_range &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
