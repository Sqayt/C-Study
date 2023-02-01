#include <iostream>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int resultX = x1 - x2;
    int resultY = y1 - y2;

    if ((resultX < 2 && resultX > -2) && (resultY < 2 && resultY > -2))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}