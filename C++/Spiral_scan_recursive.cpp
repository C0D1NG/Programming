#include<cstdio>

void spiralscan(int a[][20], int r, int c, int call, int counter)
{
    int i,j;
    if(counter>=r*c)
	return;
    for(j=call; j<c-call; j++)
    {
		printf("%d ",a[call][j]);
        counter++;
    }
    if(counter>=r*c)
    return;
	for(i=call+1;i<r-call;i++)
    {
		printf("%d ",a[i][c-call-1]);
        counter++;
    }
    if(counter>=r*c)
    return;
    for(j=c-2-call; j>=call; j--)
    {
		printf("%d ",a[r-1-call][j]);
        counter++;
    }
    if(counter>=r*c)
    return;
    for(i=r-2-call; i>call; i--)
    {
		printf("%d ",a[i][call]);
        counter++;
    }
    if(counter>=r*c)
    return;
    spiralscan(a,r,c,call+1,counter);
}
int main()
{
    int r, c , i, j, a[20][20];
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d",&c);
    printf("Enter matrix elements: ");
    for(i=0; i<r; i++)
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);
    printf("\n------Scanning Spirally------\n");
    spiralscan(a,r,c,0,0);
    return 0;
}

