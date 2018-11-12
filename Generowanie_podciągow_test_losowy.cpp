#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    int m,n,wybierz,pozostalo;
    cout<<"Podaj wartosc m: " ;
    cin>>m;
    cout<<"Podaj wartosc n: " ;
    cin>>n;

    wybierz=m;
    pozostalo=n;


    for(int i=0; i<=n; i++)
    {
        double prawd;
        prawd=(double)wybierz/(double)pozostalo;
        double los;
        los=((double)rand())/((double)RAND_MAX+1);

        if (los<prawd)
        {
            cout<<i<<endl;
            wybierz--;
        }
        pozostalo--;
    }
    return 0;
}
