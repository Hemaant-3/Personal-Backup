// import 'dart:convert';

/*
Basic operation and description of List array.
*/
void main() {
  var myList = [];
  myList.add(55);
  myList.add(23);
  myList.add('hemant');
  myList.add('monu');
  myList.insert(4, 12);
  myList.insertAll(4, [14, 35, 25]);
  myList.addAll([12, 35, 45]);
  print('$myList');

  myList[2] = 100; // updating the list of myList
  myList[3] = 200;
  print("\nupdated list is $myList");

  myList.replaceRange(
      0, 4, [28, 14, 05, 25, 650, 31, 56]); //replacing by rnage item
  print("\n replace list is $myList");

  myList.removeAt(0); //removing by index number

  print('\nThe value of list after removing the list element ${myList}');

  myList.removeLast(); //removing last element
  print('\nThe value of list after removing the list element ${myList}');
  myList.removeRange(1, 5); //removing by range
  print('\n\nThe value of list after removing the list element ${myList}');
}
