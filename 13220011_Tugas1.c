// Nama     : Fitra Nurindra
// NIM      : 13220011
// Jurusan  : Teknik Elektro
// Tugas 1 Dengan Menggunakan Bahasa C

#include<stdio.h>

int main(){
    int A = 0, B = 0, N;            // Define dan Inisialisasi variabel A (ember 3 liter) dan B (ember 5 liter), Serta mendefine nilai N
    while (B != 4){                 // While loop hingga ember B terisi 4 liter        
        printf("Pilih No. Instruksi:\n1. Isi ember 3 liter\n");
        printf("2. Isi ember 5 liter\n3. Kosongkan ember 3 liter\n");
        printf("4. Kosongkan ember 5 liter\n5. Tuang isi ember 3 liter ke ember 5 liter\n");
        printf("6. Tuang isi ember 5 liter ke ember 3 liter\n");
        printf("\nNomor instruksi yang dipilih : ");
        scanf("%d", &N);            // Input dari User untuk memberi nilai N
        if (N == 1){                // Conditional pada saat user memberi input 1
            A = 3;                  
        }
        else if (N == 2){           // Conditional pada saat user memberi input 2
            B = 5;                  
        }
        else if (N == 3){           // Conditional pada saat user memberi input 3
            A = 0;                  
        }
        else if (N == 4){           // Conditional pada saat user memberi input 4
            B = 0;                  
        }
        else if (N == 5){           // Conditional pada saat user memberi input 5
            if (A + B > 5){         // Conditional jika A + B > 5
                A = A + B - 5;      
                B = 5;
            }
            else {                  // Conditional jika A + B <= 5
                B = A + B;
                A = 0;
            }
        }
        else if (N == 6){           // Conditional pada saat user memberi input 6
            if (A + B > 3){         // Conditional jika A + B > 3
                B = B + A - 3;
                A = 3;
            }
            else{                   // Conditional jika A + B <= 3
                A = A + B;
                B = 0;
            }
        }
        else{                       // Conditional pada saat user memberi input selain dari instruksi yang diberikan
            printf("\nInput Tidak sesuai instruksi!!\n");
            printf("Silakan coba lagi!!\n");
        }
        printf("\nProgram akan berakhir jika terdapat ember yang berisi 4 liter\n");
        printf("Ember 3 liter berisi : %d liter\n", A);
        printf("Ember 5 liter berisi : %d liter\n\n", B);
    }
    printf("Telah terdapat ember yang berisi 4 liter\n");
    printf("----Program selesai!!----\n");
    printf("\nKetik sembarang character untuk keluar! ");
    char Z;
    scanf("%s", &Z);       // Agar output akhirnya dapat terlihat di terminal (CMD)
    return 0;
}