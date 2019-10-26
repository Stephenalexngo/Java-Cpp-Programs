import java.util.*;

public class Question11934 
{
    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int a,b,c,d,L,temp;
        
        do
        {
            a = input.nextInt();
            b = input.nextInt();
            c = input.nextInt();
            d = input.nextInt();
            L = input.nextInt();
            int divisible = 0;
            
            if(a != 0 || b != 0 || c != 0 || d != 0 || L != 0)
            {
                for(int x = 0; x < L+1; x++)
                {
                    temp = (a*(x*x)) + (b*x) + c;
                    
                    if(temp % d == 0)
                        divisible++;
                }
                
                System.out.println(divisible);
            }
        }while(a != 0 || b != 0 || c != 0 || d != 0 || L != 0);
    } 
}
