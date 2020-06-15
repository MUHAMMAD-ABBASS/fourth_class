package Abbas;
class student{
    String name;
    int age;
}
class Example{
    void Display(student s1, student s2){
      System.out.println(s1.name+"\n"+s1.age);
      System.out.println(s2.name+"\n"+s2.age);
    }
}
public class Object {
    
  public static void main(String[] args) {
     student obj =new student();
     obj.name="Abbas";
     obj.age=20;
     student obj1=new student();
     obj1.name="Tanveer";
     obj1.age=69;

     Example hompo=new Example();
     hompo.Display(obj,obj1);      
  }
}