//��������� ����� ������� ��������� �������, ������� ������������ ����� ������� �������������� ��������.
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n,a;										 //������ �������
	int sum=0;
	cout << "������� ������ �������: ";
	cin >> n;
	if (n < 0) {
		cout << "������!" << endl;               //������ �� ������
		system("pause");
		return 0;
	}
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand()%100-50;                		 //��������� ������ ���������� �������(��� ��������������, ��� � ��������������) � �������
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {					// ���� ������ ������������� �������
		if (arr[i]<0 ){                        
			for (int a=i+1; a < n; a++) {			//��������� ������� �� ���������� ��������
				sum=sum+arr[a];}
			break;
		}
	}
	cout<<"����� ����� ������� �������������� ��������: "<<sum;
}
