import java.util.Scanner;
class Fact{
    int fact;
    int i;
   public Fact(){
       fact = 1;
   } 
    public void ans(int n){
        for(i = 1; i <= n;i++){
           fact = fact * i; 
        }
        System.out.printf("The factorial of %d is %d",n,fact);
    }
    
}
public class Eee {
    public static void main(String[] args)
    {
        int m;
        Scanner sc = new Scanner(System.in);
        Fact obj = new Fact();
        System.out.print("Enter number:- ");
        m = sc.nextInt();
        obj.ans(m);
    }    
}