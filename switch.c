#include<stdio.h>
int main()
{
	int n;
	printf("enter n: ");
	scanf("%d",&n);
	switch (n)
	{
	case 1:
		printf("Pizza,Rs 239");
		break;
	case 2:
		printf("Burger,Rs 129");
		break;
	case 3:
		printf("Pasta,Rs 179");
		break;
	case 4:
		printf("French fries,Rs 99");
		break;
	default:
		printf("Sandwich,Rs149");
	}
}
