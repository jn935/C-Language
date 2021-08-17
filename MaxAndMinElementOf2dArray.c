int maximum(int [3][3]);
int minimum(int [3][3]);
int main()
{
    int a[3][3],i,j,m;
    printf("\n Enter Elements");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    m=maximum(a);
    printf("\nMaximum = %d",m);
    m=minimum(a);
    printf("\nMinimum = %d",m);
    return 0;
}
int maximum(int a[3][3])
{
    int i,j,m=-32768;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]>m)
            m=a[i][j];
        }
    }
    return m;
}
int minimum(int a[3][3])
{
    int i,j,m=32768;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]<m)
            m=a[i][j];
        }
    }
    return m;
}
