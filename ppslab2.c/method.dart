/*
Method over riding suggest that a childern class can
change methods of parents class---
*/
class parent {
  void m1(int a) {
    print("the object is ${a}");
  }
}

class child extends parent {
  void m1(int b)
  // void m1(String b)
  {
    print("the object in child ${b}");
  }
}

/*
on overriding the function of parameter must be match 
otherwise dart will throw an error;
*/
void main(List<String> args) {
  // this is method overridding
  var obj = new child();
  obj.m1(12);
}
