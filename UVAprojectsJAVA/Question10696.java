import java.util.*;

public class Question10696
{
    
    public static void main(String[] args)
    {
        int n;
        
        Scanner num1 = new Scanner(System.in);
        
        do
        {
            n = num1.nextInt();

            if(n != 0)
            {
                if(n >= 101)
                    System.out.println("f91(" + n + ")" + " = " + (n-10));
                else
                    System.out.println("f91(" + n + ")" + " = " + 91);
            }
        }while(n != 0);
        
    }
    
}