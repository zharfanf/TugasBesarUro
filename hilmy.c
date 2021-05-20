#include "header.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void TampilkanStatus(Status *T){
	printf("Health %d\n Happines %d\n Social %d\n Money %d\n Hygenie %d\n Score %d\n",T->Health, T->Happiness, T->Social, T->Money, T->Hygenie, T->Score);
}

void StartAwal(Status *T){
	// hp(*T) = 100;
	// happy(*T) = 50;
	// soc(*T) = 50;
	// duit(*T) = 50;
	// hygenie(*T) = 50;
	// skor(*T) = 0;

	T->Health = 100;
	T->Happiness = 50;
	T->Social = 50;
	T->Hygenie = 50;
	T->Money = 50;
	T->Score = 0;
}


void KurangHealth(Status *T, int H){
	T->Health -= H;
}

void TambahSkor(Status *T, int S){
	T->Score += S;
}

void Mandi(Status *T){
	
	T->Hygenie += 25;

	KurangHealth(T, 3);
	TambahSkor(T, 3);
	BalikanNilai(T);
	}

void Makan(Status *T){
	if(T->Money < 5){
		printf("Uang Tidak Cukup\n");
	}

	else{
		T->Money -= 5;
		T->Hygenie -= 2;
		T->Happiness += 1;
	}
	KurangHealth(T, 2);
	TambahSkor(T, 4);
	BalikanNilai(T);
}


void Tidur(Status *T){
	T->Happiness += 8;
	T->Hygenie -= 4;
	T->Social -= 1;

	KurangHealth(T, 1);
	TambahSkor(T, 2);
	BalikanNilai(T);


}

void Kerja(Status *T){
	T->Money += 14;
	T->Hygenie -= 6;
	T->Social -= 2;
	T->Happiness -= 5;

	KurangHealth(T, 5);
	TambahSkor(T, 10);
	BalikanNilai(T);



}

void Kuliah(Status *T){
	if(T->Money < 4){
		printf("Uang Tidak Mencukupi, Kerja Dulu Sana!!\n");
	}
	else{
	T->Money -= 4;
	T->Hygenie -= 3;
	T->Social -= 3;
	T->Happiness -= 8;
}
	KurangHealth(T, 7);
	TambahSkor(T, 11);
	BalikanNilai(T);


}

void Nongkrong(Status *T){
	if(T->Money < 8){
		printf("Uang Tidak Mencukupi, Kerja Dulu Sana!!\n");
	}
	else{
	T->Money -= 8;
	T->Hygenie -= 3;
	T->Social += 9;
	T->Happiness += 7;
}
	KurangHealth(T, 3);
	TambahSkor(T, 2);
	BalikanNilai(T);


}

void Main(Status *T){
	if(T->Money < 1){
		printf("Uang Tidak Mencukupi, Kerja Dulu Sana!!\n");
	}
	else{
	// duit(*T) -= 1;
	// hygenie(*T) -= 8;
	// soc(*T) += 2;
	// happy(*T) -= 5;


	T->Money -= 8;
	T->Hygenie -= 3;
	T->Social += 9;
	T->Happiness += 7;
}
	KurangHealth(T, 5);
	TambahSkor(T, 6);
	BalikanNilai(T);


}

void NontonTV(Status *T){
	// soc(*T) -= 2;
	// happy(*T) += 5;
	// hygenie(*T) -= 1;

	T->Social -= 2;
	T->Happiness += 5;
	T->Hygenie -= 1;


	KurangHealth(T, 3);
	TambahSkor(T, 2);
	BalikanNilai(T);

}

void Browsing(Status *T){
	// soc(*T) -= 1;
	// happy(*T) += 1;

	T->Social -= 1;
	T->Happiness += 1;

	KurangHealth(T, 1);
	TambahSkor(T, 1);
	BalikanNilai(T);

}

void Dagang(Status *T){
	// duit(*T) += 10;
	// soc(*T) += 7;
	// hygenie(*T) -= 5;

	T->Money += 10;
	T->Social += 7;
	T->Hygenie -= 5;


	KurangHealth(T, 3);
	TambahSkor(T, 7);
	BalikanNilai(T);

}

void BunuhDiri(Status *T){
	// hp(*T) = 0;
	T->Health = 0;

}

void BalikanNilai(Status *T){
	if(T->Social > 100){
		T->Social = 100;
		TambahSkor(T, 1);
	}
	else if(T->Social < 0){
		T->Social = 0;
		TambahSkor(T, -1);
	}
	if(T->Hygenie > 100){
		T->Hygenie = 100;
		TambahSkor(T, 1);
	}
	else if(T->Hygenie < 0){
		T->Hygenie = 0;
		TambahSkor(T, -1);
	}
	if(T->Happiness > 100){
		T->Happiness = 100;
		TambahSkor(T, 1);
	}
	else if(T->Happiness < 0){
		T->Happiness = 0;
		TambahSkor(T, -1);

	}

}