/*
hasmap is table based imlementation 
and using hasmap key, values and it's order is umexpected
*/
import 'dart:collection';

main(List<String> args) {
  HashMap g = new HashMap();
  g['hemant'] = 'HR';
  g['monu'] = 'Employee';
  g['Sugar'] = 'sweet';
  g['Ram'] = 'Teacher';
  //now adding vlaues in hasmap using multiple entries
  g.addAll({
    'Veg': 'potato',
    'Nonveg': 'Chicken',
  });
  // we print it's get unexpected order of object values.
  print(g);
  print("after removing elements from hasmap");
  g.remove('monu');
  g.remove('veg');
  g.remove('hemant');
  g.forEach((k, v) => print("${k}:${v}"));
}
