// Longest Increasing Subsequence
// Kunci dari permasalahannya adalah array yang
// diinput tidak boleh diubah
// sehingga, program akan membaca dari array ke-0
// hingga urutan array terakhir
// catatan bahwa array ke-i > array ke-i+1
 
// Penulis akan menggunakan dynamic programming approach
 
#include <bits/stdc++.h>
using namespace std;
 
//fungsi ini akan menghasilkan panjang LIS yang memungkinkan
int lis(int arr[], int n){
    int lis[n];
    lis[0] = 1;
 
    //menggunakan bottom up
    for(int i = 1; i < n; i++){
        lis[i] = 1;
        for(int j = 0; j < i; j++){ //looping untuk mengecek
        //apakah array sebelumnya lebih besar atau lebih
        //kecil
            if(arr[i] > arr[j] && lis[i] < lis[j] + 1) {
            lis[i] = lis[j] + 1;
            }
 
        }
    }
    //cetak hasil
    return *max_element(lis, lis+n);
 
}
 
int main()
{
    int arr[] = {4, 1, 13, 7, 0, 2, 8, 11, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Length of lis is %d\n", lis(arr, n));
 
    return 0;
}
