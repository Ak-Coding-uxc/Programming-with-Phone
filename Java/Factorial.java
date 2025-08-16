import java.util.Scanner;
public class Factorial {
   static void fact(int num) {
       int fact = 1;
       if(num == 0 || num == 1){
         System.out.println("The factorial of " + num + " is " + fact);  
       }
       
       else{
       for(int i =1; i<= num; i++){
           fact = fact * i;
       }
           System.out.println("The factorial of " + num + " is " + fact);
   }       
   }
    
    public static void main(String[] args)
    {
        Scanner obj = new Scanner(System.in);
        System.out.print("Enter num:- ");
        int num = obj.nextInt();
        
        fact(num);
        
    } 
}