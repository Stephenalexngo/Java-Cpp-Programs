import java.util.Scanner;

public class Question10071 
{
    
    public static void main(String[] args)
    {
        
        int i,j,x;
        
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {

            i = num1.nextInt();
            j = num1.nextInt();
            
             x = i * j;
             
            System.out.println(x * 2);
            
        }
        
    }
    
}
