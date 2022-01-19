# Nama     : Fitra Nurindra
# NIM      : 13220011
# Jurusan  : Teknik Elektro
# Tugas 1 Dengan Menggunakan Bahasa Python

A = 0           # Inisialisasi variabel A
B = 0           # Inisialisasi variabel B

while B != 4 :  # While loop hingga ember B terisi 4 liter
    print("Pilih No. Instruksi: \n1. Isi ember 3 liter\n2. Isi ember 5 liter\n3. Kosongkan ember 3 liter\n4. Kosongkan ember 5 liter")
    print("5. Tuang isi ember 3 liter ke ember 5 liter\n6. Tuang isi ember 5 liter ke ember 3 liter\n")
    input_user = int(input("Nomor instruksi yang dipilih : \n"))        # User memberikan input untuk memilih nomor sesuai instruksi
    if input_user == 1 :        # Conditional pada saat user memberi input 1
        A = 3
    elif input_user == 2 :      # Conditional pada saat user memberi input 2
        B = 5
    elif input_user == 3 :      # Conditional pada saat user memberi input 3
        A = 0
    elif input_user == 4 :      # Conditional pada saat user memberi input 4
        B = 0
    elif input_user == 5 :      # Conditional pada saat user memberi input 5
        if A + B > 5 :          # Conditional jika A + B > 5
            A = A + B - 5
            B = 5
        else :                  # Conditional jika A + B <= 5
            B = B + A
            A = 0
    elif input_user == 6 :      # Conditional pada saat user memberi input 6
        if A + B > 3 :          # Conditional jika A + B > 3
            B = B + A - 3
            A = 3
        else :                  # Conditional jika A + B <= 3
            A = A + B
            B = 0
    else :                      # Conditional pada saat user memberi input selain dari instruksi yang diberikan
        print("\nInput Tidak sesuai instruksi!!\nSilakan coba lagi!!\n")
    print("\nProgram akan berakhir jika terdapat ember yang berisi 4 liter")
    print(f"Ember 3 liter berisi : {A} liter")
    print(f"Ember 5 liter berisi : {B} liter\n") 

print("Telah terdapat ember yang berisi 4 liter")
print("----Program selesai!!----")
input() # Agar output akhir dapat terlihat di terminal (CMD)