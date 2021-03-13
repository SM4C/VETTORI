#include <iostream>
using namespace std;
int main ()
{
    int n, essiah=0;
    cout<<"inserisci la dimensione della classe: "<<endl;
    cin>>n;
    float voti[n], s;
    s=0;
    for (int i=0; i<=n-1; i++)
    {
        cout<<"inserisci il voto: "<<endl;
        cin>>voti[i];
        s=s+voti[i];
        if (voti[i]>6)
        {
            essiah=essiah+1;
        }
    }
    cout<<"il numero di sufficienti è: "<<essiah<<endl;
    system ("pause");
    return 0;
}
