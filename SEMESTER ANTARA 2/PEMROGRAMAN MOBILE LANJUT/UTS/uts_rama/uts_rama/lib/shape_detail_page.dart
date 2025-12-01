// ignore_for_file: use_key_in_widget_constructors, prefer_const_constructors_in_immutables, library_private_types_in_public_api, prefer_const_constructors

import 'package:flutter/material.dart';

class ShapeDetailPage extends StatefulWidget {
  final String shape;

  ShapeDetailPage({required this.shape});

  @override
  _ShapeDetailPageState createState() => _ShapeDetailPageState();
}

class _ShapeDetailPageState extends State<ShapeDetailPage> {
  final _formKey = GlobalKey<FormState>();
  double resultArea = 0.0;
  double resultPerimeter = 0.0;

  TextEditingController param1Controller = TextEditingController();
  TextEditingController param2Controller = TextEditingController();
  TextEditingController param3Controller = TextEditingController();

  String param1Label = '';
  String param2Label = '';
  String param3Label = '';

  void calculate() {
    double param1 = double.tryParse(param1Controller.text) ?? 0.0;
    double param2 = double.tryParse(param2Controller.text) ?? 0.0;
    double param3 = double.tryParse(param3Controller.text) ?? 0.0;

    setState(() {
      switch (widget.shape) {
        case 'Kubus':
          resultArea = 6 * param1 * param1; // Luas Kubus
          resultPerimeter = 12 * param1; // Keliling Kubus
          break;
        case 'Bola':
          resultArea = 4 * 3.1416 * param1 * param1; // Luas Bola
          resultPerimeter = 2 * 3.1416 * param1; // Keliling Bola
          break;
        case 'Silinder':
          resultArea = 2 * 3.1416 * param1 * (param1 + param2); // Luas Silinder
          resultPerimeter = 2 * 3.1416 * param1; // Keliling Silinder
          break;
        case 'Kerucut':
          resultArea = 3.1416 * param1 * (param1 + param2); // Luas Kerucut
          resultPerimeter = 3.1416 * param1; // Keliling Kerucut
          break;
        case 'Balok':
          resultArea = 2 * (param1 * param2 + param2 * param3 + param3 * param1); // Luas Balok
          resultPerimeter = 4 * (param1 + param2 + param3); // Keliling Balok
          break;
      }
    });
  }

  @override
  void initState() {
    super.initState();
    setLabels();
  }

  void setLabels() {
    switch (widget.shape) {
      case 'Kubus':
        param1Label = 'Panjang Sisi';
        break;
      case 'Bola':
        param1Label = 'Jari-jari';
        break;
      case 'Silinder':
        param1Label = 'Jari-jari Alas';
        param2Label = 'Tinggi';
        break;
      case 'Kerucut':
        param1Label = 'Jari-jari Alas';
        param2Label = 'Tinggi';
        break;
      case 'Balok':
        param1Label = 'Panjang';
        param2Label = 'Lebar';
        param3Label = 'Tinggi';
        break;
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text(widget.shape),
      ),
      body: SingleChildScrollView(
        padding: EdgeInsets.all(16.0),
        child: Form(
          key: _formKey,
          child: Column(
            children: [
              Text(
                'Masukkan Parameter untuk ${widget.shape}',
                style: TextStyle(fontSize: 20, fontWeight: FontWeight.bold),
              ),
              SizedBox(height: 20),
              TextFormField(
                controller: param1Controller,
                decoration: InputDecoration(
                  labelText: param1Label,
                  border: OutlineInputBorder(),
                ),
                keyboardType: TextInputType.number,
              ),
              SizedBox(height: 20),
              if (param2Label.isNotEmpty)
                TextFormField(
                  controller: param2Controller,
                  decoration: InputDecoration(
                    labelText: param2Label,
                    border: OutlineInputBorder(),
                  ),
                  keyboardType: TextInputType.number,
                ),
              SizedBox(height: 20),
              if (param3Label.isNotEmpty)
                TextFormField(
                  controller: param3Controller,
                  decoration: InputDecoration(
                    labelText: param3Label,
                    border: OutlineInputBorder(),
                  ),
                  keyboardType: TextInputType.number,
                ),
              SizedBox(height: 20),
              // Perubahan font pada tombol 'Hitung Luas & Keliling' dimulai di sini
              ElevatedButton(
                onPressed: calculate,
                style: ElevatedButton.styleFrom(
                  backgroundColor: Color.fromARGB(255, 150, 148, 247),
                  padding: EdgeInsets.symmetric(vertical: 15.0, horizontal: 30.0),
                  shape: RoundedRectangleBorder(
                    borderRadius: BorderRadius.circular(10),
                  ),
                ),
                child: Text(
                  'Hitung Luas & Keliling',
                  style: TextStyle(
                    fontSize: 18,
                    fontWeight: FontWeight.w600, // Mengatur ketebalan font menjadi semi-bold
                    fontFamily: 'Roboto', // Mengatur jenis font (pastikan font ini tersedia)
                    color: Colors.white, // Mengatur warna font
                  ),
                ),
              ),
              // Perubahan font pada tombol 'Hitung Luas & Keliling' selesai di sini
              SizedBox(height: 30),
              Text(
                'Luas: $resultArea',
                style: TextStyle(fontSize: 24, fontWeight: FontWeight.bold, color: const Color.fromARGB(255, 150, 148, 247)),
              ),
              Text(
                'Keliling: $resultPerimeter',
                style: TextStyle(fontSize: 24, fontWeight: FontWeight.bold, color: const Color.fromARGB(255, 150, 148, 247)),
              ),
            ],
          ),
        ),
      ),
    );
  }
}
