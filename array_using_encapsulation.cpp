// wap to creat an inventory system using array and encapsulation
#include <iostream>
using namespace std;
class inventory
{
    int size;
    int capacity;
    int item[100];
    bool isValidIndex(int index)
    {
        return(index>=0 && index<size);
    }
    public:
    inventory(int cap=100)
    {
        capacity=cap;
        size=0;
    }
    void insert(int value)
    {
        if size>=capacity
        {
            cout<<"Inventory is full\n";
            return;
        }
        item[size++]=value;
    }
    void insertat(int index,int value )
    {
        if (size>=capacity )|| index<0 || index>=size
        {
            cout<<"Invalid positon\n";
            return;
        }
        for(int i=size;i>index;i--)
        {
            item[i]=item[i-1];
        }
        item[index]=value;
        size++;
    }
    void remove (int index)

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
    void update(int idex , int value){
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
        {item [i];
            if(item[i]==value)
            {
                cout<<"Item found at index "<<i<<endl;
                return i;
            }
        }
    }
    void findmax()
    {
       
        if (size==0)
        {
            return -1;
        }
        max=item[i];
        for(int i=1;i<size;i++)
        {
            if(item[i]>max)
            {
                max=item[i];
            }
        }
        return max;
    }
    void findmin()
    {
        if (size==0)
        {
            return -1;
        }
        min=item[i];
        for(int i=1;i<size;i++)
        {
            if(item[i]<min)
            {
                min=item[i];
            }
        }
        return min;
    }
    void reverse(){
        for (int i=0;i<size/2;i++)
        {
            int temp=item[i];
            item[i]=item[size-i-1];
            item[size-i-1]=temp;
        }
    }
    void shorting(){
        for (int =0;i<size-1;i++)
        {
            for(j=0;j<size-i-1;j++)
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
}
int main ()
{
    inventory in;
    int ch ,index,value;
    do
    {
        cout<<"1.Insert\n";
        cout<<"2.Insert at\n";
        cout<<"3.Remove\n";
        cout<<"4.Update\n";
        cout<<"5.Searching\n";
        cout<<"6.Find max\n";
        cout<<"7.Find min\n";
        cout<<"8.Reverse\n";
        cout<<"9.Sorting\n";
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
}}while(ch!=11);
    return 0;
}