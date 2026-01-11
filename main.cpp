/* =================================================
    PROYEK SISTEM PENCATAT NILAI DAN ANALISIS SISWA
    C++ BASED PR0JECT
    MINGGU, 11 JANUARI 2026
    BY ANDHIKA RAHMAN P.
   =================================================
*/ 

/* Pustaka-pustaka yang dibutuhkan */
#include <iostream>
#include <vector>

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
    /* Deklarasi variabel */
    int jmlSiswa;
    vector<Siswa> daftarSiswa;

    /* Input */
    cout << "Jumlah Siswa: ";
    cin >> jmlSiswa;

    cout << endl;

    for(int i = 0; i < jmlSiswa; i++)
    {
        string nama, noInduk;
        double nilai;

        cout << "Data siswa ke-" << i + 1 << ":" << endl;
        cout << "Nama: ";
        cin >> nama;
        cout << "Nomor Induk Siswa: ";
        cin >> noInduk;
        cout << "Nilai: ";
        cin >> nilai;

        Siswa siswaBaru(nama, noInduk, nilai);

        daftarSiswa.push_back(siswaBaru);

        cout << endl;
    }

    /* Output */
    for(auto siswa : daftarSiswa){
        bool status = siswa.getStatusSiswa();
        string hasil = (status == 1) ? "Lulus" : "Gagal";

        cout << "Nama: " << siswa.getNamaSiswa() << endl;
        cout << "Nomor Induk: " << siswa.getNoIndukSiswa() << endl;
        cout << "Nilai: " << siswa.getNilaiSiswa() << endl;
        cout << "Status: " << hasil << endl;

        cout << endl;
    }

    return 0;
}