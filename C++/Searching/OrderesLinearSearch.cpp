int OrderedLinearSearch(int a[],int n,int data){
    for (int i = 0; i < n; i++)
    {
        if (a[i]==data)
            return i;
        else if (a[i]>data)
        {
            return -1;
        }
    }
    return -1;
}