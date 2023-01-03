#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <iostream>
using namespace std;

#define Head(Q) ((Q).Head)
#define Tail(Q) ((Q).Tail)
#define info(P) P->info
#define next(P) P->next
#define nil NULL

struct infotype{
    string Artis;
    string Judul;
};

typedef struct element *adr;

struct element{
    infotype info;
    adr next;
};

struct playlistLagu{
    adr Head;
    adr Tail;
};

void createPlaylist(playlistLagu &Q);
void createElement(infotype laguBaru, adr &pLagu);
void enqueue(playlistLagu &Q,adr pLagu);
void dequeue(playlistLagu &Q ,adr &pLagu);
void showSemuaLagu(playlistLagu Q);






#endif // QUEUE_H_INCLUDED
