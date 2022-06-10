int InterpolationSearch(int a[],int data){
    int low=0,mid,high=sizeof(a)-1;
    while (low<=high)
    {
        mid=low+(((data-a[low])*(high-low))/(a[high]-a[low]));
        if(data==a[mid])
        return mid+1;
        if (data<a[mid])
        high=mid-1;
        else
        low=mid+1;
        
    }
    return -1;
}