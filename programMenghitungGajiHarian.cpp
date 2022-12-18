// Program Menghitung gaji harian PT. XYZ

/*
    TUGAS PERTEMUAN KE - 7
    NAMA  : NADINDRA MAULANA AZIZ
    KELAS : 1C
    PRODI : INFORMATIKA
*/

#include <iostream>
using namespace std;

int pokok (int = 7500);
float lembur();
int makan(int = 10000);
int transport(int = 13000);

int main(){
    int nip, GajiPokok, Umakan = 0, Utransport = 0, GajiTotal;
    float JumJamKerja, Ulembur = 0;
    string nama;

    cout << "       Welcome to PT. XYZ" << endl;
    cout << "===================================" << endl;

    cout << "\nMasukkan NIP anda : ";
    cin >> nip;
    cout << "Masukkan nama anda : ";
    cin >> nama;
    cout << "Inputkan jumlah jam kerja anda hari ini : ";
    cin >> JumJamKerja;

    GajiPokok = pokok();

    if(JumJamKerja == 8){
        GajiTotal = GajiPokok;
    } else if(JumJamKerja > 8 && JumJamKerja < 9){
        Ulembur = lembur();
        GajiTotal = GajiPokok + Ulembur;
    } else if(JumJamKerja >= 9 && JumJamKerja < 10){
        Ulembur = lembur();
        Umakan = makan();
        GajiTotal = GajiPokok + Ulembur + Umakan;
    } else if (JumJamKerja >= 10){
        Ulembur = lembur();
        Umakan = makan();
        Utransport = transport();
        GajiTotal = GajiPokok + Ulembur + Umakan + Utransport;
    } else {
        cout << "\nJam Kerja anda tidak memenuhi kriteria gaji !!" << endl;
        GajiPokok = 0;
    }

    cout << "\n     Pegawai dengan identitas : " << endl;
    cout << "===================================" << endl;
    cout << "NIP                : " << nip << endl;
    cout << "NAMA               : " << nama << endl;
    cout << "JUMLAH JAM KERJA   : " << JumJamKerja << endl;
    cout << "===================================" << endl;
    cout << "Gaji Pokok         : Rp. " << GajiPokok << endl;
    cout << "Uang Lembur        : Rp. " << Ulembur << endl;
    cout << "Uang Makan         : Rp. " << Umakan << endl;
    cout << "Uang Transport     : Rp. " << Utransport << endl;
    cout << "Gaji Total         : Rp. " << GajiTotal << endl;

    return 0;
}

int pokok(int count){
    return count;
}
float lembur(){
    float a = pokok();
    float hasil = a * 1.5;
    return hasil;
}
int makan(int count){
    return count;
}
int transport(int count){
    return count;
}
