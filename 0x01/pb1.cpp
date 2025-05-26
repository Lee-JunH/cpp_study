#include <iostream>

using namespace std;

int	func1(int N)
{
	int sum = 0;
	for (int i = 1; i <= N; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	return sum;
}
int func2(int arr[], int N)
{
	for (int i = 0; i < N; i++)
		for (int j = i + 1; j < N; j++)
			if (arr[i] + arr[j] == 100)
				return 1;
	return 0;
}

int func3(int N)
{
	for (int i = 1; i * i <= N; i++) {
		if (i * i == N) return 1;
	}
	return 0;
}

int func4(int N)
{
	int max = 1;
	while (max * 2 <= N) {
		max *= 2;
	}
	return max;
}

int main(void)
{
	cout << "-----func1 test-----" << "\n";
	cout << func1(16) << "\n";
	cout << func1(34567) << "\n";
	cout << func1(27639) << "\n";
	cout << "-----func2 test-----" << "\n";
	int arr1[] = {1, 52, 48};
	cout << func2(arr1, 3) << "\n";
	int arr2[] = {1, 52};
	cout << func2(arr2, 2) << "\n";
	int arr3[] = {4, 13, 63, 87};
	cout << func2(arr3, 4) << "\n";
	cout << "-----func3 test-----" << "\n";
	cout << func3(9) << "\n";
	cout << func3(693953651) << "\n";
	cout << func3(756580036) << "\n";
	cout << "-----func4 test-----" << "\n";
	cout << func4(5) << "\n";
	cout << func4(97615282) << "\n";
	cout << func4(1024) << "\n";
	return 0;
}
