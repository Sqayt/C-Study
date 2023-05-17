#include <iostream>
#include <string>
#include <vector>

using namespace std;

void loop(int size = 10)
{
    int a = 0;

    while (a < size)
    {
        cout << "test" << endl;
        a++;
    }
}

void loopArray()
{
    int arr[]{10, 11, 12, 2, 3};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << "\n";
    }
}

void myRand()
{
    srand(25);
    int a = rand();

    cout << a << endl;

    long b = rand();

    cout << b << endl;

    bool isRand = rand();

    cout << isRand << endl;
}

void twoDimensional()
{
    const int col = 3;
    const int row = 4;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) 
        {
            arr[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

}

inline float sum(float a, float b)
{
    return a + b;
}

inline float sum(float a, float b, float c)
{
    return a + b + c;
}

template <typename T1, typename T2>
void sum(T1 a, T2 b)
{
    cout << a << "\n";
    cout << b << "\n";
    cout << (a + b) << endl;
}

float div(float a, float b)
{
    return a / b;
}

float sub(float a, float b)
{
    return a - b;
}

float mult(float a, float b)
{
    return a * b;
}

int fibonachi(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonachi(n - 1) + fibonachi(n - 2);
    }
}

void pointX()
{
    int a = 5;

    int b = a;

    int* px = &a;

    cout << a << endl;
    cout << b << endl;
    cout << px << endl;
}

void link()
{
    int a = 5;

    int *pa = &a;

    int &aref = a;
    cout << a << " " << *pa << " " << &aref << endl;
}

int main()
{
    setlocale(LC_ALL, "ru");

    link();

    return 0;
}