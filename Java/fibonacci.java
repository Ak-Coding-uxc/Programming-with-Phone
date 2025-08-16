import java.util.Scanner;
public class fibonacci {
    
   public void fibo (int num,int a,int b)
    {
       int temp = 0;
      int i =1;
        while(i <= num){
           System.out.println(a);
           temp = a;
           a = b; 
           b = temp + b;  
           i++;
        }
    }  
    
    public static void main(String[] args) {
    Scanner n = new Scanner(System.in);
        System.out.println("Enter how many element user want to print in fibonacci series:- ");
        int num = n.nextInt();
        
        int a = 0;
        int b = 1;
        fibonacci obj = new fibonacci();
         obj.fibo(num,a,b);
    }
}