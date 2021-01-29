#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");

    const int size = 4;
    
    int arr[size];

    int n = 0;
    int sum = 0;

    cout << "Введите значение \n";
    for (int i = 0; i < size; i++)
    {
        cin >> n;
        arr[i] = n;
    }

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        cout << sum << "|";
    }

    return 0;
}

