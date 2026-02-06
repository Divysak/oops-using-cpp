
/* wap to print the start pattern   *         *
                                    * *     * *
                                    * * * * * *
*/
#include <iostream>
using namespace std;
int main()
{
int n, i, j;
cout<<"enter the number of rows:"<<endl;
cin>>n;
for(i=1 ; i<=n ; i++)
{
    for(j=1 ; j<=i ; j++)
    {
        cout<<"* ";
    }
    for(j=1 ; j<=2*(n-i) ; j++)
    {
        cout<<"  ";
    }
    for(j=1 ; j<=i ; j++)
    {
        cout<<"* ";
    }
    cout<<endl;

}
return 0;
}

