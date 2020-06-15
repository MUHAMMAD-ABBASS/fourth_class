import java.util.*;
public class advance_fl{
    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
      int a=  sc.nextInt();
        System.out.println(fact(a));
       

}
public static double fact(int n){
    
    if(n<=1)
    return 1;
    else
    return n*fact(n-1);

}}