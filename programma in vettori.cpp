#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"inserisci la dimensione della classe: "<<endl;
    cin>>n;
    float voti[n], s, media;
    string nomi[n];
    s=0;
    for (int i=0; i<=n-1; i++)
    {
        cout<<"come se chiama il kiddo: "<<endl;
        cin>>nomi[n];
        cout<<"inserisci il voto: "<<endl;
        cin>>voti[i];
        s=s+voti[i];
    }
    media=s/n;
    cout<<"la media è: "<<endl;
    cout<<"gli studenti che hanno un voto maggiore della media: "<<endl;
    for (int i=0; i<=n-1; i++)
    {
        if (voti[n]>media)
        {
            cout<<nomi[n]<<endl;
        }
    }
    system ("pause");
    return 0;
}

