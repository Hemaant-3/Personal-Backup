/*
static class refrenced by its class name
it is a apllied on class, field and its member
*/
class StaticMem {
  static int num = 0;
  static dis() {
    print("Calling static function, the value of num is ${num}");
  }
}

/*
The super keyword used parent class's property and methods,
in override
*/
class parent {
  void m1(int a) {
    print("the value of a${a}");
  }

  String msg = "hemant from parent";
}

class child extends parent {
  void m1(int b) {
    print("the value of b ${b}");
    super.m1(13); // using parent properties
    print("${super.msg}");
  }
}

main(List<String> args) {
  // StaticMem.num = 12;
  //initiliaze the static variable
  // StaticMem.dis();
  // invoke the static function
  child a = new child();
  a.m1(12); // calling b function override
}
