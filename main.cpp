#include <iostream>
using namespace std;

 int bolme(int sayi1, int sayi2) {
        if (sayi2 != 0 && sayi1>sayi2) {
            return sayi1 % sayi2;
        }
        else {
            return sayi2 % sayi1;
        }
 }

int main()
{
    cout << "Birinci sayıyı girin: ";
    int sayi1;
    cin  >> sayi1;    
    cout << "ikinci sayıyı girin: ";
    int sayi2;
    cin  >> sayi2;
    int kalan = bolme(sayi1,sayi2);
    cout<< kalan ;

    return 0;
}
