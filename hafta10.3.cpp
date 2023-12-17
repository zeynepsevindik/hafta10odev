#include <iostream>
#include <cstring>
using namespace std;
class Ev
{
public:
    string evsahibi;
    int evfiyat;
    int indirim;
    int arttir;
    void xindirim(int miktari){
     evfiyat=evfiyat-miktari;
     cout << "Eve indirim yaptik YENI FIYAT: "<<evfiyat<<endl;
  }
    void xarttir(int miktari){
         evfiyat=evfiyat+miktari;
         cout << "Evin fiyatini arttirdik YENI FIYAT: "<<evfiyat<<endl;
         int e1;
         cout << "O zaman en son fiyat:20500 "<<endl;


    }
 };

 int main()
 {

    Ev ev1;
    ev1.evsahibi="Zeynep\n";
    ev1.evfiyat=20000;
    cout << ev1.evsahibi<<" "<<ev1.evfiyat<<" "<<endl;
    ev1.xindirim(500);
    ev1.xarttir(600);
 }
