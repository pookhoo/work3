#include <iostream>
using namespace std;

void task1()
{
	setlocale(0, "");
	cout << "Введите размер последовательности" << endl;
	int n;
	cin >> n;

	int minNumber = INT_MAX;
	int count = 0;
	cout << "Введите числа: " << endl;
	for (int i = 0; i < n; ++i)
	{
		int num;
		cin >> num;

		if (num < minNumber)
		{
			minNumber = num;
			count = 1;
		}
		else if(num == minNumber)
		{
			count++;
		}
	}
	cout << "Мин число: " << minNumber << endl;
	cout << "Количество повторений: " << count;

}

void task2()
{
	setlocale(0, "");
	int  max;
	cout << "Введите последнее число" << endl;
	cin >> max;

	int summa = 0;

	for (int i = 1; i <= max; ++i)
	{
		summa += i;
	}

	cout << "Сумма: " << summa;
}
const int MAX_SIZE = 100;

void task3()
{
	setlocale(0, "");
	int size1;

	cout << "Введите размер массива (не более " << MAX_SIZE << "): ";
	cin >> size1;

	int arr1[MAX_SIZE];

	cout << "Введите " << size1 << " элементов массива:" << endl;
	for (int i = 0; i < size1; i++) {
		cin >> arr1[i];
	}

	cout << "Элементы массива:" << endl;
	for (int i = 0; i < size1; i++) {
		cout << arr1[i] << " ";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < size1; ++i)
	{
		if (arr1[i] % 3 == 0)
		{
			sum += arr1[i];
		}
	}
	cout << "Сумма чисел кратных 3: " << sum;

}

void task4()
{
	setlocale(0, "");
	cout << "Введите количество эл-ов в массиве: " << endl;
	int size;
	cin >> size;

	cout << "Введите элементы массива: " << endl;
	int* arr = new int[size];

	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}

	int maxElem = arr[0];
	int minElem = arr[0];
	int maxIndex = 0;
	int minIndex = 0;
	
	for (int i = 1; i < size; ++i)
	{
		if (arr[i] > maxElem)
		{
			maxElem = arr[i];
			maxIndex = i;
		}
		else if(arr[i] < minElem)
		{
			minElem = arr[i];
			minIndex = i;
		}
	}

	cout << "Макс элем.: " << maxElem << " Индекс: " << maxIndex << endl;
	cout << "Мин элем.: " << minElem << " Индекс: " << minIndex << endl;

	delete[] arr;
}

void task5()
{
	int height = 10;
	// Верхняя часть домика
	for (int i = 0; i < height; ++i) {
		for (int j = 0; j < height - i - 1; ++j)
		{
			std::cout << " ";
		}

		for (int j = 0; j < 2 * i + 1; ++j)
		{
			std::cout << "*";
		}

		std::cout << std::endl;
	}

	// Стены домика
	for (int i = 0; i < height; ++i) {
		{
			std::cout << "*";
		}
		for (int j = 0; j < 2 * height - 3; ++j)
		{
			std::cout << " ";
		}
		std::cout << "*" << std::endl;
	}

	// Нижняя часть домика
	for (int i = 0; i < height; ++i) {
			cout << " ";
			cout << "*";
	}
}

void task6()
{
	setlocale(0, "");
	const int size = 8;
	int numbers[size] = { 3, -1, 4, -2, 7, -5, 6, 0 };

	cout << "Положительные числа: ";
	for (int i = 0; i < size; ++i) {
		if (numbers[i] > 0)
		{
			cout << numbers[i] << " ";
		}
	}

	cout << "\nОтрицательные числа: ";
	for (int i = 0; i < size; ++i) {
		if (numbers[i] < 0)
		{
			cout << numbers[i] << " ";
		}
	}

	cout << endl;
}
 
void task7()
{
	setlocale(0, "");
	long long  result = 1;

	for (int i = 2; i <= 10; ++i) {
		int sum = 0;
		for (int j = 1; j <= i; ++j) {
			sum += j;
		}
		result *= sum;
	}

	std::cout << "Результат: " << result << std::endl;
}

