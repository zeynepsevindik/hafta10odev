#include <iostream>
#include <cstring>
using namespace std;
class Y
{
public:
    string isim;
    string Sehir;
    int puan;


    Y(string xisim,string xSehir,int xpuan)
    {

      isim=xisim;
      Sehir=xSehir;
      puan=xpuan;
    }
       ~Y()
      {
          cout << "By By Bir dahaki programda tekrar gorusecegiz " << endl;
      }

};

 int main()
{
     Y y ("\nZeynep","\nNigde\n",1000000);
   cout << y.isim << " " << y.Sehir<< " " << y.puan << " " << "\n";
   return 0;

}
