import java.util.Scanner;

public class Question10082 
{
    
    public static void main(String[] args)
    {
        
        String x;
        int y;
        char[] chararray = {'W','E','R','T','Y','U','I','O','P','[',']'};
        char[] chararray2 = {'S','D','F','G','H','J','K','L',';'};
        char[] chararray3 = {'X','C','V','B','N','M',',','.','/'};
        char[] chararray4 = {'1','2','3','4','5','6','7','8','9','0','-','='};
        
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {

            x = num1.nextLine();
            
            for(int count = 0; count < x.length(); count++)
            {
                y = 0;
                
                if(x.charAt(count) == (char) 92)
                {
                    System.out.print(chararray[10]);
                    y = 1;
                }
                else if(x.charAt(count) == (char)32 && y == 0)
                {
                    System.out.print(" ");
                    y = 1;
                }
                else if(x.charAt(count) == (char) 39 && y == 0)
                {
                    System.out.print(chararray2[8]);
                    y = 1;
                }
                else
                {
                   for(int a = 0; a < chararray.length && y == 0; a++)
                   {
                       if(x.charAt(count) == chararray[0])
                       {
                           System.out.print("Q");
                           y = 1;
                       }
                           
                       else if(x.charAt(count) == chararray[a])
                       {
                           System.out.print(chararray[a-1]);
                           y = 1;
                       }   
                   }
                   
                   for(int b = 0; b < chararray2.length && y == 0; b++)
                   {
                       if(x.charAt(count) == chararray2[0])
                       {
                           System.out.print("A");
                           y = 1;
                       }
                           
                       else if(x.charAt(count) == chararray2[b])
                       {
                           System.out.print(chararray2[b-1]);
                           y = 1;
                       }
                   }
                   
                   for(int c = 0; c < chararray3.length && y == 0; c++)
                   {
                       if(x.charAt(count) == chararray3[0])
                       {
                           System.out.print("Z");
                           y = 1;
                       }
                           
                       else if(x.charAt(count) == chararray3[c])
                       {
                           System.out.print(chararray3[c-1]);
                           y = 1;
                       }
                   }
                   
                   for(int d = 0; d < chararray4.length && y == 0; d++)
                   {
                       if(x.charAt(count) == chararray4[0])
                       {
                           System.out.print("`");
                           y = 1;
                       }
                           
                       else if(x.charAt(count) == chararray4[d])
                       {
                           System.out.print(chararray4[d-1]);
                           y = 1;
                       }
                   }
                }
            }
            
           System.out.println(""); 
        }
        
    }
    
}
