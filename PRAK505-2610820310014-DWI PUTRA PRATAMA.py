def Biodata(tahunLahir, nama, asal):
    tahun_sekarang = 2026
    umur = tahun_sekarang - tahunLahir

    print("Perkenalkan Nama Saya :", nama)
    print("Umur Saya :", umur)
    print("Saya Adalah Angkatan :", tahun_sekarang)
    print("Asal Saya dari :", asal)


tahunLahir = int(input())
nama = input()
asal = input()

Biodata(tahunLahir, nama, asal)