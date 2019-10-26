import java.util.Scanner;

public class Question272
{
    
    public static void main(String[] args)
    {
        
        String x;
        int y,i,count;
        count = 0;
        
        Scanner inp = new Scanner(System.in);
        
         while(inp.hasNext())
         {
           x = inp.nextLine();
           
            for(i = 0; i <= x.length()-1; i++)
            {
               if(x.charAt(i) == '"') 
               {
                  if(count == 0)
                  {
                    System.out.print("``");
                    count = 1;
                  }  
                  else
                  {
                    System.out.print("''");
                    count = 0;  
                  }
               }
               else
                  System.out.print(x.charAt(i));
            }
            
           System.out.print("\n"); 
         }
         
    }
    
}

