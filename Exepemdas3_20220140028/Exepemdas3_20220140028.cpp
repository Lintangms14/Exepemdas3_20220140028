#include <iostream>
#include <vector>

using namespace std;

#include "Buku.h"

int main() {
	Buku* varBuku1 = new Buku("Joko");
	Buku* varBuku2 = new Buku("Lia");
	Buku* varBuku3 = new Buku("Asroni");
	Buku* varBuku4 = new Buku("Giga");

	delete varBuku1;
	delete varBuku2;
	delete varBuku3;
	delete varBuku4;

	return 0;
}