#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct DATA {
	double	dividend;
	double	divisor;
};

int main(int argc, char **argv)
{
	struct DATA	*pData = NULL;
	int			i, num = 0;

	scanf("%d", &num);
	pData = malloc(num * sizeof(struct DATA));

	for (i = 0; i < num; i++)
	{
		scanf("%lf %lf", &pData[i].dividend, &pData[i].divisor);
	}

	for (i = 0; i < num; i++)
	{
		printf("%lf\n", fmod(pData[i].dividend, pData[i].divisor));
	}

	free(pData);
	pData = NULL;

	return 0;
}
