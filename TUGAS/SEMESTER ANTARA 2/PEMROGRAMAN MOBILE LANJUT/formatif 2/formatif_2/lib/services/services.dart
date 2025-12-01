// ignore_for_file: depend_on_referenced_packages

import 'dart:convert';
import 'package:http/http.dart' as http;

class Product {
  final String id;
  final String name;
  final Map<String, dynamic>? data;

  Product({required this.id, required this.name, this.data});

  // Factory method untuk mem-parsing JSON
  factory Product.fromJson(Map<String, dynamic> json) {
    return Product(
      id: json['id'],
      name: json['name'],
      data: json['data'],
    );
  }
}

class ProductService {
  // Ganti dengan URL API-mu
  final String apiUrl = 'https://freetestapi.com/api/v1/airports';

  // Metode untuk fetch data dari API
  Future<List<Product>> fetchProducts() async {
    final response = await http.get(Uri.parse(apiUrl));

    if (response.statusCode == 200) {
      List<dynamic> body = jsonDecode(response.body);
      List<Product> products =
          body.map((dynamic item) => Product.fromJson(item)).toList();
      return products;
    } else {
      throw Exception('Failed to load products');
    }
  }
}
