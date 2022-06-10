// Iterative Binary Search Algorithm
int BinarysearchIterative(int a[],int n,int data){
    int low=0;
    int high=n-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (a[mid]==data)
            return mid;
        else if (a[mid]<data)
            low=mid+1;
        else high=mid-1;
    }
    return -1;
}
//Recursive Binary Search Algorithm
int BinarySearchRecursive(int a[],int low,int high,int data){
    int mid=low+(high-low)/2;
    if(low>high)
    return -1;
    if(a[mid]==data)
    return mid;
    else if(a[mid]<data)
    return BinarySearchRecursive(a,mid+1,high,data);
    else return BinarySearchRecursive(a,low,mid-1,data);
    return -1;
}