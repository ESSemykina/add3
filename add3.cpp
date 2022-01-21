/*3
Дано натуральное число до 10^9. Определите максимальную цифру числа, 
самую часто встречающуюся цифру (если таких несколько, выведите наибольшую) и сумму цифр.*/
#include<iostream>
#include "SomeFunctions.hpp"
int main()
{
	int n, sum, min, mas[10], m;
	ks::vvod(n);
	ks::poisksum(n, sum);
	ks::poiskmin(n, min);
	ks::zapoln(mas, n);
	ks::poiskchastovstr(n, m, mas);
	ks::output(min, m, sum);
}