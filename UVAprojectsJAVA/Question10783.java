import java.util.Scanner;

public class Question10783
{
    
    public static void main(String[] args)
    {
        
        int x,i,a,b,count;
        
        count = 0;
        
        Scanner inp = new Scanner(System.in);
        
        x = inp.nextInt();
        
         for(i = 1; i <= x; i++)
         {
             
             a = inp.nextInt();
             b = inp.nextInt();
             
              if(a <= b)
              {
                  while(a <= b)
                  {
                     if(a%2 == 0)
                         a++;
                     else
                     {
                         count = count + a;
                         a++;
                     }
                  }
              }
              
            System.out.println("Case " + i + ": " + count);
            count = 0;
             
         }
         
    }
    
}

