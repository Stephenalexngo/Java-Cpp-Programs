import java.util.*;

public class Question12279
{
    
    public static void main(String[] args)
    {
        int n,nottreat = 0, treat = 0, x = 1;
        
        Scanner num1 = new Scanner(System.in);
        
        ArrayList<Integer> list = new ArrayList<Integer>();
        
        do
        {
            n = num1.nextInt();
            
            if(n != 0)
            {
                for(int a = 0; a < n; a++)
                {
                    list.add(num1.nextInt());
                }
                
                for(int b = 0; b < n; b++)
                {
                    if(list.get(b) == 0)
                        nottreat++;
                    else
                        treat++;
                }
                
                for(int c = n - 1; c > -1; c--)
                {
                    list.remove(c);
                }
                
                System.out.println("Case " + x + ": " + (treat - nottreat));
            }
            
            nottreat = 0;
            treat = 0;
            x++;
        }while(n != 0);
        
    }
    
}