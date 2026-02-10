// wap to print the start triangle pattern from right start
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            if(j>=n-i+1)
                cout<<"* ";
            
            else
                cout<<"  ";
            
        
        cout<<endl;
    }
    return 0;
}
