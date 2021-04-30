void main() {
  /* Using of maps functionalities
  */
  var a = {
    'name': 'hemant',
    'section': 'e2',
  };
  a['Monu'] = 'sheela';
  a['house'] = 'furniture';
  print(a);

  a.forEach((v, k) => print('${v}:${k}'));

  /*
using key as function
  */
  // a.clear(); // clearing the elements from Map.
  // a.remove("name"); //removing of elements by using keys
  print("\n\n ${a.keys}");
  // printing the values

  print('\n\n ${a.values}');
  print(a.length);

  print("\n ${a.isEmpty}");
}
