//Вычислить сумму модулей элементов массива, которые расположенны после первого отрицательного элемента.
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n,a;					
	int sum=0;
	cout << "Введите размер массива: ";
	cin >> n;
	if (n < 0) {
		cout << "Ошибка!" << endl;               //защита от дурака
		system("pause");
		return 0;
	}
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand()%100-50;                	 //заполняем массив случайными числами(как положительными, так и отрицательными) и выводим
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {				// ищем первый отрицательный элемент
		if (arr[i]<0 ){                        
			for (int a=i+1; a < n; a++) {		//запускаем подсчёт со следующего элемента
				sum=sum+abs(arr[a]);}
			break;
		}
	}
	cout<<"Сумма модулей элементов, после первого отрицательного элемента: "<<sum;
}
