#include <iostream>

using namespace std;
//��
//
//������� 1. ������������ � ���������� ������ 5 ������ ��������.����������, ������� �� ������� � ��������.
//������� �������� ������, ���� ��� ������� ���� 4 ����� � ����.
//
//������� 2. ������������ ������ � ���������� �����.���� ��� ������, �������� ��� �� ���, ����� � �������� �� ���.��������� ������� �� �����.
//
//������� 3. �������� ��������� - �����������.������������ ������ ��� ����� � �������� �������������� ��������.������� �� ����� ���������.

//#define Task1
//#define Task2
//#define Task3

int main()
{

	setlocale(LC_ALL, "Rus");
#ifdef Task1
	double marks1, marks2, marks3, marks4, marks5;
	double avereg;
	cout << "������� 5 ������ ��������:" << endl;
	cin >> marks1, cin >> marks2, cin >> marks3, cin >> marks4, cin >> marks5;
	avereg = (marks1 + marks2 + marks3 + marks4 + marks5) / 5;
	cout << "������� ���� �����: " << avereg << endl;
	if (avereg >= 4)cout << "������ �������" << endl;
	else cout << "������ �� �������, ������� ���� ���� 4" << endl;
#endif 
#ifdef Task2
	int number;
	cout << "������� �����:" << endl;
	cin >> number;
	if (number % 2)
	{
		number /= 2;
		cout << "����� ��������: " << "���������:" << number << endl;
	}
	else
	{
		number *= 3;
		cout << "����� ������: " << "���������:" << number << endl;
	}
#endif
#ifdef Task3
	double number, number2;
	int choise;
	bool flag = false;
	do
	{
		cout << "������� ������ �����: " << endl;
		cin >> number;
		cout << "������� ������ �����: " << endl;
		cin >> number2;
		cout << "�������� ����������� ��������: " << endl
			<< "1 - �������� (+)" << endl
			<< "2 - ��������� (-)" << endl
			<< "3 - ��������� (*)" << endl
			<< "4 - ������� (/)" << endl
			<< "5 - ����� �� ���������" << endl;
		cin >> choise;
		switch (choise)
		{
		case 1:
			cout << "��������� �������� �����: " << number + number2 << endl;
			system("pause");
			system("cls");
			break;
		case 2:
			cout << "��������� ��������� �����: " << number - number2 << endl;
			system("pause");
			system("cls");
			break;
		case 3:
			cout << "��������� ��������� �����: " << number * number2 << endl;
			system("pause");
			system("cls");
			break;
		case 4:
			cout << "��������� ������� �����: " << number / number2 << endl;
			system("pause");
			system("cls");
			break;
		case 5:
			flag = true;
			break;
		default:
			cout << "����� �������� �� ����������!" << endl;
			system("pause");
			system("cls");
			break;
		}
	} while (!flag);
#endif

}