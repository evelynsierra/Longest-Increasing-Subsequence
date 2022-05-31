# Longest-Increasing-Subsequence
Longest Increasing Subsequence (LIS) adalah permasalahan yang mencari panjang sequence maximum. Contoh :
![image](https://user-images.githubusercontent.com/55088939/171174759-14504ff5-f8b3-4a42-8ff4-3cb12067896c.png)

1. Diberikan sebuah array `{10,22,9,33,21,50,41,60,80}`
2. Yang perlu diperhatikan disini adalah urutan array TIDAK DAPAT DIGANTI, sehingga array ke-0 akan mulai dijadikan acuan
3. Kita akan mengambil array ke-0 yaitu nilai 10, kemudian kita bandingkan dengan array ke-1, 20. Manakah nilai yang lebih besar itulah yang akan dihitung dalam sequence.
4. Ternyata, 22 > 10. Sehingga LIS kita berjumlah 2.
5. Kemudian, kita bandingkan lagi array ke-1 dengan array ke-2. Kita mendapatkan nilai 22 > 9, sehingga 9 tidak bisa dimasukkan ke dalam LIS kita.
6. Langkah 3 sampai 5 akan diulang terus sampai akhir array. 
7. Maka, LIS yang kita dapat adalah 6, dengan urutan `{10,22,33,50,60,80}`
