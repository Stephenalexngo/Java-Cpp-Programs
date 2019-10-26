import java.util.*;

public class Question11044
{
    
    public static void main(String[] args)
    {
        int x,row,col;
        
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {
            x = num1.nextInt();
            
            for(int a = 0; a < x; a++)
            {
                row = num1.nextInt();
                col = num1.nextInt();
                
                while(row % 3 == 1 || col % 3 == 1)
                {
                    if(row % 3 == 1)
                        row -= 1;
                    else
                        col -= 1;
                }
                
               System.out.println((row/3)*(col/3)); 
            }
        }
    }
}