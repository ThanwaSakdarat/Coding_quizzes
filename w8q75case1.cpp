#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter : ");
	scanf("%d %d",&x,&y);
	printf("%d %d\n",x,y);

	FILE * fp;
	int a,b,sum=0;
    fp = fopen("a.txt","w");
    fprintf(fp,"%d %d",x,y);
    fclose(fp);
	
	fp = fopen("a.txt","r");
	fscanf(fp,"%d %d",&a,&b);
	sum = a+b;
	fclose(fp);
	
	FILE * ft;
	ft = fopen("b.txt","w");
    fprintf(ft,"%d",sum);
    fclose(ft);
    return 0;
}