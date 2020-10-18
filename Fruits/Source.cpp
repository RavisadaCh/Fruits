#include<stdio.h>
int main()
{
	float fruit[4];
	float price[4];
	printf("In your basket :\n");
	
	int x = 0;
	float fullPrice = 0;
	float discount,total;
	while (x < 4)
	{
		scanf_s("%f %f", &fruit[x], &price[x]);
		fullPrice = fullPrice+(fruit[x] * price[x]);
		x++;
	}
	
	printf("Full price = %.2f\n", fullPrice);

	if (fullPrice >= 200 && fullPrice<400)
	{
		discount = fullPrice * 0.05;
	}
	else if (fullPrice >= 400)
	{
		discount = fullPrice * 0.1;
	}

	if (discount > 200)
	{
		discount = 200;
	}

	total = fullPrice - discount;
	printf("Total = %.2f", total);
	return 0;
}