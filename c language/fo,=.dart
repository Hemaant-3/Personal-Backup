//string code unit poropertay
import 'dart:ffi';

/*
Iterating of skii values of given string.
*/
void main(List<String> args) {
  String a = 'Aemant';
  print(a.codeUnits);
  String b = 'Hello world';
  for (int i = 0; i < b.length; i++)
    print("the code unit/skii values of ${b[i]} is ${b.codeUnitAt(i)}");

  /*
Iteration of string using function 'rune'
    */
  String s = "Hemant Kumar Chaudhary";
  s.runes.forEach((int rune) {
    var chart = new String.fromCharCode(rune);
    print(chart);
  });
  print(s.codeUnitAt(0));
}
