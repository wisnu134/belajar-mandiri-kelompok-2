#include <iostream>
using namespace std;
int main()
{
    float baju, harga, diskon, bayar, total;
    int a,b,c,d,e,f,g,h,i, uang, kembalian;
    cout<<"                                   HADEED FASHION"<<endl<<endl;
    cout<<"                         Selamat Datang di Toko Baju Kami"<<endl;
    cout<<"                         -Ayo Belanja Sebelum Kehabisan-"<<endl;
    cout<<endl;
    cout<<"                                 Selamat Berbelanja"<<endl;
    cout<<"             ========================================================="<<endl;
    cout<<"Masukkan jumlah baju  = ";
    cin>>baju;
    cout<<"Masukkan harga baju   = ";
    cin>>harga;
    total= baju * harga;
    cout<<"Total harga           = "<<total<<endl;



    if (baju == 2)
    {
        diskon = 0.05 *(total);
        cout<<"Anda mendapatkan diskon (5%) dan mendapatkan 1 baju gratis = "<<diskon<<endl;
        bayar = total-diskon;
        cout<<"Total yang harus dibayar setelah mendapatkan diskon = "<<bayar<<endl;

    }
    else if ((baju>2) && (baju<=4))
    {


        diskon = 0.10 *(total);
        cout<<"Anda mendapatkan diskon (10%) = "<<diskon<<endl;
        bayar = total-diskon;
        cout<<"Total yang harus dibayar setelah mendapatkan diskon = "<<bayar<<endl;
    }
    else if ((baju > 4)&&(baju<12))
    {
        diskon = 0.15 *(total);
        cout<<"Selamat anda mendapatkan diskon (15%) = "<<diskon<<endl;
        bayar = total-diskon;
        cout<<"Total yang harus dibayar setelah mendapatkan diskon = "<<bayar<<endl;
    }
    else if (baju >12)
    {
        diskon = 0.3 *(total);
        cout<<"Selamat anda mendapatkan diskon (30%) = "<<diskon<<endl;
        bayar = total-diskon;
        cout<<"total bayar setelah mendapatkan diskon = "<<bayar<<endl;
    }
    else
    {

        diskon=0;
        bayar=total;
        cout<<endl;
        cout<<"Mohon maaf anda tidak mendapatkan diskon"<<endl;
        cout<<endl;
    }



    cout<<"Masukan uang yang anda bayarkan          = ";
    cin>>a;
    kembalian= a-bayar;
    cout<<"Kembalian uang anda                      = "<<kembalian<<endl;

    cout<<""<<endl;
    cout<<"Terima Kasih Sudah berbelanja di toko kami"<<endl;
    cout<<""<<endl;
    return 0;


}
