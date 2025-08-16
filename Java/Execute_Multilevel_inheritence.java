class First {
    protected int a;

    public First() {
        a = 4;
    }

    void out_A() {
        System.out.println("A = " + a);
    }
}

class Second extends First {
    protected int b;

    public Second() {
        b = 8;
    }

    void out_B() {
        System.out.println("B = " + b);
    }

    void high() {
        if (a > b) {
            System.out.println("A is high");
        } else {
            System.out.println("B is high");
        }
    }
}

class Third extends Second {
    private int c;

    public Third() {
        c = 12;
    }

    void out_C() {
        System.out.println("C = " + c);
    }

    void highest() {
        if (a > b && a > c) {
            System.out.println("A is highest");
        } else if (b > a && b > c) {
            System.out.println("B is highest");
        } else {
            System.out.println("C is highest");
        }
    }
}

class Execute_Multilevel_inheritence {
    public static void main(String[] args) {
        Third obj = new Third();
        obj.out_A();     
        obj.out_B();     
        obj.out_C();     
        obj.high();      
        obj.highest();  
    }
}