enum object {
  Boy,
  Girl,
  man,
  women,
}
/*
enumeration data types easily acccess the element defined in enum constructor 
as we can access by index values and by their name 
forEach function used to iterate multiple elements,
at once.
*/
main(List<String> args) {
  print(object.values);
  object.values.forEach((v) => print('values: $v, index: ${v.index}'));
  print('man  :${object.Boy}, index:${object.man.index}');

  print('myfav: ${object.values[3]}');
}
