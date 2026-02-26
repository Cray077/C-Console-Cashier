#include <iostream>
#include <vector>

// --------------- Class Declarations ----------

class Customer {
    public:
        int id;
        std::string nama;
        std::string alamat;
        std::string email;
        int telepon;

};

class Item {
    public:
        int id;
        int barcode;
        std::string nama;
        std::string group;
        std::string vendor;
        int harga_jual;
        int harga_beli;
        int stok;

    int print_item() {
        std::cout << "ID : " << id << "\n";
        std::cout << "BARCODE : " << barcode << "\n";
        std::cout << "NAMA : " << nama << "\n";
        std::cout << "GROUP : " << group << "\n";
        std::cout << "VENDOR : " << vendor << "\n";
        std::cout << "HARGA_JUAL : " << harga_jual << "\n";
        std::cout << "HARGA_BELI : " << harga_beli << "\n";
        std::cout << "STOK : " << stok << "\n";
        return 0;

    }
};

class Sale {
    public:
        int id;
        std::vector<Item> detail_barang;
        int total;
        int tanggal;
        int customer_id;

};

class ServiceItem {
    public:
        int id;
        int ticket_id;
        std::string nama_barang;
        std::string kelengkapan;
        std::string kerusakan;
        int tanggal_masuk;
        int tanggal_keluar;

};

class ServiceTicket {
    public:
        int id;
        int customer_id;
        std::vector<Item> detail_barang;
        int tanggal;
};


// ----------------- Variables ------------
std::vector<Item> daftar_barang;


void create_item() {
    Item barang;

    std::cout << "ID : ";
    std::cin >> barang.id;
    std::cout << "\n";
    std::cout << "Barcode : ";
    std::cin >> barang.barcode;
    std::cout << "\n";
    std::cout << "Nama : ";
    std::cin >> barang.nama;
    std::cout << "\n";
    std::cout << "Group : ";
    std::cin >> barang.group;
    std::cout << "\n";
    std::cout << "Vendor : ";
    std::cin >> barang.vendor;
    std::cout << "\n";
    std::cout << "Beli : ";
    std::cin >> barang.harga_beli;
    std::cout << "\n";
    std::cout << "Jual : ";
    std::cin >> barang.harga_jual;
    std::cout << "\n";
    std::cout << "Stok : ";
    std::cin >> barang.stok;
    std::cout << "\n";

    daftar_barang.push_back(barang);
    //
}

void read_item() {
    for (Item barang : daftar_barang) {
        barang.print_item();
    }
    //
}

void update_item() {
    //
}

void delete_item() {
    //
}


int main()
{
    std::cout << "RUNNED";
    create_item();
    read_item();
    return 0;
}
