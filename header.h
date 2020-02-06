#ifndef _HILMY_H_
#define _HILMY_H_

typedef struct
{
int Health;
int Happiness;
int Social;
int Hygenie;
int Money;
int Score;	
} Status;

/* selektor */
#define hp(T) (T).Health
#define happy(T) (T).Happiness
#define soc(T) (T).Social
#define hygenie(T) (T).Hygenie
#define duit(T) (T).Money
#define skor(T) (T).Score

/* konstruktor */
void TampilkanStatus(Status *T);

void StartAwal(Status *T);

void Mandi(Status *T);

void Makan(Status *T);

void Tidur(Status *T);

void Kerja(Status *T);

void Kuliah(Status *T);

void Nongkrong(Status *T);

void Main(Status *T);

void NontonTV(Status *T);

void Browsing(Status *T);

void Dagang(Status *T);

void BunuhDiri(Status *T);

void KurangHealth(Status *T, int H);

void TambahSkor(Status *T, int S);

void BalikanNilai(Status *T);




#endif
