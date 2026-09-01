#include <iostream>

int main(){
	// versi yang salah:
	/*
	std::cout << "Belajar C++ itu seru!" <- dibagian ini tidak ada semicolon
	sehingga menyebabkan compile-time error
	 */

	// versi yang benar:
	std::cout << "Belajar C++ itu seru!";

	return 0;
}
