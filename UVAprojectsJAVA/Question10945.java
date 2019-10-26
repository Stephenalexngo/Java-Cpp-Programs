import java.util.*;

public class Question10945 {

    public static void main(String[] args) {
        
        String x;
        Scanner num1 = new Scanner(System.in);
        
        do
        {
            x = num1.nextLine();
            
            if(!x.equals("DONE"))
            {
                x = x.toUpperCase();
                x = x.replaceAll("[,. ?!]", "");      
                StringBuilder sb = new StringBuilder(x);
            
                if(sb.toString().equals(sb.reverse().toString()))
                   System.out.println("You won't be eaten!");
                else if(!(sb.toString().equals(sb.reverse().toString())))
                   System.out.println("Uh oh..");
                else
                   System.out.println("You won't be eaten!");
            }
        }while(!x.equals("DONE")); 
    }
}