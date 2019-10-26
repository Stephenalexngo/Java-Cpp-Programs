import java.util.*;

public class Question11805 
{
    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int tester,n,k,p;
        
        while(input.hasNext())
        {
            tester = input.nextInt();
            
            for(int x = 1; x < tester+1; x++)
            {
                n = input.nextInt();
                k = input.nextInt();
                p = input.nextInt();

                if(n < p)
                {
                    if(p%n == 0)
                        System.out.println("Case " + x + ": " + k);
                    else
                    {
                        if((p%n)+k <= n)
                            System.out.println("Case " + x + ": " + ((p%n)+k));
                        else
                            System.out.println("Case " + x + ": " + ((p%n)+k - n));
                    }
                }
                else
                {
                    if(k+p > n)
                        System.out.println("Case " + x + ": " + (k+p - n));
                    else
                        System.out.println("Case " + x + ": " + (k+p));
                }
            }
        }
    } 
}
