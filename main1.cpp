//В массиве необходимо найти максимальный элемент с чётным индексом.
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int max = 0; 								 // переменная для наибольшего элемента
	int n;										 //размер массива
	cout << "Введите размер массива: ";
	cin >> n;
	if (n < 0) {
		cout << "Ошибка!" << endl;               //защита от дурака
		system("pause");
		return 0;
	}
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand()%100;                		 //заполняем массив случайными числами и выводим его на экран
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i += 2) {
		if (max < arr[i]) {                        //нахождение наибольшего элемента с чётным индексом
			max = arr[i];
		}
	}
	cout <<"Наибольший элемент(с чётным индексом): "<< max;                //вывод наибольшего элемента массива
	cout << endl;
	
	return 0;
}
