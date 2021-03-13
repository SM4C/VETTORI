#include <iostream>
using namespace std;
int main ()
{
    int n, vmax=0;
    cout<<"inserisci la dimensione della classe: "<<endl;
    cin>>n;
    float voti[n];
    string nomi[n], nomemax;
    for (int i=0; i<=n-1; i++)
    {
        cout<<"nome dello studente: "<<endl;
        cin>>nomi[i];
        cout<<"inserisci il voto: "<<endl;
        cin>>voti[i];
        if (voti[i]>vmax)
        {
            vmax=voti[i];
            nomemax=nomi[i];
        }
    }
    cout<<"il voto più alto è stato un: "<<vmax<<" ,preso da: "<<nomemax<<endl;
    system ("pause");
    return 0;
}
