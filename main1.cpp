//� ������� ���������� ����� ������������ ������� � ������ ��������.
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int max = 0; 								 // ���������� ��� ����������� ��������
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
		arr[i] = rand()%100;                		 //��������� ������ ���������� ������� � ������� ��� �� �����
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i += 2) {
		if (max < arr[i]) {                        //���������� ����������� �������� � ������ ��������
			max = arr[i];
		}
	}
	cout <<"���������� �������(� ������ ��������): "<< max;                //����� ����������� �������� �������
	cout << endl;
	
	return 0;
}
