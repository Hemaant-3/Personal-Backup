//formal exception of throwing an exception/.
// main(List<String> args) {
//   try {
//     test_age(-2);
//   } catch (e) {
//     print('Age cannot be negative');
//   }
// }

// void test_age(int age) {
//   if (age < 0) {
//     throw new FormatException();
//   }
// }
//custom Exception throwing.abstract
class AmtException implements Exception {
  String errMsg() => 'Amount is to be greator than zero';
}

void withdraw_amt(int amt) {
  if (amt <= 0) {
    throw new AmtException();
  }
}

main(List<String> args) {
  try {
    withdraw_amt(-12);
  } catch (e) {
    print(e.errMsg()); // doubt
  } finally {
    print('final run of code');
  }
}
