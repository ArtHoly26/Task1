#include <iostream>

using namespace std;
//ДЗ
//
//Задание 1. Пользователь с клавиатуры вводит 5 оценок студента.Определить, допущен ли студент к экзамену.
//Студент получает допуск, если его средний балл 4 балла и выше.
//
//Задание 2. Пользователь вводит с клавиатуры число.Если оно четное, умножить его на три, иначе — поделить на два.Результат вывести на экран.
//
//Задание 3. Написать программу - калькулятор.Пользователь вводит два числа и выбирает арифметическое действие.Вывести на экран результат.

//#define Task1
//#define Task2
//#define Task3

int main()
{

	setlocale(LC_ALL, "Rus");
#ifdef Task1
	double marks1, marks2, marks3, marks4, marks5;
	double avereg;
	cout << "Введите 5 оценок студента:" << endl;
	cin >> marks1, cin >> marks2, cin >> marks3, cin >> marks4, cin >> marks5;
	avereg = (marks1 + marks2 + marks3 + marks4 + marks5) / 5;
	cout << "Средний балл равен: " << avereg << endl;
	if (avereg >= 4)cout << "Допуск получен" << endl;
	else cout << "Допуск не получен, средний балл ниже 4" << endl;
#endif 
#ifdef Task2
	int number;
	cout << "Введите число:" << endl;
	cin >> number;
	if (number % 2)
	{
		number /= 2;
		cout << "Число нечетное: " << "Результат:" << number << endl;
	}
	else
	{
		number *= 3;
		cout << "Число четное: " << "Результат:" << number << endl;
	}
#endif
#ifdef Task3
	double number, number2;
	int choise;
	bool flag = false;
	do
	{
		cout << "Введите первое число: " << endl;
		cin >> number;
		cout << "Введите второе число: " << endl;
		cin >> number2;
		cout << "Выберите необходимую операцию: " << endl
			<< "1 - Сложение (+)" << endl
			<< "2 - Вычитание (-)" << endl
			<< "3 - Умножение (*)" << endl
			<< "4 - Деление (/)" << endl
			<< "5 - Выйти из программы" << endl;
		cin >> choise;
		switch (choise)
		{
		case 1:
			cout << "Результат сложения равен: " << number + number2 << endl;
			system("pause");
			system("cls");
			break;
		case 2:
			cout << "Результат вычитания равен: " << number - number2 << endl;
			system("pause");
			system("cls");
			break;
		case 3:
			cout << "Результат умножения равен: " << number * number2 << endl;
			system("pause");
			system("cls");
			break;
		case 4:
			cout << "Результат деления равен: " << number / number2 << endl;
			system("pause");
			system("cls");
			break;
		case 5:
			flag = true;
			break;
		default:
			cout << "Такой операции не существует!" << endl;
			system("pause");
			system("cls");
			break;
		}
	} while (!flag);
#endif

}