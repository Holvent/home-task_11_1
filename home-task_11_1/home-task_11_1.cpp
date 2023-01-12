#include <iostream>
#include <iomanip>
using namespace std;

//Задание 1.
long int pow(int a, int b);
//Задание 2.
int sum(int a, int b);
//Задание 3.
void perfect(int x, int y);
//Задание 4.
void showcart();
void cart(int m, int n);
//Задание 5.
void happy();

int main()
{
    setlocale(LC_ALL, "");

	//Задание 1.
	//Написать функцию, которая принимает два
	//параметра : основание степени и показатель степени, и
	//вычисляет степень числа на основе полученных данных.

	cout << "Home task #11.1.1\n\n";
	cout << pow(2, 3);
	cout << endl<<string(30, '-') << endl;
    system("pause");
    system("cls");

	//Задание 2.
	//Написать функцию, которая получает в качестве параметров 
	//2 целых числа и возвращает сумму чисел
	//из диапазона между ними.

	cout << "Home task #11.1.2\n\n";
	cout << sum(2, 3);
	cout << endl << string(30, '-') << endl;
    system("pause");
    system("cls");

	//Задание 3.
	//Число называется совершенным, если сумма
	//всех его делителей равна ему самому.Напишите функцию
	//поиска таких чисел во введенном интервале.

	cout << "Home task #11.1.3\n\n";
	perfect(0, 10000);
	cout << endl << string(30, '-') << endl;
    system("pause");
    system("cls");

	//Задание 4.
	//Написать функцию, выводящую на экран
	//переданную ей игральную карту.

	cout << "Home task #11.1.4\n\n";
	showcart();
	cout << endl << string(30, '-') << endl;
    system("pause");
    system("cls");

	//Задание 5.
	//Написать функцию, которая определяет, 
	//является ли «счастливым» шестизначное число.

    cout << "Home task #11.1.5\n\n";
    happy();
    cout << endl << string(30, '-') << endl;
}
long int pow(int a, int b) {
	if (b == 0) return 1;
	else if (b == 1) return a;
	else return a * pow(a, b - 1);
}
int sum(int a, int b) {
	int sum = 0;
	for (int i = a; i <= b; i++)
		sum += a++;
	return sum;
}
void perfect(int x, int y) {
	for (int i = x; i < y; i++) {
		int count = 0;
		for (int j = 1; j < i; j++) {
			if ((i % j) == 0)
				count += j;
		}
		if (count == i && count)
			cout << count << " \n";
	}
}
void showcart() {
	int m, n;
	cout << "Введите масть " << endl
		<< "1-Черви" << endl    
		<< "2-Буби" << endl     
		<< "3-Крести" << endl   
		<< "4-Пики" << endl;    
	cin >> m;
	cout << "Введите карту " << endl
		<< "1-Шестерка" << endl
		<< "2-Семерка" << endl
		<< "3-Восьмерка" << endl
		<< "4-Девятка" << endl
		<< "5-Десятка" << endl
		<< "6-Валет" << endl
		<< "7-Дама" << endl
		<< "8-Король" << endl
		<< "9-Туз" << endl;
	cin >> n;
	switch (m)
	{
	case 1:
		m = 3;
		cart(m, n);
		break;
	case 2:
		m = 4;
		cart(m, n);
		break;
	case 3:
		m = 5;
		cart(m, n);
		break;
	case 4:
		m = 6;
		cart(m, n);
		break;
	}
}
void cart(int m, int n) {
    if (n == 1) {
        n = 6;
        cout << "------" << endl;
        cout << "|" << (char)m << setw(4) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(3) << n << setw(2) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(4) << (char)m << "|" << endl;
        cout << "------" << endl;
    }
    else if (n == 2) {
        n = 7;
        cout << "------" << endl;
        cout << "|" << (char)m << setw(4) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(3) << n << setw(2) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(4) << (char)m << "|" << endl;
        cout << "------" << endl;
    }
    else if (n == 3) {
        n = 8;
        cout << "------" << endl;
        cout << "|" << (char)m << setw(4) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(3) << n << setw(2) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(4) << (char)m << "|" << endl;
        cout << "------" << endl;
    }
    else if (n == 4) {
        n = 9;
        cout << "------" << endl;
        cout << "|" << (char)m << setw(4) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(3) << n << setw(2) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(4) << (char)m << "|" << endl;
        cout << "------" << endl;
    }
    else if (n == 5) {
        n = 10;
        cout << "------" << endl;
        cout << "|" << (char)m << setw(4) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(3) << n << setw(2) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(4) << (char)m << "|" << endl;
        cout << "------" << endl;
    }
    else  if (n == 6) {
        n = 74;
        cout << "------" << endl;
        cout << "|" << (char)m << setw(4) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(3) << (char)n << setw(2) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(4) << (char)m << "|" << endl;
        cout << "------" << endl;
    }
    else  if (n == 7) {
        n = 81;
        cout << "------" << endl;
        cout << "|" << (char)m << setw(4) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(3) << (char)n << setw(2) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(4) << (char)m << "|" << endl;
        cout << "------" << endl;
    }
    else  if (n == 8) {
        n = 75;
        cout << "------" << endl;
        cout << "|" << (char)m << setw(4) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(3) << (char)n << setw(2) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(4) << (char)m << "|" << endl;
        cout << "------" << endl;
    }
    else  if (n == 9) {
        n = 84;
        cout << "------" << endl;
        cout << "|" << (char)m << setw(4) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(3) << "A" << setw(2) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(4) << (char)m << "|" << endl;
        cout << "------" << endl;
    }
}
void happy(){
    int num;
    int sum1 = 0, sum2 = 0;
    int temp;
    cout << "Введите шестизначное число -> ";
    cin >> num;
    temp=num/100000;
    sum1 += temp;
    temp = (num / 10000) % 10;
    sum1 += temp;
    temp = (num / 1000) % 10;
    sum1 += temp;
    temp = (num / 100) % 10;
    sum2 += temp;
    temp = (num / 10) % 10;
    sum2 += temp;
    temp = num % 10;
    sum2 += temp;
    if (sum1==sum2){
        cout << "Ваше число счастливое!" << endl;
    }
    else {
        cout << "Не счастливое =(" << endl;
    }
}