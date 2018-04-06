//Вычислить сумму чётных положительных элементов(занчения элементы принимают из (-10000;10000))
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
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
		arr[i] = rand()%20000-10000;             //заполняем массив случайными числами(как положительными, так и отрицательными) и выводим
		cout << arr[i] << " ";
	}
	cout<<endl;
	for (int i = 0; i < n; i++) {
		if ((arr[i]%2==0)&&(arr[i]>0) ){		//проверяем условие чётности и положительности                         
			sum=sum+arr[i];
		}
	}
	cout<<"Сумма чётных положительных элементов: "<<sum;

}
