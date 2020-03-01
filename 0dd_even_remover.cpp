#include <iostream>


int main()
{
	int a[100];

	cout<<"enter the total number of elements\n";
	int b;
	cin>>b;
	cout<<"enter elements";
	for (int i = 0; i < b; ++i)
	{
		cin>>a[i];
	}
    
    cout<<"press 1: To remove odd numbers\n press 2: To remove even numbers ";
    cout<<"\npress 3: To remove negative numbers\n press 4: To remove positive numbers ";

    int c;
    cin>>c;
go:
    switch(c)
    {
    	case 1:
    			removeodd();
    			break;
		case 2:
    			removeven();
    			break;
    	case 3:
    			removenegative();
    			break;
    	case 4:
    			removpositive();
    			break;
    	case default:
    			cout<<"wrong choice entered";
    			goto go:
    			break;

    }
	
	return 0;
}