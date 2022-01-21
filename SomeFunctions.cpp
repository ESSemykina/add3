#pragma once
#define N 100
#include<iostream>
#include "SomeFunctions.hpp"
namespace ks
{
	void vvod(int& n)
	{
		std::cin >> n;
	}
	void poiskmin(int n, int& min)
	{
		min = INT_MAX;
		while (n > 1)
		{
			int c = n % 10;
			if (c < min)
			{
				min = c;
			}
			n /= 10;
		}
	}
	void poisksum(int n, int& sum)
	{
		sum = 0;
		while (n > 1)
		{
			int p = n % 10;
			sum += p;
			n /= 10;
		}
	}
	void zapoln(int mas[10], int n)
	{
		//заполняем массив 
		while (n > 0)
		{
			for (int i = 0; i < 10; i++)
			{
				if (n != 0)
				{
					mas[i] = n % 10;
					n /= 10;
				}
			}
		}
	}
	void poiskchastovstr(int n, int& m, int mas[10])
	{
		int chasto = 0, chastmax = 0;
		m = INT_MIN;
		// поиск самого часто встречающегося числа
		for (int i = 0; i < 10; i++)
		{
			for (int j = i + 1; j < 10; j++)
			{
				if (mas[i] == mas[j])
				{
					chasto++;
					if (chasto >= chastmax)
					{
						int k = mas[i];
						chastmax = chasto;
						if (k > m)
						{
							m = k;
						}
					}
				}
			}
			chasto = 0;
		}
	}
	void output(int min, int m, int sum)
	{
		std::cout << "min= " << min << std::endl;
		std::cout << "chastvstr= " << m << std::endl;
		std::cout << "sum= " << sum;
	}
}
