//Switch statements
int main()
{

    int a,b;
    scanf("%d %d",&a,&b);
    int n;
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("%d",a+b);
        break;

    case 2:
        printf("%d",a-b);
        break;

    case 3:
        printf("%d",a*b);
        break;

    case 4:
        printf("%d",a/b);
        break;
    default:
        printf("Invalid choice");
    }
}
