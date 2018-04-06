//Найти номер минимального по модулю элемента массива
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int min=100000;
	int n;						//размер массива
	cout << "Введите размер массива: ";
	cin >> n;
	if (n < 0) {
		cout << "Ошибка." << endl;               //защита от дурака
		system("pause");
		return 0;
	}
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand()%100-50;  		//заполняем массив случайными числами(как положительными, так и отрицательными) и выводим
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		if (abs(min) > abs(arr[i]) ){             //нахождение наименьшего элемента по модулю
			min= abs(arr[i]);
		}
	}
	cout<<"Наименьший элемент по модулю: "<<min;
}
