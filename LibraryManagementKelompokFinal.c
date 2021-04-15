#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <windows.h>

//Set isi stuct datalib
typedef struct datalib{
    char nama[300], buku[300];
    int tahun;
    struct datalib *next;
}datalib;

//Set isi struct datapinjam
typedef struct datapinjam{
    char nama_mhs[300], buku_dipinjam[300];
    int nim;
    struct datapinjam *next;
}datapinjam;

//Interface menu login
void login_header(){
//    printf("_________________________________________________________\n||-------------------------------------------------------||\n");
//    printf("||.--.    .-._                        .----.             ||\n|||==|____| |H|___            .---.___|\"\"\"\"|_____.--.___ ||\n");
//    printf("|||  |====| | |xxx|_          |+++|=-=|_  _|-=+=-|==|---|||\n|||==|    | | |   | \\         |   |   |_\\/_|Black|  | ^ |||\n");
//    printf("|||  |    | | |   |\\ \\   .--. |   |=-=|_/\\_|-=+=-|  | ^ |||\n|||  |    | | |   |_\\ \\_( oo )|   |   |    |Magus|  | ^ |||\n");
//    printf("|||==|====| |H|xxx|  \\ \\ |''| |+++|=-=|\"\"\"\"|-=+=-|==|---|||\n||`--^----'-^-^---'   `-' \"\"  '---^---^----^-----^--^---^||\n");
//    printf("||-------------------------------------------------------||\n");
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\xBA                ___                   .\xC4.__.\xC4\xC4\xC4\xC4\xC4. .\xC4\xC4\xC4. \xBA\n\xBA               \xB3===\xB3 .\xC4\xC4\xC4.   __   .\xC4\xC4\xC4\xB3 \xB3XX\xB3<(*)>\xB3_\xB3^^^\xB3 \xBA\n");
    printf("\xBA          ,  /(\xB3   \xB3_\xB3III\xB3__\xB3''\xB3__\xB3:x:\xB3=\xB3  \xB3     \xB3=\xB3 Q \xB3 \xBA\n\xBA       _a'{ / (\xB3===\xB3+\xB3   \xB3++\xB3  \xB3==\xB3   \xB3 \xB3  \xB3Illum\xB3 \xB3 R \xB3 \xBA\n");
    printf("\xBA       '/\\\\/ _(\xB3===\xB3\xC4\xB3   \xB3  \xB3''\xB3  \xB3:x:\xB3=\xB3  \xB3inati\xB3 \xB3 Y \xB3 \xBA\n\xBA _____  \xC4\\{___(\xB3   \xB3\xC4\xB3   \xB3  \xB3  \xB3  \xB3   \xB3 \xB3  \xB3     \xB3 \xB3 Z \xB3 \xBA\n");
    printf("\xBA        _(____)\xB3===\xB3+\xB3[I]\xB3 K\xB3''\xB3==\xB3:x:\xB3=\xB3XX\xB3<(*)>\xB3=\xB3^^^\xB3 \xBA\n\xBA              `\xC4\xC4\xC4^\xC4^\xC4\xC4\xC4^\xC4\xC4^\xC4\xC4'\xC4\xC4^\xC4\xC4\xC4^\xC4^\xC4\xC4^\xC4\xC4\xC4\xC4\xC4^\xC4^\xC4\xC4\xC4^  \xBA\n");
    printf("\xBA \xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4 \xBA\n\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
    printf("\n");
    printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("Login Menu");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\t\xDB\xDB 1. Guest\n");
    printf("\t\xDB\xDB 2. Admin\n");
    printf("\t\xDB\xDB 0. Exit\n");
    printf("\t\xF0 Pilihan: ");
}

//Interface daftar menu guest
void header_guest(){
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\xBA             Daftar Menu              \xBA\n");
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
    printf("\xB0\xB0 Logged as Guest\n");
    printf("\xDB\xB1 1. Melakukan peminjaman buku\n");
    printf("\xDB\xB1 2. Mengembalikan peminjaman buku\n");
    printf("\xDB\xB1 3. Melihat Data Buku\n");
    printf("\xDB\xB1 0. Kembali ke Login Menu\n");
    printf("\xAF Pilihan: ");
}

//Interface daftar menu admin
void header_admin(){
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\xBA             Daftar Menu              \xBA\n");
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
    printf("\xB0\xB0 Logged as Admin\n");
    printf("\xDB\xB1 1. Memasukkan data buku\n");
    printf("\xDB\xB1 2. Melihat Data Buku\n");
    printf("\xDB\xB1 3. Menghapus Data Buku\n");
    printf("\xDB\xB1 4. Sorting Data\n");
    printf("\xDB\xB1 5. Mencari Data\n");
    printf("\xDB\xB1 0. Kembali ke Login Menu\n");
    printf("\xAF Pilihan: ");
}

//Interface daftar pengeluaran semua data
void header_penampilan(){
    printf("\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n");
    printf("                                        Daftar Semua Data\n");
    printf("\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n");
    //printf("\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\n");
    printf("\xDD No  \xDD %-25s \xDD %-40s \xDD %-6s \xDE\n", "Nama Penulis","Nama Buku","Tahun");
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
}

//Interface menu sort data
void header_sort(){
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\xBA              Sort Menu               \xBA\n");
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
    printf("\xDB\xB1 1. Bubble Sort\n");
    printf("\xDB\xB1 2. Insertion Sort\n");
    printf("Pilihan: ");
}

//mengambil hashing huruf dari suatu data
int getval(char kalimat){
    //Dilakukan jika huruf besar
    if(kalimat >= 'A' && kalimat <= 'Z')return kalimat-'A';
    //Dilakukan jika huruf kecil
    else if (kalimat >= 'a' && kalimat <= 'z')return kalimat-'a';
    //Dilakukan jika bukan huruf
    else return 28;
}

//Memasukkan data ke hash table library
void inserttochain(char *nama, char *buku, int tahun, datalib **head){
    datalib *ptr=*head;
    //Mengeset node agar dapat dimasukkan data sesuai struct datalib
    datalib *node = (datalib*)malloc(sizeof(datalib));
    //Copy semua data ke node baru
    strcpy(node->nama,nama);
    strcpy(node->buku,buku);
    node->tahun=tahun;
    node->next=NULL;
    //Dilakukan jika belum ada data pada hash table
    if(*head==NULL)
        *head=node;
    //Dilakukan jika sudah ada data pada hash table
    else
    {
         while(ptr->next!=NULL)
            ptr=ptr->next;
        ptr->next=node;
    }
}

//Memasukkan data ke hash table peminjam
void inserttochainguest(char *nama_mhs, int nim, char *buku_dipinjam, datapinjam **head){
    datapinjam *ptr=*head;
    //Mengeset node agar dapat dimasukkan data sesuai struct pinjam
    datapinjam *node = (datapinjam*)malloc(sizeof(datapinjam));
    //Copy semua data ke node baru
    strcpy(node->nama_mhs,nama_mhs);
    strcpy(node->buku_dipinjam,buku_dipinjam);
    node->nim=nim;
    node->next=NULL;
    //Dilakukan jika belum ada data pada hash table
    if(*head==NULL)
        *head=node;
    //Dilakukan jika sudah ada data pada hash table
    else
    {
         while(ptr->next!=NULL)
            ptr=ptr->next;
        ptr->next=node;
    }
}

//Menu data buku baru ke library
void newdb(datalib *head[30][30][30], FILE *fp, int *checking){
    bool sama=false;
    int x, y, z, i, j, k, tahun;
    datalib *curr;
    char nama[300], buku[300];
    //Menu pemasukkan buku
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\xBA      Melakukan Pemasukkan Buku       \xBA\n");
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
    //Mengambil nama penulis
    fflush(stdin);
    printf("\xAF\xAF Masukkan nama penulis: ");
    gets(nama);
    //Mengambil nama buku
    fflush(stdin);
    printf("\xAF\xAF Masukkan nama buku yang ingin dimasukkan: ");
    gets(buku);
    x=getval(buku[0]);
    if(strlen(buku) > 1)y=getval(buku[1]);
    else y = 28;
    if(strlen(buku) > 2)z=getval(buku[2]);
    else z = 28;
    //Melakukan pengecekan terhadap nama buku
    if(head[x][y][z]!=NULL){
        curr=head[x][y][z];
        i=1;
        while(curr!=NULL){
            if (strcmpi(curr->buku,buku)==0){
                //Menempatkan bool sama menjadi true sewaktu nama buku sudah ada di library
                sama=true;
                break;
            }
            curr=curr->next;
        }
    }
    if(sama)printf("\xB0\xB0\xB0 Buku sudah ada! \xB0\xB0\xB0\n");
    else{
        //Meminta tahun buku diterbitkan
        fflush(stdin);
        printf("\xAF\xAF Tahun: ");
        scanf("%d",&tahun);
        inserttochain(nama, buku, tahun, &head[x][y][z]);
        fprintf(fp,"\n%s#%s#%d",nama,buku,tahun);
        fflush(stdin);
        fclose(fp);
        *checking=0;
        printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
        printf("\xBA  Informasi Buku Berhasil Disimpan!   \xBA\n");
        printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");

    }


    char option;
    //Pilihan ingin Memasukkan buku lagi atau tidak
    printf("\n\xDB\xB0 Memasukkan buku lain? (Y/N) ");
    fflush(stdin);
    //Mengambil pilihan yang diberikan
    scanf("%c", &option);
    //Balik ke menu peminjaman jika pilihan yang diberikan antara y/Y
    if(option == 'Y' || option == 'y'){
        system("cls");
        newdb(head, fp, checking);
    }
    //Keluar jika bukan y/Y
    else{
        printf("Press any key to continue...\n");
        fflush(stdin);
        getchar();
        system("cls");
    }
}

//Melihat semua isi data pada database library
void viewall(datalib *head[30][30][30]){
    //Menampilkan header penampilan
    header_penampilan();
    datalib *curr;
    int nomor_data=1, i, j, k;
    for(i=0;i<30;i++){
        for(j=0;j<30;j++){
            for(k=0;k<30;k++){
                curr=head[i][j][k];
                //Melakukan pengecekan terhadap isi hashing table
                if(curr==NULL)
                    continue;
                //Mengeluarkan semua data dari hash table
                while(curr!=NULL){
                    printf("\xBA %03d \xBA %-25s \xBA %-40s \xBA %-6d \xBA\n",nomor_data++,curr->nama,curr->buku,curr->tahun);
                    curr=curr->next;
                }
            }
        }
    }
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
    printf("Press any key to continue. . . ");
    fflush(stdin);
    getch();
    system("cls");
}

//Melihat semua isi data pada database peminjaman
void viewall_guest(datapinjam *head[30][30][30]){
    system("cls");
    //Menampilkan menu peminjaman
    printf("\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n");
    printf("                                  Daftar Peminjaman\n");
    printf("\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n");
    printf("\xDD No  \xDD %-25s \xDD %-16s \xDD %-30s \xDD\n", "Nama Peminjam","NIM","Nama Buku");
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");

    datapinjam *curr;
    int n=1, i, j, k;int f=1;
    for(i=0;i<30;i++){
        for(j=0;j<30;j++){
            for(k=0;k<30;k++){
                //Melakukan pengecekan terhadap isi hashing table
                if(head[i][j][k] != NULL){
                    curr=head[i][j][k];
                    //Mengeluarkan semua data dari hash table
                    while(curr!=NULL){
                        printf("\xBA %03d \xBA %-25s \xBA %-16d \xBA %-30s \xBA\n",n++,curr->nama_mhs, curr->nim, curr->buku_dipinjam);
                        curr=curr->next;
                    }
                }
            }
        }
    }
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");

}

//Mendelete data dari database library
void deletedb(datalib *head[30][30][30], FILE *fp){
    int checker=0, i, j, k, x, y, z;
    char nama[300], buku[300];
    datalib *curr, *ptr;
    //FILE *fp2;

    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\xBA         Menghapus data buku          \xBA\n");
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
    fflush(stdin);
    printf("\xAF\xAF Masukkan nama penulis: ");
    gets(nama);
    printf("\xAF\xAF Masukkan nama buku yang anda ingin hapus: ");
    gets(buku);
    //mendapatkan hash
    x=getval(buku[0]);
    y=getval(buku[1]);
    z=getval(buku[2]);
    curr=head[x][y][z];
    if(curr!=NULL){
        //Melakukan pengecekan kalau hanya ada satu data pada hash table tersebut
        if(curr->next==NULL){
            if(strcmpi(curr->nama,nama)==0 && strcmpi(curr->buku,buku)==0){
                free(curr);
                head[x][y][z]=NULL;
                printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
                printf("\xBA   \xAF\xAF\xAFPenghapusan Data Berhasil!\xAE\xAE\xAE   \xBA\n");
                printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");

            }
            else printf("\xB0\xB0\xB0 Nama atau nama buku yang anda masukkan tidak terdapat dalam database! \xB0\xB0\xB0\n");
        }
        else{//Melakukan pengecakan kalau ada lebih dari satu data di hash table
            //Melihat apakah data terdapat pada hash table
            while(1){
                if(strcmpi(curr->nama,nama)==0 && strcmpi(curr->buku,buku)==0)break;
                ptr=curr;
                curr=curr->next;
                if(curr==NULL){
                    checker=1;
                    break;
                }
            }
            //apakah sudah menghapus atau tidak
            bool del = 0;
            //Menghapus data kalau data berada di pertama di hash table
            if(curr==head[x][y][z]){
                head[x][y][z]=curr->next;
                free(curr);
                del = 1;
            }
            //Menghapus data kalau tidak di pertama
            else if(checker==0){
                ptr->next=curr->next;
                free(curr);
                del = 1;
            }
            else{
                printf("\xB0\xB0\xB0 Nama atau nama buku yang anda masukkan tidak terdapat dalam database! \xB0\xB0\xB0\n");
            }
            if(del == 1){
                printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
                printf("\xBA   \xAF\xAF\xAFPenghapusan Data Berhasil!\xAE\xAE\xAE   \xBA\n");
                printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
            }
        }
        //rewrite database.txt
        fp = fopen("database.txt","w");
        for(i = 0; i < 30; i++)for(j = 0; j < 30; j++)for(k = 0; k < 30; k++)
            if(head[i][j][k] != NULL){
                ptr = head[i][j][k];
                while(ptr != NULL){
                    fprintf(fp,"%s#%s#%d\n",ptr->nama,ptr->buku,ptr->tahun);
                    ptr = ptr->next;
                }
            }
        fclose(fp);
    }
    else printf("\xB0\xB0\xB0 Nama atau nama buku yang anda masukkan tidak terdapat dalam database! \xB0\xB0\xB0\n");

    char option;
    //Pilihan ingin Hapus buku lagi atau tidak
    printf("\n\xDB\xB0 Hapus buku lain? (Y/N) ");
    fflush(stdin);
    //Mengambil pilihan yang diberikan
    scanf("%c", &option);
    //Balik ke menu peminjaman jika pilihan yang diberikan antara y/Y
    if(option == 'Y' || option == 'y'){
        system("cls");
        deletedb(head, fp);
    }
    //Keluar jika bukan y/Y
    else{
        printf("Press any key to continue...\n");
        fflush(stdin);
        getchar();
        system("cls");
    }
}

//Menduplikat datalib y ke x
void copydb(datalib *x, datalib *y){
    strcpy(x->buku, y->buku);
    strcpy(x->nama, y->nama);
    x->tahun = y->tahun;
}

//Menukar isi datalib x dan y
void swapdb(datalib *x, datalib *y){
    char buku[300], nama[300];
    int tahun;

    //swap nama buku
    strcpy(buku, y->buku);
    strcpy(y->buku, x->buku);
    strcpy(x->buku, buku);

    //swap nama penulis
    strcpy(nama, y->nama);
    strcpy(y->nama, x->nama);
    strcpy(x->nama, nama);

    //swap tahun
    tahun = y->tahun;
    y->tahun = x->tahun;
    x->tahun = tahun;
}

//Mengurutkan database
void sortdb(datalib *head[30][30][30], FILE *fp){
    int i, j, k, count, n, x, y, z;
    datalib *curr, *temp;
    datalib xlib[50], key;//array sementara untuk sorting
    header_sort();

    while(1){
        scanf("%d", &n);
        //invalid input handler
        if(n != 1 && n != 2)printf("\xB2\xB2\xB2Invalid input!\xB2\xB2\xB2\n");
        else break;
    }
    for(x=0;x<30;x++){
        for(y=0;y<30;y++){
            for(z=0;z<30;z++){
                if(head[x][y][z] != NULL){//jika ada data pada hash
                    count = 0;
                    temp = head[x][y][z];
                    while(temp != NULL){//Memindahkan data ke array sementara, lalu menghapus linked list
                        copydb(&xlib[count++], temp);
                        curr = temp;
                        temp = temp->next;
                        free(curr);
                    }
                    head[x][y][z] = NULL;

                    if(n == 1){//Bubble Sort array sementara berdasarkan nama buku
                        for(i = 0; i < count-1; i++){
                            for(j = 0; j < count-1-i; j++){
                                if(strcmpi(xlib[j].buku, xlib[j+1].buku) > 0)swapdb(&xlib[j], &xlib[j+1]);
                            }
                        }
                    }
                    else{//Insertion Sort array sementara berdasarkan nama buku
                        for(i = 1; i < count; i++){
                            strcpy(key.buku, xlib[i].buku);
                            strcpy(key.nama, xlib[i].nama);
                            key.tahun = xlib[i].tahun;

                            j = i-1;
                            while(j >= 0 && strcmpi(xlib[j].buku, key.buku) > 0){
                                copydb(&xlib[j+1], &xlib[j]);
                                j--;
                            }

                            //penempatan data sesuai urutan
                            strcpy(xlib[j+1].buku, key.buku);
                            strcpy(xlib[j+1].nama, key.nama);
                            xlib[j+1].tahun = key.tahun;
                        }
                    }
                    for(i = 0; i < count; i++){//Memasukkan kembali data di array ke semua head berdasarkan hash
                        inserttochain(xlib[i].nama, xlib[i].buku, xlib[i].tahun, &head[x][y][z]);
                    }
                }
            }
        }
    }
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\xBASorting berdasarkan judul buku sukses!\xBA\n");
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");

    fflush(stdin);
    getchar();
    system("cls");
    return;
}

//Melakukan mencari data buku pada library
void searchdb(datalib *head[30][30][30]){
    int x, y, z, i, j, k;
    char buku[300];
    datalib *curr, *ptr;
    //Mengeluarkan menu mencari buku
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\xBA              Cari Data               \xBA\n");
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
    printf("\xDB\xB0Masukkan nama buku yang ingin dicari: ");
    fflush(stdin);
    gets(buku);

    //Mengambil 3 huruf pertama dari nama buku
    x=getval(buku[0]);
    if(strlen(buku) > 1)y=getval(buku[1]);
    else y = 28;
    if(strlen(buku) > 2)z=getval(buku[2]);
    else z = 28;

    //Mengeset dan mengecek hash table berdasarkan 3 huruf pertama dari nama buku
    if(head[x][y][z]!=NULL){
        curr=head[x][y][z];
        i=1;
        //Dilakukan selagi masih ada data dalam hash table
        while(curr!=NULL){
            //Mengecek nama buku
            if(strcmpi(curr->buku,buku)==0){
                //Print jika nama buku sama dengan di database library
                printf("\xAF\xAF Buku ditemukan!\n");
                printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
                printf("\xDB\xB0\xB0Nama       : %-30s\xDB\n",curr->nama);
                printf("\xDB\xB0\xB0Nama buku  : %-30s\xDB\n",curr->buku);
                printf("\xDB\xB0\xB0Tahun      : %-30d\xDB\n",curr->tahun);
                printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
                break;
            }
            //Kalau data selanjutnya tidak ada isinya, mengeluarkan "tidak ada buku tersebut!"
            if(curr->next==NULL) printf("\xB0\xB0\xB0 Tidak ada buku tersebut! \xB0\xB0\xB0\n");
            //Memajukan data
            curr=curr->next;
        }
    }
    //Mengeluarkan output ini jika hash table kosong
    else printf("\xB0\xB0\xB0 Tidak ada buku tersebut! \xB0\xB0\xB0\n");

    char option;
    //Pilihan ingin cari buku lagi atau tidak
    printf("\n\xDB\xB0 Cari buku lain? (Y/N) ");
    fflush(stdin);
    //Mengambil pilihan yang diberikan
    scanf("%c", &option);
    //Balik ke menu peminjaman jika pilihan yang diberikan antara y/Y
    if(option == 'Y' || option == 'y'){
        system("cls");
        searchdb(head);
    }
    //Keluar jika bukan y/Y
    else{
        printf("Press any key to continue...\n");
        fflush(stdin);
        getchar();
        system("cls");
    }
}

//Melakukan peminjaman buku
void borrowdb(datalib *head[30][30][30], datapinjam *head_pinjam[30][30][30], datapinjam *head_buku[30][30][30], FILE *fguest){
    int nim, check_guest, x, y, z, i, j, k;
    bool exist = 0;
    char nama_mhs[300], buku_dipinjam[300], pilihan;
    datapinjam *ptr;
    datalib *curr;

    //Menu peminjaman
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\xBA       Melakukan peminjaman buku      \xBA\n");
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");

    fflush(stdin);
    //Pengambilan nama
    printf("\xAF\xAF Masukkan Nama Anda: "); gets(nama_mhs);
    fflush(stdin);
    //Pengambilan NIM Mahasiswa
    printf("\xAF\xAF Masukkan NIM Anda: "); scanf("%d",&nim);
    fflush(stdin);
    //pengambilan nama buku
    printf("\xAF\xAF Nama Lengkap Buku yang ingin dipinjam: "); gets(buku_dipinjam);

    //Mengambil 3 huruf pertama dari nama buku yang ingin dipinjam
    x=getval(buku_dipinjam[0]);
    if(strlen(buku_dipinjam) > 1)y=getval(buku_dipinjam[1]);
    else y = 28;
    if(strlen(buku_dipinjam) > 2)z=getval(buku_dipinjam[2]);
    else z = 28;
    //Mengeset curr dengan hash buku pada database library dan ptr dengan hash pada database peminjaman buku sesuai dengan 3 huruf pertama dari nama buku yang ingin dipinjam
    curr= head[x][y][z];
    ptr = head_buku[x][y][z];
    //Melakukan pengecekan terhadap nama buku
    //Melakukan pengecekan apakah buku tersebut ada dalam data library
    if(curr!=NULL){
        while(curr!=NULL){
            //Membandingkan nama buku yang ingin dipinjam dengan nama buku di library
            //Untuk melihat apakah buku tersebut ada dalam library
            if(strcmpi(curr->buku,buku_dipinjam)==0){
                exist = 1;
                strcpy(buku_dipinjam, curr->buku);

                //Memasukkan data ke hash table dan database jika isi hash dari nama buku tidak ada
                if(ptr==NULL){
                    fflush(stdin);
                    inserttochainguest(nama_mhs, nim, buku_dipinjam, &head_buku[x][y][z]);
                    x=getval(nama_mhs[0]);
                    if(strlen(nama_mhs) > 1)y=getval(nama_mhs[1]);
                    else y = 28;
                    if(strlen(nama_mhs) > 2)z=getval(nama_mhs[2]);
                    else z = 28;
                    inserttochainguest(nama_mhs, nim, buku_dipinjam, &head_pinjam[x][y][z]);
                    fprintf(fguest,"%s#%d#%s\n",nama_mhs,nim,buku_dipinjam);
                    fflush(stdin);
                    fclose(fguest);
                    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
                    printf("\xBA        Buku berhasil dipinjam!       \xBA\n");
                    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");

                    //c=0;
                    break;
                }
                else
                    //Melakukan pengecekan terhadap nama buku yang ingin dipinjam
                    //jika sudah terdapat data dalam hash table tersebut
                    while(ptr!=NULL){
                        //Mengeluarkan output jika nama buku yang ingin dipinjam
                        //sudah dipinjam oleh orang lain
                        if (strcmpi(ptr->buku_dipinjam,buku_dipinjam)==0){
                            printf("\xB0\xB0\xB0 Buku sudah dipinjam! \xB0\xB0\xB0\n");
                            break;
                        }
                        //Memajukan ptr
                        ptr=ptr->next;
                        //Dilakukan jika tidak ada data lagi pada ptr
                        if(ptr==NULL){
                            //Memasukkan data ke hash table buku dan nama
                            fflush(stdin);
                            inserttochainguest(nama_mhs, nim, buku_dipinjam, &head_buku[x][y][z]);
                            x=getval(nama_mhs[0]);
                            if(strlen(nama_mhs) > 1)y=getval(nama_mhs[1]);
                            else y = 28;
                            if(strlen(nama_mhs) > 2)z=getval(nama_mhs[2]);
                            else z = 28;
                            inserttochainguest(nama_mhs, nim, buku_dipinjam, &head_pinjam[x][y][z]);
                            fprintf(fguest,"%s#%d#%s\n",nama_mhs,nim,buku_dipinjam);
                            fflush(stdin);
                            fclose(fguest);
                            printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
                            printf("\xBA        Buku berhasil dipinjam!       \xBA\n");
                            printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");

                            //c=0;
                            break;
                        }
                }
                break;
            }
            //Memajukan curr jika data tidak sama
            curr=curr->next;
        }
    }
    //Mengeluarkan output tersebut jika tidak ada buku tersebut di database library
    if(!exist) printf("\xB0\xB0\xB0 Tidak ada buku tersebut di library! \xB0\xB0\xB0\n");

    char option;
    //Pilihan ingin pinjam buku lagi atau tidak
    printf("\n\xDB\xB0 Pinjam buku lain? (Y/N) ");
    fflush(stdin);
    //Mengambil pilihan yang diberikan
    scanf("%c", &option);
    //Balik ke menu peminjaman jika pilihan yang diberikan antara y/Y
    if(option == 'Y' || option == 'y'){
        system("cls");
        borrowdb(head, head_pinjam, head_buku, fguest);
    }
    //Keluar jika bukan y/Y
    else{
        printf("Press any key to continue...\n");
        fflush(stdin);
        getchar();
        system("cls");
    }

}

//Mengembalikan peminjaman buku
void returndb(datapinjam *head_pinjam[30][30][30], datapinjam *head_buku[30][30][30], FILE *fguest){
    int x, y, z, i, j, k, nim, n;
    bool exist = 0, back = 0;
    char nama_mhs[300], buku_dipinjam[300], pilihan;
    datapinjam *ptr, *temp;

    //Mengeluarkan menu peminjaman buku
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\xBA     Pengembalian peminjaman buku     \xBA\n");
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");

    printf("\xDB\xB1 1. Tampilkan data pinjaman berdasarkan nama mahasiswa\n");
    printf("\xDB\xB1 2. Tampilkan data pinjaman berdasarkan buku\n");
    printf("\xDB\xB1 3. Mengembalikan buku\n");
    printf("\xDB\xB1 0. Kembali\n");
    printf("\xF0 Pilihan: ");
    scanf("%d", &n);

    //Menampilkan pinjaman data berdasarkan nama mahasiswa
    if(n == 1)viewall_guest(head_pinjam);
    //Menampilkan pinjaman data berdasarkan nama buku yang dipinjam
    else if(n == 2)viewall_guest(head_buku);
    //Melakukan penghapusan data
    else if(n == 3){
        //Mengambil nama mahasiswa
        fflush(stdin);
        printf("\xAF\xAF Masukkan Nama: "); gets(nama_mhs);
        //Mengambil NIM Mahasiswa
        fflush(stdin);
        printf("\xAF\xAF Masukkan NIM: "); scanf("%d",&nim);
        //Mengambil nama buku yang ingin dipinjam
        fflush(stdin);
        printf("\xAF\xAF Nama Buku yang telah dipinjam: "); gets(buku_dipinjam);

        //Mengambil 3 huruf pertama dari nama buku yang dipinjam
        x=getval(buku_dipinjam[0]);
        if(strlen(buku_dipinjam) > 1)y=getval(buku_dipinjam[1]);
        else y = 28;
        if(strlen(buku_dipinjam) > 2)z=getval(buku_dipinjam[2]);
        else z = 28;
        //Set ptr dengan hash table sesuai dengan 3 huruf pertama dari buku yang dipinjam
        ptr = head_buku[x][y][z];
        //Mengeset exist jadi 0 jika ptr NULL, data sudah pasti tidak ada
        if(ptr == NULL)exist = 0;
        else{
            //Membandingkan nama buku , nama mahasiswa, dan NIM dengan data di database
            if(strcmpi(ptr->buku_dipinjam, buku_dipinjam) == 0 && strcmpi(ptr->nama_mhs, nama_mhs) == 0 && ptr->nim == nim){//check head
                //Menghapus data di hash table jika data tersebut ada
                exist = 1;
                if(ptr->next == NULL) head_buku[x][y][z] = NULL;
                else head_buku[x][y][z] = ptr->next;
                free(ptr);
            }
            //Dilakukan sampai ptr tidak ada data lagi
            else while(ptr->next != NULL){
                //Membandingkan nama buku , nama mahasiswa, dan NIM dengan data di database
                if(strcmpi(ptr->next->buku_dipinjam, buku_dipinjam) == 0 && strcmpi(ptr->next->nama_mhs, nama_mhs) == 0  && ptr->next->nim == nim ){//check head
                    //Menghapus data di hash table jika data tersebut ada
                    exist = 1;
                    temp = ptr->next;
                    ptr->next = temp->next;
                    free(temp);
                }
                //Memajukan ptr
                else ptr = ptr->next;
            }
        }
        //Masuk jika data ada
        if(exist){
            //Mengambil 3 huruf pertama dar nama mahasiswa
            x=getval(nama_mhs[0]);
            if(strlen(nama_mhs) > 1)y=getval(nama_mhs[1]);
            else y = 28;
            if(strlen(nama_mhs) > 2)z=getval(nama_mhs[2]);
            else z = 28;
            //Mengeset ptr dengan hash table sesuai dengan 3 huruf pertama dari nama mahasiswa
            ptr = head_pinjam[x][y][z];
             //Membandingkan nama buku , nama mahasiswa, dan NIM dengan data di database
            if(strcmpi(ptr->buku_dipinjam, buku_dipinjam) == 0 && strcmpi(ptr->nama_mhs, nama_mhs ) == 0 && ptr->nim == nim){//check head
                //Menghapus data di hash table jika data tersebut ada
                exist = 1;
                if(ptr->next == NULL)head_pinjam[x][y][z] = NULL;
                else head_pinjam[x][y][z] = ptr->next;
                free(ptr);
            }
            else while(ptr->next != NULL){
                //Membandingkan nama buku , nama mahasiswa, dan NIM dengan data di database
                if(strcmpi(ptr->next->buku_dipinjam, buku_dipinjam) == 0 && strcmpi(ptr->next->nama_mhs, nama_mhs) == 0  && ptr->next->nim == nim ){//check head
                    //Menghapus data di hash table jika data tersebut ada
                    exist = 1;
                    temp = ptr->next;
                    ptr->next = temp->next;
                    free(temp);
                }
                //Memajukan ptr
                else ptr = ptr->next;
            }
            printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
            printf("\xBA         Peminjaman terhapus!         \xBA\n");
            printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");


            //rewrite on database_pinjam.txt
            fguest = fopen("database_pinjam.txt","w");
            for(i = 0; i < 30; i++)for(j = 0; j < 30; j++)for(k = 0; k < 30; k++)
                if(head_buku[i][j][k] != NULL){
                    ptr = head_buku[i][j][k];
                    while(ptr != NULL){
                        fprintf(fguest,"%s#%d#%s\n",ptr->nama_mhs,ptr->nim,ptr->buku_dipinjam);
                        ptr = ptr->next;
                    }
                }
            fclose(fguest);
        }
        else printf("\xB0\xB0\xB0 Data peminjam tidak ditemukan! \xB0\xB0\xB0\n");//jika data tidak ditemukan
    }
    else if(n == 0)back = 1;
    else printf("\xB2\xB2\xB2Input tidak valid!\xB2\xB2\xB2\n");


    printf("Press any key to continue. . . ");
    fflush(stdin);
    getchar();
    system("cls");

    //jika tidak exit, panggil kembali function
    if(!back)returndb(head_pinjam, head_buku, fguest);
    //agar file bisa diproses lagi
    fguest = fopen("database_pinjam.txt", "a+");
}

//Mengeluarkan interface menu guest
bool guest_menu(datalib *head[30][30][30], datapinjam *head_pinjam[30][30][30], datapinjam *head_buku[30][30][30], FILE *fguest){
    system("cls");
    fflush(stdin);
    int nim, check_guest, x, y, z, i, j, k;
    char nama_mhs[300], buku_dipinjam[300], pilihan;
    datapinjam *ptr = NULL;
    datalib *curr = NULL;

    header_guest();
    //Mengambil pilihan yang dimasukkan
    fflush(stdin);
    scanf("%c",&pilihan);
    system("cls");
    //Masuk ke menu peminjaman jika pilihan yang dimasukkan adalah 1
    if(pilihan=='1')borrowdb(head, head_pinjam, head_buku, fguest);
    //Masuk ke menu pengembalian jika pilihan yang dimasukkan adalah 2
    else if(pilihan=='2')returndb(head_pinjam, head_buku, fguest);
    //Melihat isi data jika pilihan yang dimasukkan adalah 3
    else if(pilihan=='3')viewall(head);
    //Mengembalikan nilai 0/false, jika pilihan 0
    else if(pilihan=='0'){
        return 0;
    }
    //printf("end of guest menu");
    return 1;
}

//Function untuk terima password dan membandingkannya
bool getpass(char *pw){
    char ch, pass[50];
    int i = 0;
    while(ch!=13){
        ch=getch();//terima character input
        if(ch!=13 && ch!=8){//jika bukan backspace (ASCII 8 = Backspace) dan bukan pointer (ASCII 13 = CarriageReturn)
            putch('*');//Tampilkan * sebagai pengganti input
            pass[i] = ch;//membangun string dari input
            i++;
        }
    }
    pass[i] = '\0';
    //Membandingkan password
    if(strcmp(pass,pw)==0)return 1;
    else return 0;
}

//Fungsi main program
int main(){
    int checking=1, type, tahun, i, j, k, x, y, z, c=0, nim;
    char nama[300], buku[300], num[300], str[256], pilihan, pilihan_login;
    char pw[] = {"testing123"}; //Set password
    char nama_mhs[300], buku_dipinjam[300];

    datalib *head[30][30][30], *curr, *ptrfe;//database buku berupa 3D Hash Table linked list
    datapinjam *head_pinjam[30][30][30], *head_buku[30][30][30], *ptr;//database peminjam berupa 3D Hash Table linked list

    // Melakukan pengosongan hashing table
    for(i=0;i<30;i++){
        for(j=0;j<30;j++){
            for(k=0;k<30;k++){
                head[i][j][k]=NULL;
                head_pinjam[i][j][k]=NULL;
                head_buku[i][j][k]=NULL;
            }
        }
    }

    //Membuka file database library
    FILE *fp = fopen("database.txt", "a+");
    c=1;
    //Ke point terakhir di database
    fseek(fp, 0 , SEEK_END);
    //Melihat banyak isi dari fp
    long long int pos = ftell(fp);
    //Set fp ke point pertama untuk memulai scanning
    fseek(fp, 0, SEEK_SET);

    //Pengambilan data library dan pemindahan data ke hash table
    while(!feof(fp)){
        fscanf(fp, "%[^#]#%[^#]#%d\n", nama, buku, &tahun);
        //mendapatkan hash dari buku
        x=getval(buku[0]);
        if(strlen(buku) > 1)y=getval(buku[1]);
        else y = 28;
        if(strlen(buku) > 2)z=getval(buku[2]);
        else z = 28;
        //memasukkan buku kedalam hashtable 3D linkedlist
        inserttochain(nama, buku, tahun, &head[x][y][z]);
    }
    fseek(fp, pos, SEEK_SET);//Set fp ke point data terakhir

    //Membuka database_pinjam
    FILE *fguest = fopen("database_pinjam.txt","a+");

    //Mengecek apakah database_pinjam.txt ada
    if(fguest!=NULL){
        //Ke point terakhir di database
        fseek(fguest, 0, SEEK_END);
        //Melihat banyak isi di notepad database_pinjam
        long long int isi_file = ftell(fguest);
        //Set fguest ke point pertama untuk memulai scanning
        fseek(fguest, 0, SEEK_SET);
        //Mengecek apakah ada isi di txt melalui jumlah data dalam notepad
        if (isi_file > 0){
        //Pengambilan data dan pemindahan data ke hash table
            while(!feof(fguest)){
                //Mengambil data dalam database_pinjam
                fscanf(fguest, "%[^#]#%d#%[^\n]\n", nama_mhs, &nim, buku_dipinjam);
                //Mengambil 3 huruf pertama dari nama peminjam
                x=getval(nama_mhs[0]);
                if(strlen(nama_mhs) > 1)y=getval(nama_mhs[1]);
                else y = 28;
                if(strlen(nama_mhs) > 2)z=getval(nama_mhs[2]);
                else z = 28;
                //Memasukkan data ke hash table pinjam berdasarkan 3 huruf pertama pada nama peminjam
                inserttochainguest(nama_mhs, nim, buku_dipinjam, &head_pinjam[x][y][z]);

                //Mengambil 3 huruf pertama dari buku yang dipinjam
                x=getval(buku_dipinjam[0]);
                if(strlen(buku_dipinjam) > 1)y=getval(buku_dipinjam[1]);
                else y = 28;
                if(strlen(buku_dipinjam) > 2)z=getval(buku_dipinjam[2]);
                else z = 28;
                //Memasukkan data ke hash table buku berdasarkan 3 huruf pertama buku yang dipinjam
                inserttochainguest(nama_mhs, nim, buku_dipinjam, &head_buku[x][y][z]);
            }
        }
        fseek(fguest, isi_file, SEEK_SET);//SET fp TO END OF DATA
    }

    bool check = true, admin = false;

    //Program akan terus berlanjut selagi check = true
    while(check){
        login_header();
        fflush(stdin);
        //Mengambil opsi pilihan login
        scanf("%c",&pilihan_login);
        if(pilihan_login=='1'){
            //Set admin = false jika login sebagai guest
            admin = false;
            bool g = 1;
            //Menu guest akan terus dijalankan selagi g = true
            while(g){
                //Masuk sebagai guest
                printf("\t\xAE\xAE\xAE LOGGING IN AS GUEST \xAF\xAF\xAF");
                Sleep(1000);
                //Melakukan pengecekan terhadap nilai g dan masuk ke guest_menu
                g = guest_menu(head, head_pinjam, head_buku, fguest);
            }
        }
        else if(pilihan_login=='2'){
            //Mengambil imput password
            printf("\t\xAF Masukan password: ");
            //Mengecek apakah password benar atau salah
            admin = getpass(pw);
            //kalau password salah
            if(!admin){
                printf("\n");
                printf("\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
                printf("\t\xDB       WRONG PASSWORD!      \xDB\n");
                printf("\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
            }
            //kalau password benar
            else{
                printf("\n");
                printf("\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
                printf("\t\xBA      LOGIN SUCCESSFUL!     \xBA\n");
                printf("\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
            }
            Sleep(1000);
        }
        else if(pilihan_login == '0'){
            //Keluar dari program jika input pilihan 0
            printf("\n\tExiting program!\n");
            Sleep(300);
            return 0;
        }
        system("cls");
        //Masuk ke admin sewaktu admin = true
        while(admin){
            //Mengecek apakah data terbuka atau tidak
            if(checking==0){
                FILE *fp;
                fp = fopen("database.txt", "a+");
                checking=1;
            }
            //Mengeluarkan menu utama
            header_admin();
            //Mengambil pilihan yang dimasukkan
            fflush(stdin);
            scanf("%c",&pilihan);
            system("cls");

            if(pilihan=='1')newdb(head, fp, &checking);//function data baru jika pilihan 1
            else if(pilihan=='2')viewall(head);//function tampilkan data jika pilihan 2
            else if(pilihan=='3')deletedb(head, fp);//function hapus data jika pilihan 3
            else if(pilihan=='4')sortdb(head, fp);//function urutkan data jika pilihan 4
            else if(pilihan=='5')searchdb(head);//function mencari data jika pilihan 5
            else if(pilihan=='0')break;//keluar dari loop (kembali ke login) jika pilihan 0
            else {//invalid input handler
                printf("\xB2\xB2\xB2Input tidak valid!\xB2\xB2\xB2\nTekan apapun untuk melanjutkan...\n");
                fflush(stdin);
                getchar();
                system("cls");
            }
        }
    }
    return 0;
}
