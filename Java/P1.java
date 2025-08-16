class Box{
    int a;
}
public class P1 {
    public static void main(String[] args){
        Box b1 = new Box();
        Box b2 = b1;
        b1.a = 77;
        b2.a = 8;
        System.out.println(b2.a);
    }
}