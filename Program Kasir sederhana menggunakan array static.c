#include <stdio.h>
#include <stdlib.h> //perpustakaan bahasa ini berfungsi untuk dapat menjalankan fungsi exit(0)
//fungsi system("cls") digunakan untuk perintah ganti halaman baru/mengosongkan tampilan sebelumnya
//program mesin kasir //alur program : pilih barang, muncul tagihan, masukkan uang, bayar, kembalian
//penggunaan pointer pada program ini menggunakan metode pass by reference
//yaitu variabel pointer dideclare didalam scope fungsi buatan sendiri
//kemudian alamat variabel pada fungsi main dimasukkan ke dalam variabel pointer yang sesuai agar dapat diubah dan dibaca dliuar fungsi tersebut
void menu(int *pilihan1, int *tagihan) { //declare fungsi "menu" untuk memunculkan tampilan menu
    printf("\n\n\t\t\t      MENU\n");
    puts("===============================================================");
    printf("\t\t Tagihan Anda Adalah : Rp.%i,00\n", *tagihan); //printf ini digunakan untuk memunculkan banyaknya tagihan sehingga pengguna mengetahui banyaknya tagihannya
    puts("---------------------------------------------------------------");
    printf("Ket :");
    printf("\tPilih '1' Untuk Makanan\n");
    printf("\tPilih '2' Untuk Minuman\n");
    printf("\tPilih '3' Untuk Alat Tulis\n");
    printf("\tPilih '4' Untuk Pakaian\n");
    printf("\tPilih '5' Untuk Keluar\n"); //keterangan pilihan untuk membantu mengarahkan pengguna pada menu yang diinginkan
    puts("---------------------------------------------------------------");
    printf("Pilih Pada Menu : ");
    scanf("%i", &*pilihan1); //scanf untuk menginput pilihan ke variabel pointer "*pilihan1" menu serta menentukan perintah selanjutnya
}

