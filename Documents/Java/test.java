public class test{
    private String courseName;

    public void setcourseName(String name){
        courseName=name;
        }
    public String getCourseName(){
        return courseName;
    }
    public void displayMessage(){
        System.out.printf(getCourseName());
    }
    public static void main(String[] args) {
        test o=new test();
        o.setcourseName("java\n");
        o.getCourseName();
        o.displayMessage();
    }
}