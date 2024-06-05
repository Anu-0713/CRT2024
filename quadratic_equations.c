int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float d=b*b-4*a*c;
    if(d<0)
    {
        printf("Roots are not real");
    }
    else
    {
    float r1=(-b+sqrt(d))/2*a;
    float r2=(-b-sqrt(d))/2*a;
    printf("Root1=%f\n",r1);
    printf("Root2=%f\n",r2);
    }
}
