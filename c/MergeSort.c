#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int *a,n;

void merge(int,int,int);
void merge_sort(int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        merge_sort(low,mid);
        merge_sort(mid+1,high);
        merge(low,mid,high);
    }
}
void merge(int low,int mid,int high)
{
    int h,i,j,*b,k;
    b=malloc(n*sizeof(int));
    h=low;
    i=low;
    j=mid+1;
    while((h<=mid)&&(j<=high))
    {
        if(a[h]<=a[j])
        {
            b[i]=a[h];
            h++;
        }
        else{
            b[i]=a[j];
            j++;
        }
        i++;
    }
    if(h>mid)
    {
        for(k=j;k<=high;k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    else{
        for(k=h;k<=mid;k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    for(k=low;k<=high;k++)
        a[k]=b[k];
}
int main()
{
    int i;
    double clk;
    clock_t start,end;
    printf("MERGE SORT:\n");
    printf("Enter the number of employee records:\n");
    scanf("%d",&n);
    a=malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        a[i]=rand()%100;

    printf("The Employee IDs are:(array elements)\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);

    start=clock();
    merge_sort(0,n-1);
    end=clock();

    clk=(double)(end-start)/CLOCKS_PER_SEC;
    printf("\nThe sorted Employee IDs are\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);

    printf("\n\n The run time is %lf ms\n",clk);
}

