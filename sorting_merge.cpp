#include<iostream>
using namespace std;

void print(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << arr[i] << " ";   
}  

void mergealgo(int a[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];

    for (int i = 0; i < n1; ++i)
        L[i]=a[l+i];
    for (int i = 0; i < n2; ++i)
        R[i]=a[m+1+i];

    int i=0,j=0,k=l;

    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }

        else
        {
            a[k] = R[j];
            j++;
        }

        k++;
    }

    while(i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    while(j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}
  
void mergeSort(int a[],int l,int r)
{
    int m=(l+r)/2;
    if (l < r)
    {
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);

        mergealgo(a,l,m,r);
    }
}

int main()  
{  

    int a[100],n;
    cout<<"Enter the total no.s :\n";
    cin>>n;
    
    cout<<"Enter no.s :\n";
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }

    cout<<"Array before sorting is :\n";
    print(a,n);

    mergeSort(a,0,n-1);

    cout<<"\nArray after sorting is :\n";
    print(a,n);  
    
    return 0;  
}  
 