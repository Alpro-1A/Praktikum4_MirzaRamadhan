#include <iostream>
using namespace std;

int main(){

    cout << "Program Membuat Pyramid Bintang" << endl;

    // prep
    int n;

    cout << "Masukkan tinggi pyramid: ";
    //  input tinggi pyramid
    cin >> n;
    cout << "Pyramid dengan tinggi " << n << " akan berbentuk seperti ini: \n\n";

    // outer loop, pada kasus ini berfungsi sebagai tinggi segitiga
    for (int i = 1; i <= n; i++){
        /* inner loop1, pada kasus ini, karena segitiga tidak menempel ke samping kiri, berarti harus diberi spasi terlebih dahulu
        innerloop1 inilah yang melakukan hal tersebut*/
        for (int j = n; j > i; j--){
            cout << " ";
        }
        /*inner loop2, pada kasus ini, berfungsi untuk menampilkan bentuk pada segitiga menggunakan tanda bintang (*)*/
        for (int k = 1; k <= i; k++){
            cout << "* ";
        }
    // membuat baris baru pada setiap loop agar tinggi segitiga vertikal
    cout << endl;
    }

    cout << "\nTerima Kasih!";
    return 0;
}