void task8()
{
	setlocale(0, "");
	int number;
	int count = 0;
	int sum = 0;

	cout << "Введите числа (введите 0 для завершения):" << endl;

	do {
		cin >> number;

		if (number != 0) {
			sum += number;
			++count;
		}
	} while (number != 0);

	if (count > 0) {
		double average = sum / count;

		cout << "Количество введенных чисел: " << count << endl;
		cout << "Общая сумма: " << sum << endl;
		cout << "Среднее арифметическое: " << average << endl;
	}
	else {
		cout << "Вы не ввели ни одного числа." << endl;
	}
}

void task9()
{
	setlocale(0, "");
	int height1;
	cout << "Введите высоту для треугольника: " << endl;
	cin >> height1;

	for (int i = 0; i < height1; ++i) {
		for (int j = 0; j < height1 - i - 1; ++j)
		{
			cout << " ";
		}

		for (int j = 0; j < 2 * i + 1; ++j) {
			if (j == 0 || j == 2 * i)
			{
				cout << "*";
			}
			else if (i == height1 - 1)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}

		cout << endl;
	}
	cout << endl;

	/*int height, topWidth, bottomWidth;

	cout << "Введите высоту трапеции: ";
	cin >> height;

	cout << "Введите ширину верхнего основания трапеции: ";
	cin >> topWidth;

	cout << "Введите ширину нижнего основания трапеции: ";
	cin >> bottomWidth;

	for (int i = 0; i < height; ++i) {
		for (int j = 0; j < bottomWidth; ++j) {
			if (j >= (bottomWidth - topWidth) / 2 && j < (bottomWidth - topWidth) / 2 + topWidth)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}*/

	// Я НЕ МОГУ НАРИСОВАТЬ ТРАПЕЦИЮ
}

int task10()
{
	setlocale(0, "");
	int choice;
	double value;

	cout << "Выберите единицу измерения для перевода:\n"
		<< "1. Сажени в метры\n"
		<< "2. Дюймы в сантиметры\n"
		<< "3. Футы в метры\n"
		<< "4. Драхмы в граммы\n"
		<< "5. Унции в граммы\n"
		<< "6. Фунты в килограммы\n"
		<< "7. Аршины в метры\n"
		<< "8. Золотники в граммы\n"
		<< "9. Дюймы в миллиметры\n"
		<< "Введите номер выбора: ";
	cin >> choice;

	if (choice < 1 || choice > 9) {
		cout << "Некорректный выбор." << endl;
		return 1;
	}

	cout << "Введите значение для перевода: ";
	cin >> value;

	switch (choice) {
	case 1:
		cout << value << " сажень(и) равно " << value * 2.1366 << " метра(ов)." << endl;
		break;
	case 2:
		cout << value << " дюйм(ов) равно " << value * 2.54 << " сантиметра(ов)." << endl;
		break;
	case 3:
		cout << value << " фут(ов) равно " << value * 0.3048 << " метра(ов)." << endl;
		break;
	case 4:
		cout << value << " драхма(ы) равно " << value * 3.7325 << " грамма(ов)." << endl;
		break;
	case 5:
		cout << value << " унция(и) равно " << value * 29.86 << " грамма(ов)." << endl;
		break;
	case 6:
		cout << value << " фунт(а) равно " << value * 0.40951 << " килограмма(ов)." << endl;
		break;
	case 7:
		cout << value << " аршин(а) равно " << value * 0.7112 << " метра(ов)." << endl;
		break;
	case 8:
		cout << value << " золотник(а) равно " << value * 4.2657 << " грамма(ов)." << endl;
		break;
	case 9:
		cout << value << " дюйм(ов) равно " << value * 25.3995 << " миллиметра(ов)." << endl;
		break;

		return 0;

	}
}


int main()
{

	/*task1();*/
	/*task2();*/
	/*task3();*/
	/*task4();*/
	/*task5();*/
	/*task6();*/
	/*task7();*/
	/*task8();*/
	/*task9();*/
	task10();
}
