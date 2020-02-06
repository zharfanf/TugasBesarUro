#include "header.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void TampilkanStatus(Status *T){
	printf("Health %d\n Happines %d\n Social %d\n Money %d\n Hygenie %d\n Score %d\n",hp(*T), happy(*T), soc(*T), duit(*T), hygenie(*T), skor(*T));
}

void StartAwal(Status *T){
	hp(*T) = 100;
	happy(*T) = 50;
	soc(*T) = 50;
	duit(*T) = 50;
	hygenie(*T) = 50;
	skor(*T) = 0;
}


void KurangHealth(Status *T, int H){
	hp(*T) -= H;
}

void TambahSkor(Status *T, int S){
	skor(*T) += S;
}

void Mandi(Status *T){
	
	hygenie(*T) += 25;
	//if hygenie(*T) >= 100{
		//hygenie(*T) = 100;
	//}

	KurangHealth(T, 3);
	TambahSkor(T, 3);
	BalikanNilai(T);
	}

void Makan(Status *T){
	if duit < 5{
		printf("Uang Tidak Cukup\n");
	}

	else{
		duit(*T) -= 5;
		hygenie(*T) -= 2;
		happy(*T) += 1;
	}
	KurangHealth(T, 2);
	TambahSkor(T, 4);
	BalikanNilai(T);
}


void Tidur(Status *T){
	happy(*T) += 8;
	hygenie(*T) -= 4;
	soc(*T) -= 1;

	KurangHealth(T, 1);
	TambahSkor(T, 2);
	BalikanNilai(T);


}

void Kerja(Status *T){
	duit(*T) += 14;
	hygenie(*T) -= 6;
	soc(*T) -= 2;
	happy(*T) -= 5;

	KurangHealth(T, 5);
	TambahSkor(T, 10);
	BalikanNilai(T);



}

void Kuliah(Status *T){
	if duit(*T) < 4{
		printf("Uang Tidak Mencukupi, Kerja Dulu Sana!!\n");
	}
	else{
	duit(*T) -= 4;
	hygenie(*T) -= 3;
	soc(*T) -= 3;
	happy(*T) -= 8;
}
	KurangHealth(T, 7);
	TambahSkor(T, 11);
	BalikanNilai(T);


}

void Nongkrong(Status *T){
	if duit(*T) < 8{
		printf("Uang Tidak Mencukupi, Kerja Dulu Sana!!\n");
	}
	else{
	duit(*T) -= 8;
	hygenie(*T) -= 3;
	soc(*T) += 9;
	happy(*T) += 7;
}
	KurangHealth(T, 3);
	TambahSkor(T, 2);
	BalikanNilai(T);


}

void Main(Status *T){
	if duit(*T) < 1{
		printf("Uang Tidak Mencukupi, Kerja Dulu Sana!!\n");
	}
	else{
	duit(*T) -= 1;
	hygenie(*T) -= 8;
	soc(*T) += 2;
	happy(*T) -= 5;
}
	KurangHealth(T, 5);
	TambahSkor(T, 6);
	BalikanNilai(T);


}

void NontonTV(Status *T){
	soc(*T) -= 2;
	happy(*T) += 5;
	hygenie(*T) -= 1;

	KurangHealth(T, 3);
	TambahSkor(T, 2);
	BalikanNilai(T);

}

void Browsing(Status *T){
	soc(*T) -= 1;
	happy(*T) += 1;

	KurangHealth(T, 1);
	TambahSkor(T, 1);
	BalikanNilai(T);

}

void Dagang(Status *T){
	duit(*T) += 10;
	soc(*T) += 7;
	hygenie(*T) -= 5;

	KurangHealth(T, 3);
	TambahSkor(T, 7);
	BalikanNilai(T);

}

void BunuhDiri(Status *T){
	hp(*T) = 0;

}

void BalikanNilai(Status *T){
	if soc(*T) > 100{
		soc(*T) = 100;
		TambahSkor(T, 1);
	}
	else if soc(*T) < 0{
		soc(*T) = 0;
		TambahSkor(T, -1);
	}
	if hygenie(*T) > 100{
		hygenie(*T) = 100;
		TambahSkor(T, 1);
	}
	else if hygenie(*T) < 0{
		hygenie(*T) = 0;
		TambahSkor(T, -1);
	if happy(*T) > 100{
		happy(*T) = 100;
		TambahSkor(T, 1);
	}
	else if happy(*T) < 0{
		happy(*T) = 0;
		TambahSkor(T, -1);

}

