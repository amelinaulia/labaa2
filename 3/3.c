#include <stdio.h>
#include <locale.h>

void main()
{
	int L = 333, n = 2;
	int res1 = n / L;
	int res2 = n % L;
	printf("%7d\n%7d\n-------\n%0+4d.%-1d", n, L, res1, res2);
}