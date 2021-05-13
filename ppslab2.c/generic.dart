/*
a collection can hold heterogenous data type by defalut,
 but in generic we try
to acheive Homogenous data type.

for iterating the list,queue, set.
syntax== for(data_type local_var in  _list name_) print(local var)
*/
import 'dart:collection';
import 'dart:io';

void main(List<String> args) {
  List<String> g = [];
  g.add("Hemant");
  g.add('Monu');
  g.add('23');
  // g.add(45);// Now we can't host int data type in Generic
  //becoz it's created string data types.
  // print(g);
  // string iterating the modes.
  // for (String a in g) print(a); // iterating var in collection
  Set<int> c = new Set<int>(); //as well set for work
  c.add(908);
  c.add(123);
  c.add(45);
  c.add(54);
  // for (int a in c) print(a);
  // stdout.write(c); // writing of program without spacing line.
/*
For Generic queue
*/
  Queue<int> mu = new Queue<int>();
  mu.add(28);
  mu.add(52);
  mu.add(98);
  mu.add(78);
  mu.add(32);
  mu.add(52);
  // print(mu.runtimeType);
  // stdout.write(mu);
  // for (int a in mu) print(a);
  /*
Generic Map [values and key pair] in map
  */
  Map<String, int> my = new Map<String, int>();
  my.addAll({'Hemant': 28, 'Monu': 13});
  print(my);
  my.forEach((key, value) => print('$key : $value'));
}
