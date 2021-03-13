#include <iostream>
using namespace std;
int main ()
{
    int n, vmax=0;
    cout<<"inserisci la dimensione della classe: "<<endl;
    cin>>n;
    float voti[n], s;
    s=0;
    for (int i=0; i<=n-1; i++)
    {
        cout<<"inserisci il voto: "<<endl;
        cin>>voti[i];
        s=s+voti[i];
        if (voti[i]>vmax)
        {
            vmax=voti[i];
        }
    }
    cout<<"il voto più alto è stato un: "<<vmax<<endl;
    system ("pause");
    return 0;
}
