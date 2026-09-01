#include <iostream>
// menambahkan standard library untuk program bisa mendeteksi tipe data string
#include <string>

int main(){
	// membuat variable buat penampungan nama
	std::string namaDepan, namaLengkap;

	/*
	std::cout << "masukan nama depan anda: " << std::endl;
	std::cin >> namaDepan;
	
	std::cout << std::endl;
	*/

	//cout = program mengeluarkan data program ke cout
	std::cout << "masukan nama lengkap anda: " << std::endl;
	//cin = reading data, data berasal dari luar program dan masuk ke program
	std::getline(std::cin, namaLengkap);

	std::cout << "halo " << namaLengkap << "!" << std::endl;

	return 0;	
}
