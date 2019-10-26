import java.util.Scanner;

public class Question10921
{
   
    public static void main(String[] args)
    {
        
        String x;
        
        Scanner num1 = new Scanner(System.in);

        while(num1.hasNext())
        {
            x = num1.nextLine();

            for(int a = 0; a < x.length(); a++)
            {
                switch(x.charAt(a))
                {
                    case 'A':
                    case 'B':
                    case 'C':
                         System.out.print("2");
                         break;
                    case 'D':
                    case 'E':
                    case 'F':
                         System.out.print("3");
                         break;
                    case 'G':
                    case 'H':
                    case 'I':
                         System.out.print("4");
                         break;
                    case 'J':
                    case 'K':
                    case 'L':
                         System.out.print("5");
                         break;
                    case 'M':
                    case 'N':
                    case 'O':
                         System.out.print("6");
                         break;
                    case 'P':
                    case 'Q':
                    case 'R':
                    case 'S':    
                         System.out.print("7");
                         break;
                    case 'T':
                    case 'U':
                    case 'V':
                         System.out.print("8");
                         break;
                    case 'W':
                    case 'X':
                    case 'Y':
                    case 'Z':    
                         System.out.print("9");
                         break;
                    default:
                         System.out.print(x.charAt(a));
                         break;
                }
            }
            
           System.out.println("");  
        }
    }
}
