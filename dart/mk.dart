void main() {
  // print('hello');
  String statements = manager(item: 'sugar', unit: 'kg', qunty: 8);
  print(statements);
}

String manager(
    {required int qunty, required String unit, required String item}) {
  String statement = '$item $qunty $unit';
  return statement;
}

// void main() {
//   // print('hello');
//   manager(unit: 'kg', qunty: 5, item: 'Sugar');
// }

// manager( {int qunty, String unit, String item} ) {
//   print('your $qunty $unit is ready $item');
// }