void makanan(int *pilihan2, int *tagihan, char food[100][100], int harga_food [100]) { //declare fungsi "makanan" untuk memunculkan tampilan menu makanan
    system("cls");
    printf("\n\n\t\t\t  MENU MAKANAN\n");
    puts("===============================================================");
    printf("\t\t Tagihan Anda Adalah : Rp.%i,00\n", *tagihan); //printf ini digunakan untuk memunculkan banyaknya tagihan sehingga pengguna mengetahui banyaknya tagihannya
    puts("---------------------------------------------------------------");
    printf("Ket :");
    for(int a = 0; a < 8; a++) { //for loop untuk memunculkan menu penggunakan perulangan sebanyak 8 kali
        printf("\t%i. %s : Rp.%i,00\n", (a + 1), food[a], harga_food[a]); //printf ini digunakan untuk memunculkan nama barang dan harga barang sesuai dengan isi array yang di alamatkan
    }
    printf("\t.\n\t.\n\t.\n\t9. KEMBALI KE MENU UTAMA\n");
    puts("---------------------------------------------------------------");
    printf("Pilih Nomor Pada Menu : ");
    scanf("%i", &*pilihan2); //scanf untuk menginput pilihan ke variabel pointer "*pilihan2" menu serta menentukan perintah selanjutnya
    if(*pilihan2 > 9) { //if...else yang digunakan untuk menentukan kondisi serta perintah sesuai dengan inputan variabel pointer "*pilihan2"
        puts("\n---------------------------------------------------------------");
        printf("\t    Pilihan Anda Tidak Terdapat Pada Daftar\n\n"); //perintah ketika pengguna salah memilih menu
        printf("\n\t      Tekan 'enter' Untuk Kembali Ke Menu");
        getchar();
        getchar(); //hiasan agar program lebih interaktif
        makanan(&*pilihan2, &*tagihan, food, harga_food); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 < 1) {
        puts("\n---------------------------------------------------------------");
        printf("\t    Pilihan Anda Tidak Terdapat Pada Daftar\n\n"); //perintah ketika pengguna salah memilih menu
        printf("\n\t      Tekan 'enter' Untuk Kembali Ke Menu");
        getchar();
        getchar(); //hiasan agar program lebih interaktif
        makanan(&*pilihan2, &*tagihan, food, harga_food); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 1) {
        *tagihan += 8000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        makanan(&*pilihan2, &*tagihan, food, harga_food); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 2) {
        *tagihan += 11000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        makanan(&*pilihan2, &*tagihan, food, harga_food); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 3) {
        *tagihan += 12000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        makanan(&*pilihan2, &*tagihan, food, harga_food); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 4) {
        *tagihan += 13000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        makanan(&*pilihan2, &*tagihan, food, harga_food); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 5) {
        *tagihan += 12000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        makanan(&*pilihan2, &*tagihan, food, harga_food); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 6) {
        *tagihan += 10000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        makanan(&*pilihan2, &*tagihan, food, harga_food); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 7) {
        *tagihan += 10000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        makanan(&*pilihan2, &*tagihan, food, harga_food); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 8) {
        *tagihan += 9000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        makanan(&*pilihan2, &*tagihan, food, harga_food); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
}

void minuman(int *pilihan2, int *tagihan, char drink[100][100], int harga_drink[100]) { //declare fungsi "minuman" untuk memunculkan tampilan menu minuman
    system("cls");
    printf("\n\n\t\t\t  MENU MINUMAN\n");
    puts("===============================================================");
    printf("\t\t Tagihan Anda Adalah : Rp.%i,00\n", *tagihan); //printf ini digunakan untuk memunculkan banyaknya tagihan sehingga pengguna mengetahui banyaknya tagihannya
    puts("---------------------------------------------------------------");
    printf("Ket :");
    for(int a = 0; a < 8; a++) { //for loop untuk memunculkan menu penggunakan perulangan sebanyak 8 kali
        printf("\t%i. %s : Rp.%i,00\n", (a + 1), drink[a], harga_drink[a]); //printf ini digunakan untuk memunculkan nama barang dan harga barang sesuai dengan isi array yang di alamatkan
    }
    printf("\t.\n\t.\n\t.\n\t9. KEMBALI KE MENU UTAMA\n");
    puts("---------------------------------------------------------------");
    printf("Pilih Nomor Pada Menu : ");
    scanf("%i", &*pilihan2); //scanf untuk menginput pilihan ke variabel pointer "*pilihan2" menu serta menentukan perintah selanjutnya
    if(*pilihan2 > 9) { //if...else yang digunakan untuk menentukan kondisi serta perintah sesuai dengan inputan variabel pointer "*pilihan2"
        puts("\n---------------------------------------------------------------");
        printf("\t    Pilihan Anda Tidak Terdapat Pada Daftar\n\n"); //perintah ketika pengguna salah memilih menu
        printf("\n\t      Tekan 'enter' Untuk Kembali Ke Menu");
        getchar();
        getchar(); //hiasan agar program lebih interaktif
        minuman(&*pilihan2, &*tagihan, drink, harga_drink); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 < 1) {
        puts("\n---------------------------------------------------------------");
        printf("\t    Pilihan Anda Tidak Terdapat Pada Daftar\n\n"); //perintah ketika pengguna salah memilih menu
        printf("\n\t      Tekan 'enter' Untuk Kembali Ke Menu");
        getchar();
        getchar(); //hiasan agar program lebih interaktif
        minuman(&*pilihan2, &*tagihan, drink, harga_drink); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 1) {
        *tagihan += 3000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        minuman(&*pilihan2, &*tagihan, drink, harga_drink); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 2) {
        *tagihan += 4000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        minuman(&*pilihan2, &*tagihan, drink, harga_drink); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 3) {
        *tagihan += 5000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        minuman(&*pilihan2, &*tagihan, drink, harga_drink); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 4) {
        *tagihan += 7000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        minuman(&*pilihan2, &*tagihan, drink, harga_drink); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 5) {
        *tagihan += 6500; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        minuman(&*pilihan2, &*tagihan, drink, harga_drink); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 6) {
        *tagihan += 6000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        minuman(&*pilihan2, &*tagihan, drink, harga_drink); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 7) {
        *tagihan += 6000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        minuman(&*pilihan2, &*tagihan, drink, harga_drink); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 8) {
        *tagihan += 6000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        minuman(&*pilihan2, &*tagihan, drink, harga_drink); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
}

void alat_tulis(int *pilihan2, int *tagihan, char tulis[100][100], int harga_tulis[100]) { //declare fungsi "alat_tulis" untuk memunculkan tampilan menu alat tulis
    system("cls");
    printf("\n\n\t\t\t MENU ALAT TULIS\n");
    puts("===============================================================");
    printf("\t\t Tagihan Anda Adalah : Rp.%i,00\n", *tagihan); //printf ini digunakan untuk memunculkan banyaknya tagihan sehingga pengguna mengetahui banyaknya tagihannya
    puts("---------------------------------------------------------------");
    printf("Ket :");
    for(int a = 0; a < 7; a++) { //for loop untuk memunculkan menu penggunakan perulangan sebanyak 7 kali
        printf("\t%i. %s : Rp.%i,00\n", (a + 1), tulis[a], harga_tulis[a]); //printf ini digunakan untuk memunculkan nama barang dan harga barang sesuai dengan isi array yang di alamatkan
    }
    printf("\t.\n\t.\n\t.\n\t8. KEMBALI KE MENU UTAMA\n");
    puts("---------------------------------------------------------------");
    printf("Pilih Nomor Pada Menu : ");
    scanf("%i", &*pilihan2); //scanf untuk menginput pilihan ke variabel pointer "*pilihan2" menu serta menentukan perintah selanjutnya
    if(*pilihan2 > 8) { //if...else yang digunakan untuk menentukan kondisi serta perintah sesuai dengan inputan variabel pointer "*pilihan2"
        puts("\n---------------------------------------------------------------");
        printf("\t    Pilihan Anda Tidak Terdapat Pada Daftar\n\n"); //perintah ketika pengguna salah memilih menu
        printf("\n\t      Tekan 'enter' Untuk Kembali Ke Menu");
        getchar();
        getchar(); //hiasan agar program lebih interaktif
        alat_tulis(&*pilihan2, &*tagihan, tulis, harga_tulis); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 < 1) {
        puts("\n---------------------------------------------------------------");
        printf("\t    Pilihan Anda Tidak Terdapat Pada Daftar\n\n"); //perintah ketika pengguna salah memilih menu
        printf("\n\t      Tekan 'enter' Untuk Kembali Ke Menu");
        getchar();
        getchar(); //hiasan agar program lebih interaktif
        alat_tulis(&*pilihan2, &*tagihan, tulis, harga_tulis); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 1) {
        *tagihan += 1500; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        alat_tulis(&*pilihan2, &*tagihan, tulis, harga_tulis); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 2) {
        *tagihan += 3000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        alat_tulis(&*pilihan2, &*tagihan, tulis, harga_tulis); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 3) {
        *tagihan += 5000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        alat_tulis(&*pilihan2, &*tagihan, tulis, harga_tulis); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 4) {
        *tagihan += 5000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        alat_tulis(&*pilihan2, &*tagihan, tulis, harga_tulis); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 5) {
        *tagihan += 8000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        alat_tulis(&*pilihan2, &*tagihan, tulis, harga_tulis); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 6) {
        *tagihan += 1000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        alat_tulis(&*pilihan2, &*tagihan, tulis, harga_tulis); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 7) {
        *tagihan += 2000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        alat_tulis(&*pilihan2, &*tagihan, tulis, harga_tulis); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
}

void pakaian(int *pilihan2, int *tagihan, char pakaian_[100][100], int harga_pakaian[100]) { //declare fungsi "pakaian" untuk memunculkan tampilan menu pakaian
    system("cls");
    printf("\n\n\t\t\t  MENU PAKAIAN\n");
    puts("===============================================================");
    printf("\t\t Tagihan Anda Adalah : Rp.%i,00\n", *tagihan); //printf ini digunakan untuk memunculkan banyaknya tagihan sehingga pengguna mengetahui banyaknya tagihannya
    puts("---------------------------------------------------------------");
    printf("Ket :");
    for(int a = 0; a < 6; a++) { //for loop untuk memunculkan menu penggunakan perulangan sebanyak 6 kali
        printf("\t%i. %s : Rp.%i,00\n", (a + 1), pakaian_[a], harga_pakaian[a]); //printf ini digunakan untuk memunculkan nama barang dan harga barang sesuai dengan isi array yang di alamatkan
    }
    printf("\t.\n\t.\n\t.\n\t7. KEMBALI KE MENU UTAMA\n");
    puts("---------------------------------------------------------------");
    printf("Pilih Nomor Pada Menu : ");
    scanf("%i", &*pilihan2); //scanf untuk menginput pilihan ke variabel pointer "*pilihan2" menu serta menentukan perintah selanjutnya
    if(*pilihan2 > 7) { //if...else yang digunakan untuk menentukan kondisi serta perintah sesuai dengan inputan variabel pointer "*pilihan2"
        puts("\n---------------------------------------------------------------");
        printf("\t    Pilihan Anda Tidak Terdapat Pada Daftar\n\n"); //perintah ketika pengguna salah memilih menu
        printf("\n\t      Tekan 'enter' Untuk Kembali Ke Menu");
        getchar();
        getchar(); //hiasan agar program lebih interaktif
        pakaian(&*pilihan2, &*tagihan, pakaian_, harga_pakaian); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 < 1) {
        puts("\n---------------------------------------------------------------");
        printf("\t    Pilihan Anda Tidak Terdapat Pada Daftar\n\n"); //perintah ketika pengguna salah memilih menu
        printf("\n\t      Tekan 'enter' Untuk Kembali Ke Menu");
        getchar();
        getchar(); //hiasan agar program lebih interaktif
        pakaian(&*pilihan2, &*tagihan, pakaian_, harga_pakaian); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 1) {
        *tagihan += 90000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        pakaian(&*pilihan2, &*tagihan, pakaian_, harga_pakaian); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 2) {
        *tagihan += 35000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        pakaian(&*pilihan2, &*tagihan, pakaian_, harga_pakaian); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 3) {
        *tagihan += 30000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        pakaian(&*pilihan2, &*tagihan, pakaian_, harga_pakaian); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 4) {
        *tagihan += 150000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        pakaian(&*pilihan2, &*tagihan, pakaian_, harga_pakaian); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 5) {
        *tagihan += 100000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        pakaian(&*pilihan2, &*tagihan, pakaian_, harga_pakaian); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
    else if(*pilihan2 == 6) {
        *tagihan += 180000; //menambah nilai dari variabel pointer "tagihan" sebagai tagihan pengguna sesuai dengan harga pilihan barang pada menu
        pakaian(&*pilihan2, &*tagihan, pakaian_, harga_pakaian); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
    }
}

void bayar(int *tagihan, int *uang) { //declare fungsi "bayar" untuk memunculkan tampilan struk pembayaran
    printf("Saldo Awal Anda                  : Rp.%i,00\n", *uang); //menampilkan uang pengguna
    printf("Tagihan Anda                     : Rp.%i,00\n", *tagihan); //menampilkan tagihan pengguna
    *uang -= *tagihan; //mengurangkan nilai variabel pointer "*uang" dengan nilai variabel pointer "*tagihan" untuk mendapatkan jumlah uang kembalian
    puts("---------------------------------------------------------------");
    printf("Kembalian Anda                   : Rp.%i,00\n", *uang); //menampilkan uang kembalian pengguna
    puts("===============================================================");
    printf("\n\t\t  Tekan 'enter' Untuk Keluar");
    getchar();
    getchar();
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t Terima Kasih Telah Belanja Di Tempat Kami\n\n");
    printf("\t\tSemoga Hari Anda Menyenangkan\n\n\n\n\n\n");
}

void tagih(int *pilihan1, int *tagihan, int *uang) { //declare fungsi "tagih" untuk memunculkan tampilan menu pembayaran
    system("cls");
    *pilihan1 = 0; //untuk menjalankan while loop dibawah saat penginputan uang kedua tetap kurang dari dari tagihan
    puts("===============================================================");
    printf("Tagihan Anda                     : Rp.%i,00\n", *tagihan); //menampilkan tagihan pengguna
    printf("Masukkan Nominal Uang Anda       : Rp.");
    scanf("%i", &*uang); //scanf untuk menginput jumlah uang ke variabel pointer "*uang"
    puts("---------------------------------------------------------------");
    if(*uang < *tagihan) { //if...else yang digunakan untuk menentukan kondisi serta perintah sesuai dengan kondisi inputan variabel pointer "*uang" terhadap nilai dari variabel pointer "*tagihan"
        printf("\t\t   Maaf Uang Anda Tidak Cukup\n\n");
        while(*pilihan1 != 1) { //while loop untuk perulangan pengisian menu dibawah ketika pengguna memilih angka yang tidak sesuai dengan yang ada pada menu
            puts("---------------------------------------------------------------");
            printf("Ket :");
            printf("\tPilih '1' Untuk Beli\n");
            printf("\tPilih '2' Untuk Tidak Jadi Beli\n"); //keterangan pilihan untuk membantu menentukan perintah yang sesuai dengan yang pengguna inginkan
            puts("---------------------------------------------------------------");
            printf("Pilihan Anda : ");
            scanf("%i", &*pilihan1); //scanf untuk menginput jumlah uang ke dalam variabel pointer "*pilihan1"
            if(*pilihan1 == 1) { //if...else yang digunakan untuk menentukan kondisi serta perintah sesuai dengan inputan variabel pointer "*pilihan1"
                tagih(&*pilihan1, &*tagihan, &*uang); //rekursif atau pemanggilan fungsinya sendiri, digunakan untuk loop
            }
            else if(*pilihan1 == 2) {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("\tTerima Kasih Telah Berkunjung Di Tempat Kami\n\n");
                printf("\t\tSemoga Hari Anda Menyenangkan\n\n\n\n\n\n");
                exit(0); //exit digunakan untuk membuat program berhenti berjalan
            }
            else {
                puts("\n---------------------------------------------------------------");
                printf("\t    Pilihan Anda Tidak Terdapat Pada Daftar\n\n"); //perintah ketika pengguna salah memilih menu
            }
        }
    }
    else {
        bayar(&*tagihan, &*uang); //pemanggilan fungsi "bayar" untuk menampilkan struk
        exit(0); //exit digunakan untuk membuat program berhenti berjalan
    }
}

int main() { //fungsi main, yang akan dijalankan oleh program pertama kali
    int uang, pilihan1, pilihan2, tagihan = 0;
    char food[100][100] = {"Nasi Telur", "Nasi Ayam Goreng", "Nasi Ayam Bakar", "Nasi Ayam Geprek", "Nasi Opor Ayam", "Nasi Sop", "Nasi Sarden", "Indomie Telur"};
    char drink[100][100] = {"Aqua", "Teh Pucuk", "Teh Kotak", "Pulpy Orange", "Nutriboost", "Coca Cola", "Sprite", "Fanta"};
    char tulis[100][100] = {"Pensil", "Bolpoin", "Spidol", "Penggaris", "Type-X", "Penghapus", "Rautan"};
    char pakaian_[100][100] = {"Baju Berkerah", "Kaos Polo", "Kaos Biasa", "Celana Jeans", "Celana Kain", "Jaket"};
    int harga_food[100] = {8000, 11000, 12000, 13000, 12000, 10000, 10000, 9000};
    int harga_drink[100] = {3000, 4000, 5000, 7000, 6500, 6000, 6000, 6000};
    int harga_tulis[100] = {1500, 3000, 5000, 5000, 8000, 1000, 2000};
    int harga_pakaian[100] = {90000, 35000, 30000, 150000, 100000, 180000};
    //diatas merupakan declare variabel biasa dan variabel array beserta isinya
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"); //untuk memberi jarak
    printf("\t     Selamat Datang Di Toko Serba Ada UNS\n");
    puts("---------------------------------------------------------------");
    printf("\n\t\t  Tekan 'enter' Untuk Lanjut");
    getchar(); //hiasan agar program lebih interaktif
    while(pilihan1 != 5) { //while loop untuk perulangan ketika pengguna salah dalam memilih angka pada menu
        system("cls");
        menu(&pilihan1, &tagihan); //
        if(pilihan1 == 1) { //if...else yang digunakan untuk menentukan kondisi serta perintah sesuai dengan inputan variabel "pilihan1"
            makanan(&pilihan2, &tagihan, food, harga_food); //pemanggilan fungsi "makanan" untuk memunculkan menu makanan
        }
        else if(pilihan1 == 2) {
            minuman(&pilihan2, &tagihan, drink, harga_drink); //pemanggilan fungsi "minuman" untuk memunculkan menu minuman
        }
        else if(pilihan1 == 3) {
            alat_tulis(&pilihan2, &tagihan, tulis, harga_tulis); //pemanggilan fungsi "alat_tulis" untuk memunculkan menu alat tulis
        }
        else if(pilihan1 == 4) {
            pakaian(&pilihan2, &tagihan, pakaian_, harga_pakaian); //pemanggilan fungsi "pakaian" untuk memunculkan menu pakaian
        }
        else if(pilihan1 > 5) {
            puts("\n---------------------------------------------------------------");
            printf("\t    Pilihan Anda Tidak Terdapat Pada Daftar\n\n"); //perintah ketika pengguna salah memilih menu
            printf("\n\t      Tekan 'enter' Untuk Kembali Ke Menu");
            getchar();
            getchar(); //hiasan agar program lebih interaktif
        }
        else if(pilihan1 < 1) {
            puts("\n---------------------------------------------------------------");
            printf("\t    Pilihan Anda Tidak Terdapat Pada Daftar\n\n"); //perintah ketika pengguna salah memilih menu
            printf("\n\t      Tekan 'enter' Untuk Kembali Ke Menu");
            getchar();
            getchar(); //hiasan agar program lebih interaktif
        }
    }
    tagih(&pilihan1, &tagihan, &uang); //pemanggilan fungsi "tagih" untuk memunculkan menu pembayaran
    
    return 0;
}
