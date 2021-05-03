//implementing with interfaces and using class
class printer {
  void print_data() {
    // print("hello");
  }
}

class Consoleprinter implements printer {
  void print_data() {}
}

/*
Now using multiple interfaces to implements and implementation of class
*/
class calculate_total {
  void ret_tot() {}
}

class calculate_discount {
  void ret_disc() {
    // return 502;
  }
}

class calculator implements calculate_discount, calculate_total {
  int ret_tot() {
    return 100;
  }

  int ret_disc() {
    return 200;
  }
}

main(List<String> args) {
  // Consoleprinter cp = new Consoleprinter();
  // cp.print_data();
  calculator c = new calculator();
  print("The gross total is ${c.ret_tot()}");
  print("Discount ${c.ret_disc()}");
}
