#include <iostream>
using namespace std;

class inventory
{
    int size;
    int capacity;
    int item[100];

    bool isValidIndex(int index)
    {
        return (index >= 0 && index < size);
    }

public:

    inventory(int cap = 100)
    {
        capacity = cap;
        size = 0;
    }

    void insert(int value)
    {
        if(size >= capacity)
        {
            cout<<"Inventory is full\n";
            return;
        }

        item[size++] = value;
    }

    void insertat(int index,int value)
    {
        if(size >= capacity || index < 0 || index > size)
        {
            cout<<"Invalid position\n";
            return;
        }

        for(int i=size;i>index;i--)
        {
            item[i]=item[i-1];
        }

        item[index]=value;
        size++;
    }

    void remove(int index)
    {
        if(!isValidIndex(index))
        {
            cout<<"Invalid index\n";
            return;
        }

        for(int i=index;i<size-1;i++)
        {
            item[i]=item[i+1];
        }

        size--;
    }

    void update(int index , int value)
    {
        if(!isValidIndex(index))
        {
            cout<<"Invalid index\n";
            return;
        }

        item[index]=value;
    }

    void searching(int value)
    {
        for(int i=0;i<size;i++)
        {
            if(item[i]==value)
            {
                cout<<"Item found at index "<<i<<endl;
                return;
            }
        }

        cout<<"Item not found\n";
    }

    void findmax()
    {
        if(size==0)
        {
            cout<<"Inventory empty\n";
            return;
        }

        int max=item[0];

        for(int i=1;i<size;i++)
        {
            if(item[i]>max)
            {
                max=item[i];
            }
        }

        cout<<"Maximum item: "<<max<<endl;
    }

    void findmin()
    {
        if(size==0)
        {
            cout<<"Inventory empty\n";
            return;
        }

        int min=item[0];

        for(int i=1;i<size;i++)
        {
            if(item[i]<min)
            {
                min=item[i];
            }
        }

        cout<<"Minimum item: "<<min<<endl;
    }

    void reverse()
    {
        for(int i=0;i<size/2;i++)
        {
            int temp=item[i];
            item[i]=item[size-i-1];
            item[size-i-1]=temp;
        }
    }

    void sorting()
    {
        for(int i=0;i<size-1;i++)
        {
            for(int j=0;j<size-i-1;j++)
            {
                if(item[j]>item[j+1])
                {
                    int temp=item[j];
                    item[j]=item[j+1];
                    item[j+1]=temp;
                }
            }
        }
    }

    void display()
    {
        for(int i=0;i<size;i++)
        {
            cout<<item[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    inventory in;

    int ch,index,value;

    do
    {
        cout<<"\n1.Insert\n";
        cout<<"2.Insert at\n";
        cout<<"3.Remove\n";
        cout<<"4.Update\n";
        cout<<"5.Search\n";
        cout<<"6.Find max\n";
        cout<<"7.Find min\n";
        cout<<"8.Reverse\n";
        cout<<"9.Sort\n";
        cout<<"10.Display\n";
        cout<<"11.Exit\n";

        cin>>ch;

        switch(ch)
        {
        case 1:
            cin>>value;
            in.insert(value);
            break;

        case 2:
            cin>>index>>value;
            in.insertat(index,value);
            break;

        case 3:
            cin>>index;
            in.remove(index);
            break;

        case 4:
            cin>>index>>value;
            in.update(index,value);
            break;

        case 5:
            cin>>value;
            in.searching(value);
            break;

        case 6:
            in.findmax();
            break;
 
        case 7:
            in.findmin();
            break;

        case 8:
            in.reverse();
            break;

        case 9:
            in.sorting();
            break;

        case 10:
            in.display();
            break;
        }

    }while(ch!=11);

    return 0;
}