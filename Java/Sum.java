

 

public class Sum {
    private int num1,num2;
    public void input(int x,int y){
        num1 = x;
        num2 = y;
    }
    public void output(){
        int sum = num1 + num2;
        System.out.println( + sum);
    }
   public static void main(String[] args) 
    {
        int a,b;
        a = 9;
        b = 1;
        Sum obj = new Sum();
        obj.input(a,b);
        obj.output();
    }
}