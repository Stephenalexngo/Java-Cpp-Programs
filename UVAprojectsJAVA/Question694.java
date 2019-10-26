import java.util.*;

public class Question694
{
    
    public static void main(String[] args)
    {
        
        int A,limit,numterms,CASE=1,b;
        
        Scanner num1 = new Scanner(System.in);
        
        do
        {
            A = num1.nextInt();    
            limit = num1.nextInt();
            numterms = 0;
            b = A;
            
            if(A > 0 || limit > 0)
            {
                while(A != 1 && A <= limit && A > 0)
                {
                    if(A%2 == 0)
                    {
                        A = A/2;
                        numterms++;
                    }
                    else
                    {
                        A = A * 3 + 1;
                        numterms++;
                    }                                    
                }
                
                if(A == 1)
                    numterms++;
                
                System.out.println("Case " + CASE + ": A = " + b + ", limit = " + limit + ", number of terms = " + numterms);
                CASE++; 
            }
        }while(A > 0 || limit > 0);
    }
}
