#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> data;
    setlocale(LC_ALL, "ru");
    size_t a;
    cin >> a;
    data.reserve(a);

    data = { 1, 2 };

    cout << data.size() << "\t" << data.capacity() << "\n";
    
    for (size_t i = 3; i < 10; i++)
    {
        data.push_back(i);
        cout << data.size() << "\t" << data.capacity() << "\n";
    }

    return 0;
}

void getType() {
    std::cout << "char: " << sizeof(char) << "\n";                 //  1
    std::cout << "bool: " << sizeof(bool) << "\n";                 //  1
    std::cout << "short int: " << sizeof(short int) << "\n";       //  2 (по стандарту >= 2)
    std::cout << "int: " << sizeof(int) << "\n";                   //  4 (по стандарту >= 2)
    std::cout << "long int: " << sizeof(long int) << "\n";         //  8 (по стандарту >= 4)
    std::cout << "long long int: " << sizeof(long long) << "\n";   //  8 (по стандарту >= 8)
    std::cout << "float: " << sizeof(float) << "\n";               //  4
    std::cout << "double: " << sizeof(double) << "\n";             //  8
    std::cout << "long double: " << sizeof(long double) << "\n";   // 16
}

class dog
{
public:
    dog()
    {
        _legs = 4;
        _bark = true;
    }

    void setDogSize(string dogSize)
    {
        _dogSize = dogSize;
    }

    virtual void setEars(string type)
    {
        _earType = type;
    }

private:
    string _dogSize, _earType;
    int _legs;
    bool _bark;
};