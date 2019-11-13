//INSERTION SORT


#include<stdio.h>

void insertionSort(int n,int a[]);
void main()
	{

		int i,j,n,temp,a[25];
		printf("Enter the number of elements to be sorted:");
		scanf("%d",&n);
		printf("Enter elements:");
		for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
			}
		insertionSort(n,a);
	}
void insertionSort(int n,int a[])
	{
		int i,temp,j;
		for(i=0;i<n;i++)
			{

				temp=a[i];
				j=i-1;
				while(temp<a[j] && j>=0)
					{
						a[j+1]=a[j];
						j=j-1;

					}
				a[j+1]=temp;
			}
		printf("Result is:\n");
		for(i=1;i<n;i++)
			{
				printf("%d\n",a[i]);
			}
	}

