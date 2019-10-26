import java.util.*;

public class Question10035
{
    
    public static void main(String[] args)
    {
        
        int x,y,solox,soloy,count = 0,z = 0,carry = 0;
        
        Scanner num1 = new Scanner(System.in);

        do
        {
            x = num1.nextInt();
            y = num1.nextInt();
            
            if(x == 0 && y == 0)
                z = 1;
            else if(x == 0 || y == 0)
                System.out.println("No carry operation.");
            else
            {
                while(x != 0 || y != 0)
                {
                    solox = x % 10;
                    soloy = y % 10;
                    x = (x - solox) / 10;
                    y = (y - soloy) / 10;
                    
                      if(Math.abs(solox) + Math.abs(soloy) + carry > 9)
                      {
                          count++;
                          carry = 1;
                      }
                      else
                          carry = 0;
                }
                
                if(count == 0)
                   System.out.println("No carry operation.");
                else if(count == 1)
                   System.out.println(count + " carry operation.");
                else
                   System.out.println(count + " carry operations.");
                
                x = 1;
                count = 0;
                carry = 0;
            }
            
        }while(z != 1);
    }
    
}

