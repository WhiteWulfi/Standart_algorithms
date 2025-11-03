#include <iostream>
#include <vector>

#include "Algorithms.h"

template <typename T>
void try_to_find(std::vector<T> vec, const int& number)
{
	auto object = alg::find(vec.begin(), vec.end(), number);
	std::cout << "Object ";
	if (object == vec.end()) std::cout << "not found\n";
	else std::cout << *object << " found!\n";
}

const int N{ 7 };
void try_to_bfind(int massive[N], const int& number)
{
	std::cout << "Object " << number;
	if (alg::bfind(massive, 0, N, number)) std::cout << " found in massive!\n";
	else std::cout << " not found in massive\n";
}

int main()
{
	std::cout << "Final test:\n\n";

	std::vector<int> vec{ 9, 4, 5, 7, 3 };
	std::cout << "Vector: ";
	for (const auto& element : vec) std::cout << element << ' ';
	std::cout << '\n';

	try_to_find(vec, 9);
	try_to_find(vec, 4);
	try_to_find(vec, 2);
	try_to_find(vec, 5);
	try_to_find(vec, 7);
	try_to_find(vec, 1);
	try_to_find(vec, 3);

	std::cout << "\n\n";

	int massive[N]{ 1, 3, 6, 8, 9, 10, 12 };
	std::cout << "Massive: ";
	for (int i = 0; i < N; i++) std::cout << massive[i] << ' ';
	std::cout << '\n';

	try_to_bfind(massive, 1);
	try_to_bfind(massive, 3);
	try_to_bfind(massive, 4);

	try_to_bfind(massive, 8);
	try_to_bfind(massive, 9);
	try_to_bfind(massive, 11);

	try_to_bfind(massive, 12);
	try_to_bfind(massive, 17);
	try_to_bfind(massive, 20);

	return 0;
}