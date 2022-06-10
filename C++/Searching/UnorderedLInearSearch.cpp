int UnOrderedLinearSearch(int a[],int n,int data){
    for (int i = 0; i < n; i++){
        if (a[i]==data)
            return i;
}
return -1;
}