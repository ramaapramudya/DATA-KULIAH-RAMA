// ignore_for_file: camel_case_types

import 'package:flutter/material.dart';

class Post extends StatefulWidget {
  const Post({super.key});

  @override
  State<Post> createState() => _PostState();
}

class _PostState extends State<Post> {
  List image = [
    'https://i5.walmartimages.com/seo/Fresh-Gala-Apple-Each_f46d4fa7-6108-4450-a610-cc95a1ca28c5_3.38c2c5b2f003a0aafa618f3b4dc3cbbd.jpeg',
    'https://static.vecteezy.com/system/resources/previews/020/336/037/original/samsung-logo-samsung-icon-free-free-vector.jpg  ',
    'https://static.vecteezy.com/system/resources/previews/020/336/369/original/mi-xiaomi-logo-mi-xiaomi-icon-free-free-vector.jpg',
    'https://static.vecteezy.com/system/resources/previews/020/927/744/original/sony-brand-logo-phone-symbol-white-design-japan-mobile-illustration-with-black-background-free-vector.jpg',
    'https://upload.wikimedia.org/wikipedia/commons/thumb/c/c1/Google_%22G%22_logo.svg/480px-Google_%22G%22_logo.svg.png',
  ];
  List phone = [
    'Apple',
    'Samsung',
    'Xiaomi',
    'Sony',
    'Google Pixel',
  ];
  List description = [
    'Iphone is the stylist phone ever',
    'Samsung is the Best phone ever',
    'Xiaomi is the cheapest phone ever',
    'Sony is the Dead Brand phone ever',
    'Google Pixle is the Uwaw phone ever'
  ];
  List price = [
    '\$1000',
    '\$850',
    '\$100',
    'Free',
    '\$1250',
  ];
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('ListView Products'),
      ),
      body: Card(
        child: ListView.builder(
            itemCount: image.length,
            itemBuilder: (BuildContext context, int index) {
              return Padding(
                padding: const EdgeInsets.all(20),
                child: ListTile(
                  leading: CircleAvatar(
                    child: Image.network(image[index]),
                  ),
                  title: Text(
                    phone[index],
                    style: const TextStyle(
                      fontSize: 16,
                      fontWeight: FontWeight.bold,
                    ),
                  ),
                  subtitle: Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: [
                      Text(
                        description[index],
                        style: const TextStyle(color: Colors.grey),
                      ),
                      Text(
                        textAlign: TextAlign.right,
                        price[index],
                        style: const TextStyle(
                            color: Colors.green, fontWeight: FontWeight.bold),
                      ),
                    ],
                  ),
                ),
              );
            }),
      ),
    );
  }
}
