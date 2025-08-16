import java.util.Scanner;
class DigitSum{
    private int sum,num;
    
    public DigitSum(){
        sum = 0;
    }
    
    void input(int x){
        num = x;
    }
    
    void output(){
        int z = num;
        while(num != 0){
            sum = sum + num %10;
            num= num / 10;
        }
        System.out.printf("The sum of digit of %d  is %d\n",z,sum);
    }
}
public class Add {
    public static void main(String[] args){
        Scanner obj = new Scanner(System.in);
        System.out.print("Enter number:- ");
        int n = obj.nextInt();
        
        DigitSum dobj = new DigitSum();
        dobj.input(n);
        dobj.output();
    }
    
}