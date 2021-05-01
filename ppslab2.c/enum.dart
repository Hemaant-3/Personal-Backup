enum object {
  Boy,
  Girl,
  man,
  women,
}
main(List<String> args) {
  print(object.values);
  object.values.forEach((v) => print('values: $v, index: ${v.index}'));
  print('man  :${object.Boy}, index:${object.man.index}');

  print('myfav: ${object.values[3]}');
}
