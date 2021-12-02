main(List<String> args) {
  int x = 13;
  int y = 0;
  int z;

  try {
    z = x ~/ y;
  } catch (a) {
    print(a);
  } finally {
    z = y ~/ x;
    print('your code is sucessfully executed ${z}');
  }
}
