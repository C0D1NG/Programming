 #include<stdio.h>
void main()
{
    int n,rem,initial,sum=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    initial=n;
    while(n!=0)
    {
        rem=n%10;
sum=sum+rem*rem*rem;
 n=n/10;
    }
    if(initial==sum)
        printf("%d is an armstrong number",initial);
    else
        printf("%d is not an armstrong number",initial);
}
