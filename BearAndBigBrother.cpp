/*
Bear Limak wants to become the largest of bears, or
at least to become larger than his brother Bob.

Right now, Limak and Bob weigh a and b respectively.
It's guaranteed that Limak's weight is smaller than
or equal to his brother's weight.

Limak eats a lot and his weight is tripled after every
year, while Bob's weight is doubled after every year.

After how many full years will Limak become
strictly larger (strictly heavier) than Bob?
*/

#include <iostream>

int main()
{
	long long int a, b, yrs = 0;
	std::cin >> a;
	std::cin >> b;

	if(a == b)
	{
		std::cout << ++yrs << std::endl;
		return 0;
	}

	while(b >= a)
	{
		a = 3 * a;
		b = 2 * b;
		yrs++;
		//std::cout << "a: " << a << ", b: " << b << ", years: " <<yrs << std::endl;
	}
	std::cout << yrs << std::endl;

	return 0;
}