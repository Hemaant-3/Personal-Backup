import 'dart:ffi';

void main() {
  /*
  List  is used as array in dart language
  */
  List logTypes = [];
  logTypes.add("WARNING");
  logTypes.add("ERROR");
  logTypes.add("INFO");
  // iterating across list
  // for (String type in logTypes) print(type);
  // logTypes.remove("INFO");
  // print(logTypes.length);
  /*-
In set represent a collection of object 
which only occur once
  */
  Set Number = new Set();
  Number.add(12);
  Number.add(121); // in this iteration the 121 print once a time.
  Number.add(121);
  Number.add(121);
  Number.addAll([1, 2, 3, 5]);
  // for (var a in Number) print(a);
  // print(Number.length); // do not count the length of repeted object(121);
  Set nub = new Set.from([12, 55, 46]);
  print("default implementation: ${nub.runtimeType}");
  for (var b in nub) print(b);
}
