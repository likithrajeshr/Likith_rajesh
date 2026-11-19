#include <iostream>
using namespace std;

class Matrix
{
    int m, n;
    int **a;

public:
    // Parameterized constructor
    Matrix(int m, int n) : m(m), n(n)
    {
        a = new int *[m];

        for (int i = 0; i < m; i++)
        {
            a[i] = new int[n];
        }
    }

    // Deep copy constructor
    Matrix(const Matrix &x) : m(x.m), n(x.n)
    {
        a = new int *[m];

        for (int i = 0; i < m; i++)
        {
            a[i] = new int[n];

            for (int j = 0; j < n; j++)
            {
                a[i][j] = x.a[i][j];
            }
        }
    }

    // Destructor
    ~Matrix()
    {
        for (int i = 0; i < m; i++)
        {
            delete[] a[i];
        }

        delete[] a;
    }
};

int main()
{
    Matrix A(3, 3);

    Matrix B = A;

    cout << "Matrix created and deep copied successfully";

    return 0;
}
