// Задание 15.11.2023.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int nums[10];
    int summa = 0;

    cout << "Введите 10 чисел для массива" << endl;
    for (int i = 0; i < 10; i++) {

        cin >> nums[i];
        summa += nums[i];
    }

   
    cout << "сумма всех чисел массива " << summa << endl;
}



