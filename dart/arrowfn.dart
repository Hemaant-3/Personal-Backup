main() {
  // int sum = add(5, 9);
  // print(sum);
  String statement = manager(8, 'Kg', 'relioable');
  print(statement);
}

// add(int a, int b) => (a * b);
// single line function.

String manager(int a, String item, String unit) {
  String statement = '$a $item $unit';
  return statement;
}
