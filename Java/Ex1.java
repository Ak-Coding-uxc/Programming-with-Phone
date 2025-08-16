
public class Ex1 {
    public static void main(String[] args){
        String s1 = "Hello";
        String s2 = "Hello";
        String s3 = new String("Hello");
        
        if(s1.equals(s3)){
            System.out.println("True");
        }
        else{
            System.out.println("False");
        }
    }
}