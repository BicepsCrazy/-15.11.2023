// задание4 15.11.2023.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    
    int num;
    cout << "Введите число для проверки" << endl;

    cin >> num;

    if (num > 0) {

        cout << "Ваше число больше нуля";
    }
    else if (num < 0) {

        cout << "ваше число отрицательное";
    }

    else

        cout << "ваше число ноль";

    
}

