class Math{
// void add(int a,int b){
//     System.out.println(a+b);
// }
// void add(int a, int b,int c){
//     System.out.println(a+b+c);
// }
void add(byte a,byte b ,byte c){
    System.out.println(a+b+c);
}
}
public class Over{
    public static void main(String[] args) {
     Math homo=new Math();
    // homo.add(2,3);
     homo.add((byte)4,(byte)5,(byte)6);//expilicit casting
     homo.add((byte)3.4,(byte)2.3,(byte)1.1);//expilicit casting
     byte b = (byte)567;
     System.out.println(b);
    }
}