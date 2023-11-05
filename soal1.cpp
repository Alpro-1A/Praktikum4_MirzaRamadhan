 #include <iostream>

using namespace std;

int main()
{
    int batas;
    int bilanganGanjil = 0;
    int bilanganGenap = 0;
    int bilanganPrima = 0;

    cout << "------------------------------------------" << endl;
    cout << "Program Bilangan Ganjil, Genap, dan Prima " << endl;
    cout << "------------------------------------------" << endl;

    cout << "Masukkan batas akhir: ";
    cin >> batas;	// Input batas akhir yang ingin dihitung

// Rumus bilangan Ganjil

    cout << "Bilangan Ganjil: ";
    // Output bilangan ganjil
    // Mencari bilangan ganjil

    for (int i = 0; i <= batas; i++){
        if (i % 2 != 0){
            cout << i << " "; // Menampilkan bilangan ganjil
            bilanganGanjil += i;   // Operasi penjumlahan bilangan ganjil
        }
    }

    cout << endl;

// Rumus bilangan Genap

    cout << "Bilangan Genap: ";
    for (int i = 0; i <= batas; i += 2){
        cout << i << " ";
        bilanganGenap += i;
    }
    cout << endl;

// Rumus bilangan Prima

    cout << "Bilangan Prima: ";
    for (int i = 2; i <= batas; i++){
        int j;
        for (j = 2; j * j <= i && i % j != 0; j++){
        }
        if (j * j > i){
            cout << i << " ";
            bilanganPrima += i;
        }
    }
    cout << endl;

// Jumlah dari masing-masing bilangan tersebut

    cout << "Jumlah bilangan ganjil: " << bilanganGanjil << endl;
    cout << "Jumlah bilangan genap: " << bilanganGenap << endl;
    cout << "Jumlah bilangan Prima: " << bilanganPrima << endl;


// Faktor dari masing-masing bilangan tersebut

cout << "Faktor-faktor dari jumlah prima tersebut adalah: ";
	for (int r = 1; r <= bilanganPrima; r++){
		if (bilanganPrima % r == 0){
			 cout << r << " ";
			 }
		}
	cout<< endl;
	cout << "Faktor-faktor dari jumlah ganjil tersebut adalah: ";
	for (int s = 1; s <= bilanganGanjil; s++){
		if (bilanganGanjil % s == 0){
			 cout << s << " ";
			 }
		}
	cout<< endl;
	cout << "Faktor-faktor dari jumlah genap tersebut adalah: ";
	for (int t = 1; t <= bilanganGenap; t++){
		if (bilanganGenap % t == 0){
			 cout << t << " ";
			 }
		}
		cout<< endl;
}
