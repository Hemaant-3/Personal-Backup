import 'dart:io';

main(List<String> args) {
  for (int i = 0; i < 5; i++) {
    // for (int j = 5; j < 0; j--) {
    print(" ");
    stdout.write("loop j");
    for (int k = 0; k < i; k++) {
      stdout.write("* ");
    }
    print("\n");
  }
}
// }
