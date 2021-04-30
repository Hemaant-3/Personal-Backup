import 'dart:io';

main() {
  for (var i = 0; i < 6; i++) {
    for (var j = 0; j < i; j++) {
      stdout.write("* ");
    }
    print("\n");
  }
  stdout.write("hello world");
}
