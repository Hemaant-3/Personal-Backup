class Car {
  // field
  // String engine = "E102E2";
  // constructor/method/function
  // void disp() {//non paramatrizes function
  //   print(engine);
  Car(String engine) {
    // paramatrized function here we define the function in main
    print(engine);
  }
}

// }
// dart Named construction
class vehic {
  vehic() {
    print("non paramatrized function");
  }
  vehic.m(String engine) {
    /*/
named function in dart by voking
    */
    print("the car engine is ${engine}");
  }
}

main(List<String> args) {
  vehic c2 = new vehic();
  vehic c1 = new vehic.m('1122410');
  // Car c = new Car('ioaio940');
  // Car maruti = new Car('!jkdasj234');
  // maruti.disp();
  // print("The engine model number is ${mahindra.engine}");
  // print("The engine model number is ${maruti.engine}");
}
