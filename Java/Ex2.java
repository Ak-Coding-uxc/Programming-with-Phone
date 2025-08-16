public class Ex2 {
   public static void main(String[] args){
       
       String p = "A,B,C,D";
       
       String [] s = p.split(",");
       
       for(int i = 0; i<s.length;i++){
         System.out.println(s[i]);
       }
   }
}