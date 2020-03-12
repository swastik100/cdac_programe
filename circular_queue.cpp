# include<iostream>
using namespace std;
# define MAX 5

int arr[MAX];
int front = -1;
int rear = -1;


void insert(int item)
{
    if((front == 0 && rear == MAX-1) || (front == rear+1))
    {
        cout<<"\nQueue Overflow \n";
        return;
    }
    if (front == -1)  // empty 
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if(rear == MAX-1)   
            rear = 0;
        else
            rear = rear+1;
    }
    arr[rear] = item ;
}

void del()
{
    if (front == -1)
    {
        cout<<"\nQueue Underflow\n";
        return ;
    }
    cout<<"\nElement deleted from queue is : \n"<<arr[front];
    if(front == rear) //one element 
    {
        front = -1;
        rear=-1;
    }
    else
    {   
        if(front == MAX-1)
            front = 0;
        else
            front = front+1;
    }
}

void display()
{
    int front_pos = front,rear_pos = rear;
    if(front == -1)
    {
        cout<<"\nQueue is empty\n";
        return;
    }
    printf("\nQueue elements :\n");
    if( front_pos <= rear_pos )
        while(front_pos <= rear_pos)
        {
            cout<<"\n"<<arr[front_pos]<<" ";
            front_pos++;
        }
    else
    {
        while(front_pos <= MAX-1)
        {
            cout<<"\n"<<arr[front_pos]<<" ";
            front_pos++;
        }
        front_pos = 0;
        while(front_pos <= rear_pos)
        {
            cout<<"\n"<<arr[front_pos]<<" ";
            front_pos++;
        }
    }
    cout<<"\n";
}

int main()
{
    int choice,item;
    do
    {
        cout<<"\n1.Insert\n2.Delete\n3.Display\n4.Quit\n";
        cout<<"\nEnter your choice : \n";
        cin>>choice;

        switch(choice)
        {
            case 1 :
                cout<<"\nInput the element for insertion in queue : \n";
                cin>>item;
                insert(item);
                break;

            case 2 :
                del();
                break;

            case 3:
                display();
                break;

            case 4:
                break;

                default:
                cout<<"\nWrong choice\n";
        }
    }while(choice!=4);
    
    return 0;
}