#include <stdio.h>
int main()
{
    int T, F[100], B[100];


    scanf("%d", &T);
    for( int i = 1; i <= T; i++ )
    {
        scanf ("%d %d", &F[i], &B[i]);
     }
      for( int i = 1; i <= T; i++ )
    {
        int hasil = 0;
        for( int j = F[i]; j <= B[i]; j++ )
        {
            if (j % 10 == 4 || j % 10 == 3)
            {
                hasil++;
            }
        }
        printf("%d \n", hasil);
     }

    return 0;
}


/*
--------------------------- Angka Sial ---------------------------
Batas Waktu 1 detik
Batas Memori 32 MB
Deskripsi Masalah
Pak Dikin mempercayai takhayul dimana angka 13 dan 4 membawa hal buruk. Sehingga setiap 
kali ke luar kota dan menginap di suatu tempat, ia menghindari kamar dengan angka yang 
diakhiri angka 3 dan 4. Pak Dikin ingin kamu membantunya memeriksa berapa jumlah kamar 
yang harus ia hindari ketika ingin memesan.
Format Masukan
Masukan pertama adalah integer T (test case) yang menandakan jumlah penginapan yang akan 
diperiksa.
Baris pertama masukan setiap test case berisi dua integer F dan B yang merupakan nomor 
kamar dari depan hingga belakang, dipisahkan oleh spasi.
Format Keluaran
Untuk setiap hotel, tampilkan satu integer yang merupakan jumlah kamar yang harus dihindari 
untuk dipesan.
Contoh Masukan
2
1 10
13 33
Contoh Keluaran
2
5
*/
