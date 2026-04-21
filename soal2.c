/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 2
 *   Hari dan Tanggal    : Selasa, 21 April 2026
 *   Nama (NIM)          : 13224086
 *   Nama File           : soal2.c
 *   Deskripsi           : Sebuah gerbang keamanan memproses data satu peneliti. Tentukan status akhir peneliti berdasarkan 
 *                         level izin, suhu tubuh, kadar radiasi, dan jam kedatangan.
 * 
 */

#include <stdio.h>
#include <string.h>
int main() {
    char naskah[100];
    scanf("%s",naskah);
    int n = strlen(naskah);
    int buka =0;
    int tutup =0;
    int i,j,a,b;
    for (i=0; naskah[i] != '\0'; ++i){
        if (buka==0 && naskah [i]==')'){
            for (j = i; naskah[j] != '\0'; ++j) {
                naskah[j] = naskah[j + 1]; // Shift characters to the left to remove non-alphabetic characters
            }
            naskah[j] = '\0'; // Set the end of the string after removal
            n-=1;
            i-=1;
        }
        if (naskah [i]=='('){
            buka +=1;
        }
        if (naskah [i]==')'){
            tutup +=1;
        }
    }
    for (i=0; naskah[i] != '\0'; ++i){
        if (tutup == 0){
            if (naskah [i] == '('){
            for (j = i; naskah[j] != '\0'; ++j) {
                naskah[j] = naskah[j + 1]; // Shift characters to the left to remove non-alphabetic characters
            }
            naskah[j] = '\0'; // Set the end of the string after removal
            n-=1;
            i-=1;
            }
        }
    }
    for (i=0; naskah[i] != '\0'; ++i){
        if (buka<tutup && naskah [i]==')'){
            for (j = i; naskah[j] != '\0'; ++j) {
                naskah[j] = naskah[j + 1]; // Shift characters to the left to remove non-alphabetic characters
            }
            naskah[j] = '\0'; // Set the end of the string after removal
            n-=1;
            i-=1;
            tutup -=1;
        }
        if (tutup<buka && naskah [i]=='('){
            for (j = i; naskah[j] != '\0'; ++j) {
                naskah[j] = naskah[j + 1]; // Shift characters to the left to remove non-alphabetic characters
            }
            naskah[j] = '\0'; // Set the end of the string after removal
            n-=1;
            i-=1;
            buka -=1;
        }

    }
    for (int k = 0; k<n; k++){
        printf("%c", naskah[k]);
    }
}

// }else if (buka == 0 && naskah[i] ==')'){
            // for (j = i; naskah[j] != '\0'; ++j) {
            //     naskah[j] = naskah[j + 1]; // Shift characters to the left to remove non-alphabetic characters
            // }
            // naskah[j] = '\0'; // Set the end of the string after removal
            // n-=1;
//         }else if (buka ==1 && naskah[i] == ')'){
//             tutup += 1;