class Factorial{
    private int num,i,fact;
    public Factorial(){
        fact = 1;
    }
    public Factorial(int x){
        fact = 1;
        num = x;
    }
    void output(){
        for(i = 1;i<=num;i++){
            fact = fact * i;
        }
        System.out.println("The factorial of " + num + " is " + fact);
    }
}

public class Execute_overloading{
    public static void main(String[] args)
    {
        Factorial obj = new Factorial(5);
        obj.output();
    }
}