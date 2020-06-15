class Test{
    int a;int b;
    Test(int i ,int j){
        a=i;
        b=j;
    }

    boolean equal(Test o){
        if (o.a==this.a&&o.b==this.b){
            return true;
        }
        else{
            return false;
        }
    }
}
class passobj{
    public static void main(String args[]){
        Test obj1=new Test(100,50);
        Test obj2=new Test(100,20);
        Test obj3=new Test(12,20);
        System.out.println(obj1.equal(obj2));
        System.out.println(obj2.equal(obj3));
    }
}