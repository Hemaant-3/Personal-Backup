/*
map is a simple key/ value of pair
it is dynamic in nature
*/
import 'dart:collection';

main(List<String> args) {
  var details = new Map();
  details['e-mail'] = 'hemantchaudhary@gmail.com';
  details['password'] = 'admin@123';
  // print(details);
  /*
  Queue is a collection that can be manupilated at both ends.
  first in, first out.
  */
  Queue queue = new Queue();
  queue.addAll([28, 76, 45, 65]);
  print('default implementation${queue.runtimeType}');
  print(queue);
  queue.addFirst(12);

  print(queue);
  queue.addLast(28);

  print(queue);
}
