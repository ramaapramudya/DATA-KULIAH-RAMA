<?php
    //cek button    
        if ($_POST['Submit'] == "Submit") {
        $nim = $_POST['nim'];
        $nama_mhs = $_POST['nama_mhs'];
        $jns_kelamin = $_POST['jenis_kelamin'];
        $no_hp = $_POST['no_hp'];
        $agama = $_POST['agama'];
        $status_keaktifan = $_POST['status_keaktifan'];
        //validasi data data kosong
        if (empty($_POST['nim'])||empty($_POST['nama_mhs'])||empty($_POST['jns_kelamin'])||empty($_POST['no_hp'])||) {
            ?>
                <script language="JavaScript">
                    alert('Data Harap Dilengkapi!');
                    document.location='download-script-form-input-data.php';
                </script>
            <?php
        }
        else {
        include "../../koneksi-tutor.php";
        //cek NIM di database
        $cek=mysql_num_rows (mysql_query("SELECT nim FROM data_mahasiswa WHERE nim='$_POST[nim]'"));
        if ($cek > 0) {
        ?>
            <script language="JavaScript">
            alert('NIM sudah dipakai!, silahkan ganti NIM yang lain');
            document.location='download-script-form-input-data.php';
            </script>
        <?php
        }
        //Masukan data ke Table
        $input    ="INSERT INTO data_mahasiswa (nim,nama_mhs,jns_kelamin,no_hp,agama,status_keaktifan) VALUES ('$nim','$nama_mhs','$jns_kelamin','$no_hp','$agama','$status_keaktifan)";
        $query_input =mysql_query($input);
        if ($query_input) {
        //Jika Sukses
        ?>
            <script language="JavaScript">
            alert('Input Data Mahasiswa Berhasil');
            document.location='download-script-form-input-data.php';
            </script>
        <?php
        }
        else {
        //Jika Gagal
        echo "Input Data Mahasiswa Gagal!, Silahkan diulangi!";
        }
    //Tutup koneksi engine MySQL
        mysql_close($Open);
        }
    }
    ?>
