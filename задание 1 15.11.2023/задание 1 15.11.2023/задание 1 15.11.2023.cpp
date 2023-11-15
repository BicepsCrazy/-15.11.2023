// задание 1 15.11.2023.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int num;
    
    cout << "введите число";

    cin >> num;

    if (num > 0 && num < 10) {

        cout << "1 цифра";
    }

    else if (num >= 10 && num < 100)
        cout << "2 цифры";

    else if (num >= 100 && num < 1000)

        cout << "3 цифры";

    else if (num >= 1000 && num < 10000)
        cout << "4 цифры";

    else if (num >= 10000 && num < 100000)

        cout << "5 цифр";

    else if (num >= 100000 && num < 100000)
        cout << "6 цифр";

    else if (num >= 100000 && num < 1000000)

        cout << "7 цифр";
    else if (num >= 1000000 && num < 10000000)
        cout << "8 цифр";
    else if (num >= 10000000 && num < 100000000)

        cout << "9 цифр";
    else if (num >= 100000000 && num < 1000000000)
        cout << "10 цифр";

    else if (num >= 100000000 && num << 1000000000)
    cout << "11 цифр";

}

