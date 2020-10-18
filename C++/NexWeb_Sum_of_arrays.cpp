#include <iostream>
#include <numeric>


int main()
{

	int a[] = { 2, 4, 1, 5, 9 };
	int b[] = { 9, 12, 32, 43, 23 };
	int total{ 0 };
	int sum_a = std::accumulate(std::begin(a), std::end(a), 0);
	int sum_b = std::accumulate(std::begin(b), std::end(b), 0);
	total = sum_a + sum_b;

	std::cout << "Sum of array a is " << sum_a << '\n';
	std::cout << "Sum of array b is " << sum_b << '\n';
	std::cout << "Sum of all arrays is " << total << '\n';

	return 0;
}
