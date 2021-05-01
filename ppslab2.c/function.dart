/*
 optional positional parameters function by their parameters
// */
bb(n1, [s1]) {
  print(n1);
  print(s1);
}

/*
optional named parameters by name;
*/
test_fun({myname, sirname}) {
  // print(a);
  print(sirname);
  print(myname);
}

/*
parameter by default value
*/
test_fun2(a, {s1: 22}) {
  print(a);
  print(s1);
}

/*
lambda function
*/
printMsg() => print('Hello world');
int test_n() => 123;
void main() {
  // bb(12);
  // test_fun(123);
  // test_fun(myname: 'Hemant', sirname: 'Mionu');
  // test_fun2('45');
  printMsg();
  print(test_n());
}
