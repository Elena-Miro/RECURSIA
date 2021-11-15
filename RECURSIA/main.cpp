#include<iostream>
using namespace std;

void comArray(int arr[], const int num)
{
	for (int i = 0; i < num; ++i)
	{
		arr[i] = rand() % 20 - 10;
	}
}

void printArray(int arr[], const int num)
{
	for (int i = 0; i < num; ++i)
	{
		cout << arr[i] << " ";
	}
}

int minArray(int arr[], int num, int min)
{
	if (num == 1)
	{
		return min;
	}
	if (min > arr[num - 1])
	{
		min = arr[num - 1];
	}

	return minArray(arr, num - 1, min);
}

int maxArray(int arr[], int num, int max)
{
	if (num == 1)
	{
		return max;
	}

	if (max < arr[num - 1])
	{
		max = arr[num - 1];
	}

	return maxArray(arr, num - 1, max);
}

int sumArray(int arr[], int num, int sum)
{
	if (num == 0)
	{
		return sum;
	}

	sum += arr[num - 1];

	return sumArray(arr, num - 1, sum);
}

long int composicion(int arr[], int num, long int com)
{
	if (num == 0)
	{
		return com;
	}

	com *= arr[num - 1];

	return composicion(arr, num - 1, com);
}

int elementArray(int arr[], int num, int num2)
{
	if (num == 0)
	{
		cout << "false" << endl;
		return 0;
	}

	if (num2 == arr[num - 1])
	{
		cout << "true" << endl;
		return 0;
	}

	return elementArray(arr, num - 1, num2);
}

int printArray1(int arr[], int num, int counter)
{
	if (counter == num)
	{
		return 0;
	}

	cout << arr[counter] << " ";

	return printArray1(arr, num, counter + 1);
}

int countNegative(int arr[], int num, int count)
{
	if (num == 0)
	{
		return count;
	}

	if (arr[num - 1] < 0)
	{
		++count;
	}

	return countNegative(arr, num - 1, count);
}

int entryElement(int arr[], int num, int counter, int num2)
{
	if (num == 0)
	{
		return counter;
	}

	if (num2 == arr[num - 1])
	{
		++counter;
	}

	return entryElement(arr, num - 1, counter, num2);
}

int evenNum(int arr[], int num, int counter)
{
	if (num == 0)
	{
		return counter;
	}

	if (arr[num - 1] % 2 == 0)
	{
		++counter;
	}

	return evenNum(arr, num - 1, counter);
}

int countPositive(int arr[], int num, int counter)
{
	if (num == 0)
	{
		return counter;
	}

	if (arr[num - 1] > 0)
	{
		++counter;
	}

	return countPositive(arr, num - 1, counter);
}

int oddNum(int arr[], int num, int counter)
{
	if (num == 0)
	{
		return counter;
	}

	if (arr[num - 1] % 2 != 0)
	{
		++counter;
	}

	return oddNum(arr, num - 1, counter);
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	const int num = 5;

	int arr[num];

	comArray(arr, num);
	cout << "Печать массива на экран:";
	printArray(arr, num);

	cout << endl;
	cout << "Поиск минимума: ";
	int min = arr[0];

	cout << minArray(arr, num, min) << endl;

	cout << "Поиск максимума: ";
	int max = arr[0];

	cout << maxArray(arr, num, max) << endl;
	cout << "Поиск суммы элементов массива:";
	int sum = 0;

	cout << sumArray(arr, num, sum) << endl;
	cout << "Поиск произведения элементов массива:";
	long int com = 1;

	cout << composicion(arr, num, com) << endl;
	cout << "Проверка наличия элемента в массиве"<<endl;
	int num2;

	cout << "Введите число: ";
	cin >> num2;

	elementArray(arr, num, num2);

	cout << "Подсчёт количества отрицательных элементов массива:";

	int counter = 0;

	cout << countNegative(arr, num, counter) << endl;

	cout << "Подсчёт количества вхождений элемента в массив:";
	cout << entryElement(arr, num, counter, num2) << endl;
	cout << "Подсчёт количества чётных элементов в массиве:";
	cout << evenNum(arr, num, counter) << endl;
	cout << "Подсчёт количества положительных элементов в массиве:";
	cout << countPositive(arr, num, counter) << endl;
	cout << "Подсчёт количества нечётных элементов в массиве:";
	cout << oddNum(arr, num, counter) << endl;

	return 0;
}
