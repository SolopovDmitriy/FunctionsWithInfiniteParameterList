#include<iostream>
using namespace std;
int sum(int n/* Количество передаваемых значений*/, int value...)
{
	int sum = 0;
	int* p_value = &value;
	for (int i = 0; i < n; i++)
	{
		sum += *p_value;
		p_value++;
	}
	return sum;
}

int production(int value...)
{
	int production = 1;
	int*p_value = &value;
	while (*p_value != INT_MAX)
	{
		production *= *p_value++;
	}
	return production;
}
void main()
{
	cout << sum(4, 5, 8, 13, 21) << endl;
	cout << production(3, 5, 8, 13, 21, INT_MAX);
}
