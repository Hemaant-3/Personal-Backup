class Student {
  void method() {
    print("this is method 1 ");
  }

  // state is defining by variable in class;
  // fields of class represent object's state
  // ex. var = 12;
//class of behaviour
  void method2() {
    print("this is method 2nd");
  }
}

main(List<String> args) {
  Student s = new Student(); // object
  s.method();
  s.method2();
}
