import java.util.Scanner;

public class Question10055 
{

   public static void main(String[] args)
   {
       
       long i,j,x;
       x = 0;
       
       Scanner num1 = new Scanner(System.in);
       
       while(num1.hasNext())
        {
 
           i = num1.nextLong();
           j = num1.nextLong();
            
              if(i < j)
                  x = Math.abs(j) - Math.abs(i);
              
              else if(i > j)
                  x = Math.abs(i) - Math.abs(j);

           System.out.println(Math.abs(x));
           x = 0;
                 
        }
       
   }
    
}
