#include <iostream> 
using namespace std;  
    
void swap(int* ar, int* ap)  
{  
    int t = *ar;  
    *ar = *ap;  
    *ap = t;  
}  
  
int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high];   
    int i = (low - 1);   
  
    for (int j=low ; j<high ; j++)  
    {  
          
        if (arr[j] < pivot)  
        {  
            i++;  
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  

void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    {  
        int pi = partition(arr, low, high);  
  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  
  
void print(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << arr[i] << " ";   
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

    quickSort(a,0,n-1);

    cout<<"\nArray after sorting is :\n";
    print(a,n);  
    
    return 0;  
}  
 