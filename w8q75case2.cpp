#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
int main()
{
    int a[2];
    int i;  
	for(i=0; i<2; i++){
    printf("Enter : ");
    scanf("%d",&a[i]);
    }

	FILE * fp;
	int b[2],sum=0;
    fp = fopen("a.txt","w");
    for(int i=0; i<2; i++){
        fprintf(fp,"%d ",a[i]);
    }
    fclose(fp);
	
	fp = fopen("a.txt","r");
    for(int i=0; i<2; i++){
	    fscanf(fp,"%d",&a[i]);
        sum += a[i];
    }
	fclose(fp);
	
	FILE * ft;
	ft = fopen("b.txt","w");
    fprintf(ft,"%d",sum);
    fclose(ft);
    return 0;
}