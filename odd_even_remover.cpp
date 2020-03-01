#include <iostream>

using namespace std; 

int main()
{
	int arr[100];



	cout<<"enter the total number of elements\n";
	int b;
	cin>>b;
	cout<<"enter elements";
	for (int i = 0; i < b; ++i)
	{
		cin>>a[i];
	}
 go:   
    cout<<"press 1: To remove odd numbers\n press 2: To remove even numbers ";
    cout<<"\npress 3: To remove negative numbers\n press 4: To remove positive numbers \n press 5: To exit ";

    int c;
    cin>>c;

    switch(c)
    {
    	case 1:
    			process_array(int *arr,int b,removeodd());
    			break;
		case 2:
    			process_array(int *arr,int b,removeven());
    			break;
    	case 3:
    			process_array(int *arr,int b,removenegative());
    			break;
    	case 4:
    			process_array(int *arr,int b,removpositive());
    			break;
    	case 5:
    			exit(1);
    	default:
    			cout<<"wrong choice entered";
    			goto go;
    			break;

    }
	
	return 0;
}