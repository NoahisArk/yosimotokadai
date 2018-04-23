#include <stdio.h>
#include <math.h>

void main()
{
	printf("------------------------------\n\n");
	printf("‹g–{\n\n");

	printf("–â‚P--------------------------\n\n");

	float An  =   0.0;
	float hp  = 256.0;
	float hp1 =  56.0;

	An = hp1 / hp * 100;

	printf("%.1lf%\n\n", An);

	printf("–â‚Q--------------------------\n\n");

	hp1		  = 2500.0;
	An		  =    0.0;
	float hp2 = 1200.0;
	float Bn  =    0.0;
	int   max =   15;
	int   st  =    0;

	An = hp2 / hp1 * 100;  //48.0%
	Bn = max / (100 / An); //15 / (100 / 48.0) = 7.2
	st = max - Bn;		   //15 - 7.2

	for (int i = 0; i < st; i++)
	{
		printf("™");
	}
	printf("\n\n");

	printf("–â‚R--------------------------\n\n");

	float x = 0.0;
	float y = 0.0;

	x = cos(3.14 / 180 * 30);
	y = sin(3.14 / 180 * 30);

	printf("%lf\n", x / y * 0.5);
	printf("%lf\n\n", y / x * 0.5);

	printf("–â‚S--------------------------\n\n");

	int A = 1;

	A = A << 2;

	printf("%d\n\n", A);

	printf("–â‚T--------------------------\n\n");

	A = 8;

	A = A >> 1;

	printf("%d", A);

	getchar();
	return;
}