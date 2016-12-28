// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>



using namespace  std;


int two()
{
	int sum = 0;
	int i, j, k;
	char builet[6];
	for (i = 0; i <= 999999; i++) {
		for (k = i, j = 0; j < 6; j++, k /= 10) {
			builet[j] = k % 10;
		}
		if (builet[0] + builet[2] + builet[4] == builet[1] + builet[3] + builet[5]) {
			++sum;
		}
	}
	return sum;
}

int six()
{
	int qwer = 0;
	int a, b, c, d, e, f;
		for (a = 0; a <= 9; ++a)
		{
			for (b = 0;b <= 9;++b)
			{
				for (c = 0; c <= 9; ++c)
				{
					for (d = 0;d <= 9;++d)
					{
						for (e = 0;e <= 9;++e)
						{
							for (f = 0;f <= 9;++f)
							{
								if ( a + b + c == d + e + f)
								{
									qwer++;
								}
							}
						}
					}
				}
			}
		}

		return qwer;

}

int one() {

	int q, w, r, t, y, u, x;
	int	oil=0;
	for (x = 0; x <= 999999; x++) {

		q = x % 1000000;
		q = q / 100000;

			w = x % 100000;
			w = w / 10000;

				r = x % 10000;
				r = r / 1000;

				t = x % 1000;
				t = t / 100;

			y = x % 100;
			y = y / 10;

		u = x % 10;

		if (q + w + r == t + y + u) {
		oil=oil+1;
		}
	}



	return oil;
}

int main()
{
	setlocale(0, "");

	int oik=one();
	cout << "1 for. Chislo biletov =" << oik << endl;

	int k = two();
	cout << "2 for. Chislo biletov: " << k << endl;

	int h=six();
	cout <<"6 for. Chislo biletov = " << h << endl;


	system("pause");
	return 0;
}
