int shortt(int n,int arr[])
{
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] =arr [i+1];
                arr[i+1] = temp;
            }
        }
    }
    return arr;
}

int main()
{
    int n,j,i;
    scanf("%d",&n);
    int arr1[n],arr2[n],ans[n] ;

    for( i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for( i=0; i<n; i++)
    {
        scanf("%d",&arr2[i]);
    }

    shortt(n,arr1);
    shortt(n,arr2);

    for(j=0; j<n; j++)
    {
        ans[j]=arr1[j]-arr2[n-j-1];
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",ans[i]);
    }

    return 0;
}

