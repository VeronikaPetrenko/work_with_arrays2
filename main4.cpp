//����� �������� �������, ������� ������ �������� ��������������� ����� �������
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	int sar=0;									//������� �������������� 
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
		arr[i] = rand()%10000;             		//��������� ������ ���������� ������� � �������
		cout << arr[i] << " ";
	}
	cout<<endl;
	for (int i = 0; i < n; i++) {				//������� ������� �������������� 
		sum=sum+arr[i];
		sar=sum/n;
	}
	cout<<"������� ��������������: "<<sar<<endl;
	cout<<"��������, ������� ������ ��.�����.: ";
	for (int i = 0; i < n; i++) {
		if (arr[i]<sar ){	                        
			cout<<arr[i]<<" ";
		}
	}
}



