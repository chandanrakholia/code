void Selection(int a[],int n){
    int i,j,min,temp;
    for (i = 0; i < n-1; i++)
    {
        min=i;
        for (j = 0; j < n; j++)
        {
            if (a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}