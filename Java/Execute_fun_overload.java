class Example
{
    private int a,b,c;
    private float x,y,z;
    public void in(int p,int q){
        a = p;
        b = q;
    }
    public void in(float p, float q){
        x = p;
        y = q;
    }
    void sum(){
        c = a + b;
        System.out.println("Sum of integers :- "+ c);
        z = x + y;
        System.out.println("Sum of float :- "+ z);
    }
}
public class Execute_fun_overload {
   public static void main(String[] args) 
    {
       Example obj = new Example();
int p = 6;
int q = 12;
        
float  s = 6.46f;
float t = 68.6f; 
        
obj.in(p,q);
obj.in(s,t);
obj.sum();        
    }    
}