//Заполнить массив вещественными числами с клавиатуры. Посчитать сумму, произведение, среднее арифметическое.
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n,a=1;								//перемнная а для нумерации вводимых элементов
	float sar=0;								//среднее арифметическое 
	float sum=0;								//сумма
	float pr=1;								//произведение
	float *mas = new float[100000000];																							 
	cout<<"Ввод массива закончите комбинацией- 00."<<endl;					
	for ( int i = 0; i <100000000 ; i++) {								 
    		cout << "Введите значение для " << a << " элемента массива : "; 
    		cin >> mas[i];												
    		a++;															
    		if(mas[i]==00){							//условие для подсчёта элементов
    			n=i;
			break;}
	}
	cout<<endl;
	for (int i = 0; i < n; i++) {				 
		sum=sum+mas[i];						//считаем сумму
		sar=sum/n;						//считаем среднее арифметическое
		pr=pr*mas[i];						//считаем произведение
	}
	cout<<"Ваш массив: ";
	for(int i=0; i<n; i++){
		cout<<mas[i]<<" ";}
	cout<<endl;
	cout<<"Сумма элементов: "<<sum<<endl;
	cout<<"Произведение элементов: "<<pr<<endl;
	cout<<"Среднее арифметическое: "<<sar<<endl;
	
}
