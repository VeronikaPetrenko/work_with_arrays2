//����� ����� ������������ �� ������ �������� �������
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int min=100000;
	int n;										 //������ �������
	cout << "������� ������ �������: ";
	cin >> n;
	if (n < 0) {
		cout << "������!" << endl;               //������ �� ������
		system("pause");
		return 0;
	}
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand()%100-50;                		 //��������� ������ ���������� ������� � ������� ��� �� �����
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		if (abs(min) > abs(arr[i]) ){                        //���������� ����������� �������� � ������ ��������
			min= abs(arr[i]);
		}
	}
	cout<<min;
}
