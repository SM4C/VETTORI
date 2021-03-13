//Per ogni studente di una classe (composta da N studenti) si hanno 5 voti. Introdurre da tastiera i nomi degli studenti ed i loro voti; inserire i nomi in un vettore e la media dei 5 voti in un altro vettore. A fine lavoro indicare quanti sono gli studenti con media sufficiente, quanti sono gli studenti con media fra 7 e 8 e lo studente (riportando il nome e la media) che ha avuto la media più alta.

#include <iostream>
using namespace std;
int main ()
{
    int n, maxp=0, minp=9999;
    cout<<"quanti sono gli studenti?"<<endl;
    cin>>n;
    float media[n], maxmedia, mediasuff[n], media78[n], voto, sum;
    string nome[n], maxname;
    for (int i=0; i<=n-1; i++)
    {
        cout<<"inserisci il nome dello studente:"<<endl;
        cin>>nome[n];
        cout<<"inserisci il primo voto:"<<endl;
        cin>>voto;
        sum=sum+voto;
        cout<<"inserisci il secondo voto:"<<endl;
        cin>>voto;
        sum=sum+voto;
        cout<<"inserisci il terzo voto:"<<endl;
        cin>>voto;
        sum=sum+voto;
        cout<<"inserisci il quarto voto:"<<endl;
        cin>>voto;
        sum=sum+voto;
        cout<<"inserisci il quinto voto:"<<endl;
        cin>>voto;
        sum=sum+voto;
        media[n]=sum/5;
        if (media[n]>maxmedia)
        {
            maxmedia=media[n];
            maxname=nome[n];
        }
    }
    cout<<"RESOCONTO STUDENTI"<<endl;
    cout<<"STUDENTI CON MEDIA SUFFICIENTE"<<endl;
    for (int i=0; i<=n-1; i++)
    {
        if (media[n]>=6)
        {
            cout<<"NOME: "<<nome[n]<<endl;
            cout<<"MEDIA: "<<media[n]<<endl;
        }
    }
    cout<<"STUDENTI CON MEDIA TRA 7 E 8"<<endl;
    for (int i=0; i<=n-1; i++)
    {
        if (media[n]>=7 && media[n]<=8)
        {
            cout<<"NOME: "<<nome[n]<<endl;
            cout<<"MEDIA: "<<media[n]<<endl;
        }
    }
    cout<<"STUDENTE CON LA MEDIA PIU' ALTA"<<endl;
    cout<<"NOME: "<<maxname<<endl;
    cout<<"MEDIA: "<<maxmedia<<endl;
    system ("pause");
    return 0;
}
