#include <iostream>
#include <vector>

class Item {
    public:
        int id;
        int barcode;
        std::string nama;
        int harga_jual;
        int harga_beli;
        int stok;
};

class Sale {
    public:
        int id;
        int harga;
        int jumlah;
        int tanggal;
        int customer_id;

        
        
};

class Customer {
    public:
        int id;
        std::string nama;
        std::string alamat;
        std::string email;
        int telepon;

};


void create_item() {
    //
}

void read_item() {
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
    for (int i =0; i < 100; i++) {
        std::cout << "Hello world!" << i << std::endl;
    }
    return 0;
}
