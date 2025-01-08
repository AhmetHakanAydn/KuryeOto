#include <iostream>
#include <string>
using namespace std;

// Gönderen ve Alýcý için ortak kiþi bilgileri
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

// Gönderinin (kargonun) bilgileri
struct Gonderi {
    int    gonderi_no;
    double agirlik;      // kg cinsinden
    double hacim;        // örn. desi veya m^3
    char   garanti;      // 'e' (evet) veya 'h' (hayýr)
    double ucret;        // gönderi ücreti (TL)
    
    // Gönderen ve alýcý
    Kisi   gonderen;
    Kisi   alici;
    
    // Gönderiyi taþýyan kurye
    Kurye  kurye;
};

int main() {
    setlocale(LC_ALL, "Turkish");  // Türkçe karakter desteði (bazý ortamlarda gerekli olmayabilir)

    // 5 adet gönderi için dizi tanýmlýyoruz
    Gonderi gonderiler[5];

    // 5 farklý gönderi bilgisi alalým
    for (int i = 0; i < 5; i++) {
        cout << "\n=== " << i+1 << ". GÖNDERÝ BÝLGÝLERÝ ===\n";

        // Gönderen bilgileri
        cout << "[Gönderen Bilgileri]\n";
        cout << "Adý Soyadý  : ";
        getline(cin >> ws, gonderiler[i].gonderen.adi_soyadi);
        cout << "Adres       : ";
        getline(cin >> ws, gonderiler[i].gonderen.adres);
        cout << "Telefon No  : ";
        getline(cin >> ws, gonderiler[i].gonderen.telefon_no);

        // Alýcý bilgileri
        cout << "\n[Alýcý Bilgileri]\n";
        cout << "Adý Soyadý  : ";
        getline(cin >> ws, gonderiler[i].alici.adi_soyadi);
        cout << "Adres       : ";
        getline(cin >> ws, gonderiler[i].alici.adres);
        cout << "Telefon No  : ";
        getline(cin >> ws, gonderiler[i].alici.telefon_no);

        // Gönderi (kargo) bilgileri
        cout << "\n[Gönderi Detaylarý]\n";
        cout << "Gönderi No  : ";
        cin >> gonderiler[i].gonderi_no;
        cout << "Aðýrlýk (kg) : ";
        cin >> gonderiler[i].agirlik;
        cout << "Hacim        : ";
        cin >> gonderiler[i].hacim;
        cout << "Garanti (e/h): ";
        cin >> gonderiler[i].garanti;
        cout << "Ücret (TL)   : ";
        cin >> gonderiler[i].ucret;

        // Kuryenin bilgileri
        cout << "\n[Kurye Bilgileri]\n";
        cout << "Adý Soyadý  : ";
        getline(cin >> ws, gonderiler[i].kurye.adi_soyadi);
        cout << "Telefon No  : ";
        getline(cin >> ws, gonderiler[i].kurye.telefon_no);

        cout << "---------------------------------------\n";
    }

    // Bilgileri listeleyelim
    cout << "\n=== 5 ADET GÖNDERÝNÝN LÝSTESÝ ===\n";
    for (int i = 0; i < 5; i++) {
        cout << "\n--- " << i+1 << ". Gönderi ---\n";
        cout << "[Gönderen]" << endl;
        cout << "Adý Soyadý  : " << gonderiler[i].gonderen.adi_soyadi << endl;
        cout << "Adres       : " << gonderiler[i].gonderen.adres << endl;
        cout << "Telefon No  : " << gonderiler[i].gonderen.telefon_no << endl;

        cout << "\n[Alýcý]" << endl;
        cout << "Adý Soyadý  : " << gonderiler[i].alici.adi_soyadi << endl;
        cout << "Adres       : " << gonderiler[i].alici.adres << endl;
        cout << "Telefon No  : " << gonderiler[i].alici.telefon_no << endl;

        cout << "\n[Gönderi Detaylarý]" << endl;
        cout << "Gönderi No  : " << gonderiler[i].gonderi_no << endl;
        cout << "Aðýrlýk (kg) : " << gonderiler[i].agirlik << endl;
        cout << "Hacim        : " << gonderiler[i].hacim << endl;
        cout << "Garanti (e/h): " << gonderiler[i].garanti << endl;
        cout << "Ücret (TL)   : " << gonderiler[i].ucret << endl;

        cout << "\n[Kurye]" << endl;
        cout << "Adý Soyadý  : " << gonderiler[i].kurye.adi_soyadi << endl;
        cout << "Telefon No  : " << gonderiler[i].kurye.telefon_no << endl;
    }

    return 0;
}

