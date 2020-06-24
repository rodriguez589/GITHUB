#include <iostream>

using namespace std;

int main()
{
    int nimpares [100];
    int i, num;
    nimpares[0]=1;

    num = 1;

    for (i=1;i<=100;i++)
     {
        num=num+2;
        nimpares[i]=num;
        
      }

    cout<<"\nSe muestran los primeros 100 numeros impares"<<endl;
    
    for(i=99;i>=0;i--)
     {
        cout<<endl;
        cout<<nimpares[i]<<endl;
      }

    return 0;
        
    
}
