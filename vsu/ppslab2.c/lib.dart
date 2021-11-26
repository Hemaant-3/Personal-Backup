// void main() {
//   int a = 10, b = 20, c = 5;
//   c = c * c * c;

//   print("$a + $b = ${a + b}");
//   print("$a%$b = ${a % b}"); // Add a break point here
//   print("$a*$b = ${a * b}");
//   print("$a/$b = ${a / b}");
//   print(c);
// }
typedef ManyOperation(int a, int b);
add(int a, int b) {
  print('the addition of $a and $b is ${a + b}');
}

subtract(int a, int b) {
  print('the subtraction of $a and $b is ${a - b}');
}

multiply(int a, int b) {
  print('the multiplication of $a and $b is ${a * b}');
}

divide(int a, int b) {
  print('the division of $a and $b is ${a / b}');
}

Calculate(int a, int b, ManyOperation oper) {
  print('inside calcii');
  oper(a, b);
}

void main(List<String> args) {
  ManyOperation oper = add;
  oper(10, 20);
  ManyOperation mm = subtract;
  mm(35, 2);
  Calculate(30, 2, subtract);
  Calculate(365, 4, multiply);
  Calculate(1460, 24, divide);
}
