#include <iostream>
#include <string>

int main(){
	std::string namaDepan, namaBelakang;

	std::cout << "masukan nama depan dan belakang anda anda: " << std::endl;
	std::cin >> namaDepan;
	std::getline(std::cin >> std::ws, namaBelakang);
	
	std::cout << "halo " << namaDepan << " "
		  <<  namaBelakang << "!" << std::endl;


	return 0;	
}
