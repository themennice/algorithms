/*
Super Spy Lunch Break: https://codeforces.com/gym/102498/problem/A
*/

#include <iostream>
#include <math.h>
#include <iomanip> 

using namespace std;

int main()
{
	double x1, y1, x2, y2, lines;
	double min_time = 1000000;

	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;

	cin >> lines;
	for(int i = 0; i < lines; i++)
	{
		double x3, y3, wait, sum1 = 0, sum2 = 0;
		cin >> x3;
		cin >> y3;
		cin >> wait;

		sum1 = sqrt(abs(x3-x1)*abs(x3-x1) + abs(y3-y1)*abs(y3-y1));

		sum2 = sqrt(abs(x2-x3)*abs(x2-x3) + abs(y2-y3)*abs(y2-y3));


		wait += sum1 + sum2;
		if(wait < min_time)
			min_time = wait;
	}
	cout << fixed << setprecision(20) << min_time << endl;
	return 0;
}