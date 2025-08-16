
class First{
    protected int a;
    public First(){
        a = 4;
    }
    void out_A(){
        System.out.println("A = "+ a);
    }
}

class Second extends First{
   private int b;
public Second(){
    b = 8;
} 
void out_B(){
    System.out.println("b = " + b);
}  
void high(){
    if( a> b){
    System.out.println("a is high");
    }
    else{
        System.out.println("b is high");
    }
}    
}

public class Exeute_inherit {
    public static void main(String[] args)
    {
        Second obj = new Second();
        obj.out_A();
        obj.out_B();
        obj.high();
    }
}