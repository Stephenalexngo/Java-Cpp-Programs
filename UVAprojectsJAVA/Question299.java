import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class Question299
{
    
    public static void main(String[] args)
    {
        int x,y,swap, tswap = 0; 
        ArrayList<Integer> list = new ArrayList<>();
        
        Scanner inp = new Scanner(System.in);
        
        x = inp.nextInt();
        
        for(int i = 0; i < x; i++)
        {
           y = inp.nextInt();
           
           for(int j = 0; j < y; j++)
           {
               list.add(inp.nextInt());
           }
           
           do
           {
               swap = 0;
               for(int l = 0; l < list.size() - 1; l++)
               {
                   if(list.get(l) > list.get(l+1))
                   {
                       Collections.swap(list, l, l+1);
                       swap++;
                   }
               }
             tswap = tswap + swap;  
           }while(swap != 0);
           
           System.out.println("Optimal train swapping takes " + tswap + " swaps.");
           tswap = 0;
           
           list.removeAll(list);

        }
        
    }
    
}

