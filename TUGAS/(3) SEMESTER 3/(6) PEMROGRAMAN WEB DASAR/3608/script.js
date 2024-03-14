// script.js
function pesan() {
    // Mengambil nilai input
    var tanggal = document.getElementById("tanggal").value;
    var nama = document.getElementById("nama").value;
    var jenisKelamin = document.querySelector('input[name="jenis_kelamin"]:checked').value;
    var mobil = document.getElementById("mobil").value;
    var lamaSewa = document.getElementById("lama_sewa").value;

    // Menampilkan hasil di halaman result
    var resultContainer = document.getElementById("result-container");
    resultContainer.innerHTML = `
        <p><strong>Tanggal Rental:</strong> ${tanggal}</p>
        <p><strong>Nama Pemesan:</strong> ${nama}</p>
        <p><strong>Jenis Kelamin:</strong> ${jenisKelamin}</p>
        <p><strong>Mobil yang dipilih:</strong> ${mobil}</p>
        <p><strong>Lama Sewa:</strong> ${lamaSewa} hari</p>
    `;

    // Redirect ke halaman result
    window.location.href = "result.html";
}

function batal() {
    // Fungsi untuk menangani tombol "Batal"
    document.getElementById("rentalForm").reset();
}
