#include<stdio.h>
#include<stdlib.h>
void insertion();
void deletion();
void searching();
void sorting();
void display();
int array[100];
int num;
int n;
int main()
{
	printf("enter the number of elements");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("the array elements are");
	for(int i=0;i<num;i++)
	{
		printf("%d\n",array[i]);
	}
	while(1)
	{
		printf("enter option:\n 1.insertion \n 2.deletion \n 3.searching \n 4.sorting \n 5.display \n 6.exit \n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				insertion();
				break;
			case 2:
				deletion();
				break;
			case 3:
				searching();
				break;
			case 4:
				sorting();
				break;
			case 5:
				display();
				break;
			case 6:
				exit(0);
				break;
			default:printf("invalid option\n");
			break;
		}
	}
	return 0;
}
void insertion()
{
	int number;
	printf("enter the number to be inserted \n");
	scanf("%d",&number);
	array[num]=number;
	num=num+1;
	printf("the array elements are: \n");
	for(int i=0;i<num;i++)
	{
		printf("%d\n",array[i]);
	}
}
void deletion()
{
int i,ind,j;
if(num>0)
{
	printf("\n enter the index of element \n");
	scanf("%d",&ind);
	for(j=ind;j<num;j++)
	  array[j]=array[j+1];
	num=num-1;
}
else
{
	printf("\n arrayis empty\n");
}
printf("the array elements are:");
for(int i=0;i<num;i++)
{
	printf("%d\n",array[i]);
}

}

void searching()
{
	int num, tosearch,found,i;
	printf("\n enter element to search:");
	scanf("%d",&tosearch);
	found=0;
	for(i=0;i<num;i++)
	{
		if (array[i]==tosearch)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		printf("\n%d is found at position %d\n",tosearch,i++);
	}
	else
	{
	printf("\n%d is not found in the array\n", tosearch);
	}
}
void sorting()
{
	int i,a,j;
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;++j)
		{
			if(array[i]>array[j])
			{
				a=array[i];
				array[i]=array[j];
				array[j]=a;
			}
		}
	}
	printf("the number arranged in assscending order are given below\n");
	for(i=0;i<num;i++)
	{
		printf("%d\n",array[i]);
	}
}
void display()
{
	int i;
	printf("the array elements are:");
	for(int i=0;i<num;i++)
	{
		printf("%d\n",array[i]);
	}
}
	
			
	
