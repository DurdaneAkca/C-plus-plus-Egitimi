#include <iostream>
#include <iomanip>


int main()
{

    //char d = 'A';
    //char c = 120;

    //std::cout << d;
    //std::cout << c;

    //char a = 10;
    //char b = 15;

    //std::cout << a+b; //Toplama işlemi olarak gördüğü için matematik hesabı yapar.

    //char e[] = "merhaba";

    //std::cout << e;

    //------------------------------------------------------------------------------------------------------------//

    //signed int s = -1;
    //unsigned int u = 1;

    //if (s < u) {
    //    std::cout << "Kucuk";
    //}
    //else {
    //    std::cout << "Kucuk Degil";
    //}
    ////Burada sonuç Kucuk Degil olarak çıkar. Bunun sebebi unsigned int'i signed'e dönüştürür.

    //------------------------------------------------------------------------------------------------------------//

    //unsigned short x{ 65535 };
    //std::cout << "x degeri:" << x << '\n';

    //x = 65536;
    //std::cout << "x yeni deger:" << x << '\n';

    //x = 65537;
    //std::cout << "x son deger:" << x << '\n';

    ////x'in alabileceği max değer 65535 dir. x=65536 olduğunda 0 yazdırır, x=65537 olduğunda 1 yazdırır.
    //// 65536%(65535+1)=0 (bölümden kalan değer)
    //// 65537%(65535+1)=1


    //------------------------------------------------------------------------------------------------------------//

    //float f{ 123456789.0f };
    //std::cout << std::setprecision(6);
    //std::cout << f << '\n';

    ////hassasiyet değeri 6 olduğu için tamamını göstermez, bilimsel ifadeye çevirir.

    //double d{ 123456789.0 };
    ////std::cout << std::setprecision(7);
    //std::cout << d << '\n';


    //int8_t t = 115;
    //std::cout << t << '\n';
    ////çıktı s olacaktır 115 değerine karşılık gelir.

    int8_t a = 6;
    int8_t b = 6;

    std::cout << a+b << '\n';
    //toplama işlemi olduğu için çıktı 12 olur.
}
