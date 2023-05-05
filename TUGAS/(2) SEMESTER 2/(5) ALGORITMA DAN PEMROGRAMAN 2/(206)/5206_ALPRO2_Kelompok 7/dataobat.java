package javabiu.src.pertemuan6;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import java.util.Scanner;

class dataobat {
    private int hargaobat;
    private String namaobat;
    private int nomorproduk;

    dataobat(int nomorproduk, String namaobat, int hargaobat) {
        this.nomorproduk = nomorproduk;
        this.namaobat = namaobat;
        this.hargaobat = hargaobat;
    }

    public int getNoPro() {
        return nomorproduk;
    }

    public String getNama() {
        return namaobat;
    }

    public int getHarga() {
        return hargaobat;
    }

    public String toString() {
        return nomorproduk + " " + namaobat + " " + hargaobat;
    }
}

class DataScreen {

    public static void main(String[] args) {
        List<dataobat> c = new ArrayList<>();
        Scanner s = new Scanner(System.in);
        Scanner s1 = new Scanner(System.in);
        int forloop;

        do {
            System.out.println("1. Masuk Data Baru ");
            System.out.println("2. Tampilkan Data");
            System.out.println("3. Cari Data by Nomor Produk");
            System.out.println("4. Hapus Data");
            System.out.println("5. Perbarui Data");
            System.out.println("Tentukan pilihan-mu, gunakan angka yang sudah tertera");

            forloop = s.nextInt();
            switch (forloop) {
                case 1:
                    System.out.print("Masukkan Nomor Obat : ");
                    int nomorprodukInt = s.nextInt();
                    System.out.print("Masukkan Nama Obat : ");
                    String namaprodukString = s1.nextLine();
                    System.out.print("Masukkan Harga Obat : ");
                    int hargaobatInt = s.nextInt();

                    c.add(new dataobat(nomorprodukInt, namaprodukString, hargaobatInt));
                    break;

                case 2:
                    System.out.println("---------------------------");
                    Iterator<dataobat> i = c.iterator();
                    while (i.hasNext()) {
                        dataobat e = i.next();
                        System.out.println(e);
                        ;
                    }
                    System.out.println("---------------------------");
                    break;
                case 3:
                    boolean found = false;
                    System.out.print("Masukkan Nomor Obat yang ingin kamu cari  : ");
                    int empno = s.nextInt();
                    System.out.println("---------------------------");
                    i = c.iterator();
                    while (i.hasNext()) {
                        dataobat e = i.next();
                        if (e.getNoPro() == empno) {
                            System.out.println(e);
                            found = true;
                        }
                    }

                    if (!found) {
                        System.out.println("Record tidak ditemukan!");
                    }
                    System.out.println("---------------------------");
                    break;

                case 4:
                    found = false;
                    System.out.print("Masukkan Nomor Obat yang ingin kamu Hapus  : ");
                    empno = s.nextInt();
                    System.out.println("---------------------------");
                    i = c.iterator();
                    while (i.hasNext()) {
                        dataobat e = i.next();
                        if (e.getNoPro() == empno) {
                            i.remove();
                            found = true;
                        }
                    }
                    if (!found) {
                        System.out.println("Record tidak ditemukan!");
                    }
                    System.out.println("---------------------------");
                    break;
                case 5:
                    found = false;
                    System.out.print("Masukkan Nomor Obat yang ingin kamu Perbarui  :");
                    empno = s.nextInt();
                    System.out.println("---------------------------");
                    ListIterator<dataobat> li = c.listIterator();
                    while (li.hasNext()) {
                        dataobat e = li.next();
                        if (e.getNoPro() == empno) {
                            System.out.println("Masukkan obat baru  : ");
                            namaprodukString = s1.nextLine();

                            System.out.println("Masukkan harga obat baru  :");
                            hargaobatInt = s.nextInt();
                            li.set(new dataobat(empno, namaprodukString, hargaobatInt));
                            found = true;
                        }
                    }

                    if (!found) {
                        System.out.println("Record tidak ditemukan!");
                    } else {
                        System.out.println("Record berhasil di perbarui!");
                    }
                    System.out.println("---------------------------");
                    break;
            }
        } while (forloop != 0);
    }

}
