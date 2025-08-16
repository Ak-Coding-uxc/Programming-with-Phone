
class Factorial1{
    private int fact,n,i;
    
    public Factorial1(){
        fact = 1;
    }
    
    void input(int x){
        n = x;
    }
    
    void output(){
        for(i =1 ; i <= n; i++)
        fact = fact * i;
        
        System.out.println("The factorial is " + fact);
    }
    
}

public class Execute1 {
  public static void main(String [] args)  
    {
        Factorial1 fobj = new Factorial1();
        
        fobj.input(5);
        fobj.output();
    }   
}