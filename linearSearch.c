#include<stdio.h>

int main()
{
	int i, n, key, flag;
	
	printf("How many elements do you want to enter? ");
	scanf("%d", &n);
	
	int a[n];
	
	printf("Enter elements: ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("Which element do you want to search? ");
	scanf("%d", &key);
	
	for(i = 0; i < n; i++)
	{
		if(key == a[i])
		{
			flag = 1;
		}
	}
	
	if(flag == 1)
	{
		printf("The item is present in the array.\n");
	}
	else
	{
		printf("The item is not present in the array.\n");
	}
}
