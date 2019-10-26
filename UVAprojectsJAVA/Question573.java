import java.util.*;

public class Question573
{
    
    public static void main (String[] args)
    {
        double H,U,D,F,Height,value,HAC,HAS;
        int day,a,b;

        Scanner num1 = new Scanner(System.in);

        do
        {
           H = num1.nextInt(); // Height of the Well
           U = num1.nextInt(); // The Distance the snail can climb during day
           D = num1.nextInt(); // The Distance the snail slides down during night
           F = num1.nextInt(); // Fatigue factor as Percentage
           day = 1;
           Height = 0;
           a = 2;
           b = 0;
           
           if(H != 0)
           {
               value = (F/100) * U;
               value = Math.round(value*100.00)/100.00;

               while(a == 2)
               {
                   HAC = U + Height;
                   HAC = Math.round(HAC*100.00)/100.00;
                   HAS = HAC - D;
                   HAS = Math.round(HAS*100.00)/100.00;

                   if(HAC > H)
                       a = 0;
                   else if(HAS < 0)
                       a = 1;
                   else
                   {
                       Height = HAS;
                       
                       if(b == 0)
                       {
                           U = U - value;
                           
                           if(U < 0)                              
                           {
                                b = 1;
                                U = 0;
                           }
                       }
                             
                       U = Math.round(U*100.00)/100.00;
                       day++;
                   }      
               }
               
               if(a == 0)
                  System.out.println("success on day " + day);
               else
                  System.out.println("failure on day " + day);
           } 
        }while(H != 0);       
    }
}