class Students {
/*
Getter and setter
*/
  String name = '';
  int age = 0;
  String get stud_name {
    return name;
  }

  void set stud_name(String name) {
    this.name = name;
  }

  void set stud_age(int age) {
    if (age >= 0) {
      print('age must be greater than 5');
    } else {
      this.age = age;
    }
  }

  int get stud_age {
    return age;
  }
}

/*
Child classes inherit all 
properties and methods except constructors
 from the parent class.
*/
class shape {
  // parent/super class;
  void cal_area() {
    print("Calling calc area defining in the circle");
  }
}

class Circle extends shape {
} // new class from existing class shape(child class)

/*
Multiple inheritance does no0t supported in dart but.
multilevel inheritance supported in dart language.
*/
class root {
  String monu = '';
}

class child extends root {}

class leaf extends child {}

void main() {
  var obj = new leaf(); // using multilevel class
  obj.monu = "this is the constructor of root";
  print(obj.monu);
  // Students s1 = new Students();
  // var s2 = new Students();
  // s1.stud_name = 'Hemant Kumar chaudhary';
  // s1.stud_age = 22;
  // s2.stud_name = 'Hemant';
  // s2.stud_age = 12;
  // print(s1.age);
  // print(s1.name);
  // print(s1.stud_name);
  // print(s1.stud_age);
//   // print(s2.age);
//   var a = new Circle();
//   a.cal_area();
}
