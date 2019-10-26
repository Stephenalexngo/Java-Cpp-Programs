import java.util.*;

public class Question514
{
   
    public static void main(String[] args)
    {
        
        Stack<Integer> firststack = new Stack();
        Stack<Integer> tempostack = new Stack();
        Stack<Integer> finalstack = new Stack();
        Stack<Integer> dbstack = new Stack();
        int x,count,y,z;
        
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {
            x = num1.nextInt();
            count = 0;
            y = 0;
            z = 0;
            
            for(int a = 1; a < x+1; a++)
            {
                dbstack.push(a);
            }
            
            do
            {
               for(int a = 0; a < x; a++)
               {
                  firststack.push(num1.nextInt());
               }
               
               if(firststack.get(0) != 0 && firststack.size() != 1)
               {
                       
               }
                
            }while(firststack.get(0) == 0 && firststack.size() == 1);
        }
        
    }
    
}
