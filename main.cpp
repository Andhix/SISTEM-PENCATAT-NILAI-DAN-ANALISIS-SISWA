/* =================================================
    PROYEK SISTEM PENCATAT NILAI DAN ANALISIS SISWA
    C++ BASED PR0JECT
    MINGGU, 11 JANUARI 2026
    BY ANDHIKA RAHMAN P.
   =================================================
*/ 

/* Pustaka-pustaka yang dibutuhkan */
#include <iostream>


using namespace std;

/* Konstanta */
const int KKM = 78;


/* Mendefinisikan kelas Siswa */
class Siswa
{
private:
    /* data */
    string namaSiswa;
    string noIndukSiswa;
    double nilaiSiswa;
    bool statusSiswa;
public:
    Siswa(string nama, string noInduk, double nilai);
    string getNamaSiswa();
    string getNoIndukSiswa();
    double getNilaiSiswa();
    bool getStatusSiswa();
};

Siswa::Siswa(string nama, string noInduk, double nilai)
{
    namaSiswa = nama;
    noIndukSiswa = noInduk;
    nilaiSiswa = nilai;
    statusSiswa = (nilai >= KKM) ? true : false;
}

string Siswa::getNamaSiswa()
{
    return Siswa::namaSiswa;
}

string Siswa::getNoIndukSiswa()
{
    return Siswa::noIndukSiswa;
}

double Siswa::getNilaiSiswa()
{
    return Siswa::nilaiSiswa;
}

bool Siswa::getStatusSiswa()
{
    return Siswa::statusSiswa;
}


int main()
{
    Siswa A("Andhika", "08123456", 78);
    cout << A.getNamaSiswa() << endl;
    cout << A.getNoIndukSiswa() << endl;
    cout << A.getNilaiSiswa() << endl;
    cout << A.getStatusSiswa() << endl;

    return 0;
}