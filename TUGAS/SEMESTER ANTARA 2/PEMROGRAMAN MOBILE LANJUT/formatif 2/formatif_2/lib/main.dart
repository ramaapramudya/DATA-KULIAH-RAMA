// ignore_for_file: prefer_const_constructors, library_private_types_in_public_api, use_key_in_widget_constructors, depend_on_referenced_packages

import 'dart:convert';
import 'package:flutter/material.dart';
import 'package:http/http.dart' as http;

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Airport List',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: AirportList(),
    );
  }
}

class AirportList extends StatefulWidget {
  @override
  _AirportListState createState() => _AirportListState();
}

class _AirportListState extends State<AirportList> {
  List<dynamic> airports = [];

  @override
  void initState() {
    super.initState();
    fetchAirports();
  }

  // Fungsi untuk mengambil data dari API
  Future<void> fetchAirports() async {
    final response =
        await http.get(Uri.parse('https://freetestapi.com/api/v1/airports'));

    if (response.statusCode == 200) {
      setState(() {
        airports = json.decode(response.body); // Mengubah JSON menjadi list
      });
    } else {
      throw Exception('Failed to load airports');
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('List of Airports'),
      ),
      body: airports.isEmpty
          ? Center(
              child:
                  CircularProgressIndicator()) // Tampilkan loader jika data belum di-load
          : ListView.builder(
              itemCount: airports.length,
              itemBuilder: (context, index) {
                // Cek nilai null untuk setiap field
                final name = airports[index]['name'] ?? 'Unknown Name';
                final code = airports[index]['iata_code'] ?? 'Unknown Code';
                final country = airports[index]['country'] ?? 'Unknown Country';

                return ListTile(
                  leading: Icon(Icons.local_airport), // Ikon bandara (opsional)
                  title: Text(name), // Nama bandara
                  subtitle: Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: [
                      Text('Code: $code'), // Menampilkan code (IATA)
                      Text('Country: $country'), // Menampilkan country
                    ],
                  ),
                );
              },
            ),
    );
  }
}
