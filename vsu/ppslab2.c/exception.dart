main(List<String> args) {
  int x = 12;
  int y = 0;
  int result;
  /*
Exception using ON block
  */
  try {
    result = x ~/ y;
  } on IntegerDivisionByZeroException {
    print('doesnt divde by zero');
  }

  /*
USing catch block
  */
  try {
    result = x ~/ y;
  } catch (e) {
    print(e);
  }

  /*
using ON catch 
  */
  try {
    result = x ~/ y;
  } on IntegerDivisionByZeroException catch (e) {
    print(e);
  }
}
