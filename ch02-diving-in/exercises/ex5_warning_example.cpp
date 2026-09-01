#include <iostream>

int main(){
	// contoh warning
	//1. variable tidak pernah dipakai
	int x;

	/*
	 penjelasann contoh satu itu adalah contoh warning ketika sang
	 pembuat kode itu membuat variable yang nyatanya tidak pernah
	 dipakai di kode
	*/
	
	//2. narrowing conversion
	int phi = 3.14;

	/*
	 penjelasan kedua kenapa ini bisa jadi, karena pada dasarnya
	 peraturan c++ terhadap ini tidak melanggar dan compile tuh
	 aman karena si phi ini nantinya bakalan di paksa dan di ambil hanya
	 nilai 3 nya saja tanpa mmengambil belakangnya
	*/

	/*
	 kasus warning kenapa tidak akan membuat program mmenolak untuk compile
	 karena dalam peraturan tertulis compiler itu tidak melanggar tata
	 cara penulisan, sehingga masih bisa bypass compiler. hanya saja
	 itu adalah peringatan tentang miss nya sebuah penulis kode dalam
	 hal hal yang sebaiknya dibenarkan
	*/
	
	return 0;
}
