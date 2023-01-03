#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
    playlistLagu Q;
    adr pLagu;
    infotype laguBaru;
    int N;
    int i;

    createPlaylist_1301213208(Q);

    cout<<"Jumlah lagu yang akan ditambahkan: ";
    cin>>N;

    for (i = 1; i <= N; i++){
        cout<<endl;
        cout<< "Urutan lagu ke: "<<i<<endl;
        cout<<"Artis: ";
        cin>>laguBaru.Artis;
        cout<<"Judul: ";
        cin>>laguBaru.Judul;
        createElement_1301213208(laguBaru,pLagu);
        enqueue_1301213208(Q, pLagu);
    }
    cout<<endl;
    cout<<"Playlist Awal"<<endl;
    cout<<endl;
    showSemuaLagu_1301213208(Q);

    dequeue_1301213208(Q,pLagu);
    cout<<"Playlist Akhir"<<endl;
    cout<<endl;
    showSemuaLagu_1301213208(Q);

}
