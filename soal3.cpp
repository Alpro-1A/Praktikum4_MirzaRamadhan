#include <iostream>
using namespace std;

int main()
{
  cout << "Program Deret Fibonacci" << endl;
  int n, n1 = 0, n2 = 1, fn = 0;

    cout << "Jumlah deret fibonacci yang dibutuhkkan: "; cin >> n; //input deret fibonacci yg dibutuhkan

    for(int i = 1; i <= n; i++) {
//deret nilai ke-1
	    if(i == 1) {
            cout << n1 << " ";
        }
//deret nilai ke-2
        if(i == 2) {
            cout << n2 << " ";
        }
//deret nilai ke-n
    	fn = n1 + n2;
   	 	n1 = n2;
    	n2 = fn;
    	cout << fn << " ";
    }

  cout << endl;
  return 0;
}
