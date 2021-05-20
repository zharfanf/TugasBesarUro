#include "header.h"
#include "hilmy.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	Status *T;
	Status Hilmy;
	T = &Hilmy;
	printf("SELAMAT DATANG DI PERMAINAN HILMY'S LIFE!!\n");
	printf("==========================================\n" );
	printf("---Aturan Main----\n" );
	printf("1. Kamu Akan Memainkan Sebuah Life Simulator dengan Character Bernama Hilmy\n");
	printf("2. Kamu Pernah Main The Sims Kan?\n");
	printf("3. Nah, Kalau Pernah, Kurang Lebih Seperti itu Cara Bermainnya.\n");
	char nama[100];
	printf("Masukkan Nama:\n");
	scanf("%s[^\n]",nama);
	printf("Selamat bermain Hilmy's Life %s !\n",nama);

	printf("Pilihan:\n");
	printf("1. Mandi\n");
	printf("2. Makan\n");
	printf("3. Tidur\n");
	printf("4. Kerja\n");
	printf("5. Kuliah\n");
	printf("6. Nongkrong\n");
	printf("7. Main\n");
	printf("8. NontonTv\n");
	printf("9. Brownsing\n");
	printf("10. Dagang\n");
	printf("11. Bunuh Diri\n");

	int pilihan;

	StartAwal(T);

	while(Hilmy.Health > 0){
		scanf("%d",&pilihan);
		if (pilihan == 1){
			Mandi(T);
			TampilkanStatus(T);
		}
		else if (pilihan == 2){
			Makan(T);
			TampilkanStatus(T);
		}
		else if (pilihan == 3){
			Tidur(T);
			TampilkanStatus(T);
		}
		else if (pilihan == 4){
			Kerja(T);
			TampilkanStatus(T);
		}
		else if (pilihan == 5){
			Kuliah(T);
			TampilkanStatus(T);
		}
		else if (pilihan == 6){
			Nongkrong(T);
			TampilkanStatus(T);
		}
		else if (pilihan == 7){
			Main(T);
			TampilkanStatus(T);
		}
		else if (pilihan == 8){
			NontonTV(T);
			TampilkanStatus(T);
		}
		else if (pilihan == 9){
			Browsing(T);
			TampilkanStatus(T);
		}
		else if (pilihan == 10){
			Dagang(T);
			TampilkanStatus(T);
		}
		else if (pilihan == 11){
			BunuhDiri(T);
			TampilkanStatus(T);
		}


	}
	if (Hilmy.Score > 150){
		printf("Selamat, Kamu Memenangkan Permainan");
	}
	else{
		printf("Maaf, Kamu Belum Beruntung");
	}
return 0;

}