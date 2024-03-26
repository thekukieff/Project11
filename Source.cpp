#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace  std;

//void Print_Hello(int number, float numberTwo=3.4) {//параметр в функции вложенная
//	cout << number<<endl;
//	cout << numberTwo<<endl;
//}

float Sum(float First, float Second);

int Sum(int First, int Second);

int Difference(int First, int Second);

int Proiz(int First, int Second);

float Division(float First, float Second);

float Prozent(float First, float Second);

int MyPow(int Fnumber, int Snumber);






int main() {
	setlocale(LC_ALL, "ru");
	int first, second;
	string choice;
	/*
	cout << "Введите первое число: ";
	cin >> first;
	cout << "Введите второе число: ";
	cin >> second;
	cout << "Выберите действие(+,-,*,/,%): ";
	cin >> choice;
	//Print_Hello(a);

	if (choice == "+") {
		cout << Sum(first, second) << endl;
	}
	else if (choice == "-") {
		cout << Difference(first, second) << endl;
	}
	else if (choice == "*") {
		cout << Proiz(first, second) << endl;

	}

	else if (choice == "/"){
		if (second != 0) {
			cout << Division(first, second) << endl;
		}
		else {
			cout << "На ноль делить нельзя";
		}
	}
	else if (choice == "%") {
		cout << Prozent(first, second) << "%" << endl;
	}
	*/
	int pokaz, osn;
	cerr << " ";
	cout << "Введите основание степени: ";
	cin >> osn;
	cout << "Введите показатель: ";
	cin >> pokaz;
	cout << MyPow(osn, pokaz) << endl;
	cout << pow(osn, pokaz) << endl;

	return 0;
}





float Sum(float First, float Second) {

	return First + Second;

}
int Sum(int First, int Second) {

	return First + Second;

}

int Difference(int First, int Second) {
	return First - Second;
}

int Proiz(int First, int Second) {

	return First * Second;
}

float Division(float First, float Second) {
	return First / Second;
}

float Prozent(float First, float Second) {
	First /= 100;
	return First * Second;
}

int MyPow(int F_number, int S_number)
{
	int itog=1;
	for (int i = 0; i < S_number; i++)
	{
		itog *= F_number;
	}

	return itog;
}
