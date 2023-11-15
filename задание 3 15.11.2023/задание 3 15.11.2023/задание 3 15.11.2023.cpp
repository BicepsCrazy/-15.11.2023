// задание 3 15.11.2023.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int nums[10];
	int proizvedenie = 1;


	for (int i = 0; i < 10; i++) {

		cin >> nums[i];

		proizvedenie *= nums[i];
	}

	cout << "proizvedenie " << proizvedenie;
}

