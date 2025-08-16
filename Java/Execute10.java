import java.io.*;
public class Execute10 {
   public static void main(String[] args) 
    throws IOException
    {
       BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
       System.out.println("Enter the String");
       String s = br.readLine();
       System.out.println(s);
   } 
}