#include <iostream>
using namespace std;

int sum(int num)
{
    if (num != 0)
    {
        return num + sum(num - 1);
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "The summation is :  "  << sum(num) << endl;

    return 0;
}