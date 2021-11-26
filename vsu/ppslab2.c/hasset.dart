/*
identifier is nothing it is variable name
hasset is set of unordered data or object

in set there is no repetating object type is counted but in list 
it is counted.
*/
import 'dart:collection';

main(List<String> args) {
  Set f = new HashSet();
  f.add(23);
  f.add(34);
  f.add(45);
  f.addAll([28, 45, 36, 87]);
  for (var mem in f) print(mem);
  // unexpected order of object
  print('${f.runtimeType}');
  f.remove(87);
  f.remove(36);

  print('number after removing ${f}');
  f.clear();
  print('number after removing ${f}');
}
