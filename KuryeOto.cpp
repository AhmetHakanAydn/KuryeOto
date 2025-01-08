#include <iostream>
#include <string>
using namespace std;

// G�nderen ve Al�c� i�in ortak ki�i bilgileri
struct Kisi {
    string adi_soyadi;
    string adres;
    string telefon_no;
};

// Kuryenin bilgileri
struct Kurye {
    string adi_soyadi;
    string telefon_no;
};

// G�nderinin (kargonun) bilgileri
struct Gonderi {
    int    gonderi_no;
    double agirlik;      // kg cinsinden
    double hacim;        // �rn. desi veya m^3
    char   garanti;      // 'e' (evet) veya 'h' (hay�r)
    double ucret;        // g�nderi �creti (TL)
    
    // G�nderen ve al�c�
    Kisi   gonderen;
    Kisi   alici;
    
    // G�nderiyi ta��yan kurye
    Kurye  kurye;
};

int main() {
    setlocale(LC_ALL, "Turkish");  // T�rk�e karakter deste�i (baz� ortamlarda gerekli olmayabilir)

    // 5 adet g�nderi i�in dizi tan�ml�yoruz
    Gonderi gonderiler[5];

    // 5 farkl� g�nderi bilgisi alal�m
    for (int i = 0; i < 5; i++) {
        cout << "\n=== " << i+1 << ". G�NDER� B�LG�LER� ===\n";

        // G�nderen bilgileri
        cout << "[G�nderen Bilgileri]\n";
        cout << "Ad� Soyad�  : ";
        getline(cin >> ws, gonderiler[i].gonderen.adi_soyadi);
        cout << "Adres       : ";
        getline(cin >> ws, gonderiler[i].gonderen.adres);
        cout << "Telefon No  : ";
        getline(cin >> ws, gonderiler[i].gonderen.telefon_no);

        // Al�c� bilgileri
        cout << "\n[Al�c� Bilgileri]\n";
        cout << "Ad� Soyad�  : ";
        getline(cin >> ws, gonderiler[i].alici.adi_soyadi);
        cout << "Adres       : ";
        getline(cin >> ws, gonderiler[i].alici.adres);
        cout << "Telefon No  : ";
        getline(cin >> ws, gonderiler[i].alici.telefon_no);

        // G�nderi (kargo) bilgileri
        cout << "\n[G�nderi Detaylar�]\n";
        cout << "G�nderi No  : ";
        cin >> gonderiler[i].gonderi_no;
        cout << "A��rl�k (kg) : ";
        cin >> gonderiler[i].agirlik;
        cout << "Hacim        : ";
        cin >> gonderiler[i].hacim;
        cout << "Garanti (e/h): ";
        cin >> gonderiler[i].garanti;
        cout << "�cret (TL)   : ";
        cin >> gonderiler[i].ucret;

        // Kuryenin bilgileri
        cout << "\n[Kurye Bilgileri]\n";
        cout << "Ad� Soyad�  : ";
        getline(cin >> ws, gonderiler[i].kurye.adi_soyadi);
        cout << "Telefon No  : ";
        getline(cin >> ws, gonderiler[i].kurye.telefon_no);

        cout << "---------------------------------------\n";
    }

    // Bilgileri listeleyelim
    cout << "\n=== 5 ADET G�NDER�N�N L�STES� ===\n";
    for (int i = 0; i < 5; i++) {
        cout << "\n--- " << i+1 << ". G�nderi ---\n";
        cout << "[G�nderen]" << endl;
        cout << "Ad� Soyad�  : " << gonderiler[i].gonderen.adi_soyadi << endl;
        cout << "Adres       : " << gonderiler[i].gonderen.adres << endl;
        cout << "Telefon No  : " << gonderiler[i].gonderen.telefon_no << endl;

        cout << "\n[Al�c�]" << endl;
        cout << "Ad� Soyad�  : " << gonderiler[i].alici.adi_soyadi << endl;
        cout << "Adres       : " << gonderiler[i].alici.adres << endl;
        cout << "Telefon No  : " << gonderiler[i].alici.telefon_no << endl;

        cout << "\n[G�nderi Detaylar�]" << endl;
        cout << "G�nderi No  : " << gonderiler[i].gonderi_no << endl;
        cout << "A��rl�k (kg) : " << gonderiler[i].agirlik << endl;
        cout << "Hacim        : " << gonderiler[i].hacim << endl;
        cout << "Garanti (e/h): " << gonderiler[i].garanti << endl;
        cout << "�cret (TL)   : " << gonderiler[i].ucret << endl;

        cout << "\n[Kurye]" << endl;
        cout << "Ad� Soyad�  : " << gonderiler[i].kurye.adi_soyadi << endl;
        cout << "Telefon No  : " << gonderiler[i].kurye.telefon_no << endl;
    }

    return 0;
}

