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

  Future<void> fetchAirports() async {
    final response =
        await http.get(Uri.parse('https://freetestapi.com/api/v1/airports'));

    if (response.statusCode == 200) {
      setState(() {
        airports = json.decode(response.body);
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
          ? Center(child: CircularProgressIndicator())
          : ListView.builder(
              itemCount: airports.length,
              itemBuilder: (context, index) {
                return ListTile(
                  leading: Icon(Icons.local_airport), // Optional icon
                  title: Text(airports[index]['name']),
                  subtitle: Text('IATA: ${airports[index]['iata_code']}'),
                );
              },
            ),
    );
  }
}
