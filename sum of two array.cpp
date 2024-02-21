#include<stdio.h>
#include<stdlib.h>
int main()
{
int *a,*b,*sum;
	a=(int *)malloc(5*sizeof(int));
	for(int i=0;i<5;i++)
	{
		scanf("%d",(a+i));
	
}
	b=(int *)malloc(5*sizeof(int));
	for(int i=0;i<5;i++)
	{
		scanf("%d",(b+i));
}
   sum=(int *)malloc(5*sizeof(int));
    for(int i =0;i<5;i++)
    {
    	*(sum+i)=(*(a+i)) + (*(b+i));
	}
		printf("sum of elements %d\n",*(sum+i));

}