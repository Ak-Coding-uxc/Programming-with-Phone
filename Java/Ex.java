
public class Ex {
    public static void main(String[] args){
        String s1 = "Hello";
        String s2 = "World";
        System.out.println(s1.concat(" "+ s2));
        System.out.println("The length of s1 is "+ s1.length());// This is method of string class
        int [] ar = new int[5];
        System.out.println(ar.length);//This is Attribute
        System.out.println(s1.startsWith("H"));
        System.out.println(s1.equals(s2));
        System.out.println(s1.toLowerCase());
        System.out.println(s1.toUpperCase());
        
        String s3 = "Hell o W o rl d";
        System.out.println(s3.substring(3,7));
        System.out.println(s3.replace('H','J'));
        System.out.println(s3.charAt(0));
        System.out.println(s3.equalsIgnoreCase(s2));
        
    }
}