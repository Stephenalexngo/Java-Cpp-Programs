import java.util.Scanner;

public class Question10018
{
    
    public static void main(String[] args)
    {
        
        int count;
        long reverse,x,a,b,p,rev;
        reverse = 0;

        Scanner inp = new Scanner(System.in);
        
        x = inp.nextInt();
        
         for(int i = 1; i <= x; i++)
         {
             count = 0;
             a = inp.nextInt();
             
             do
             {
               b = a;
               rev = 0;
               
                while(b != 0)
                {
                   reverse = reverse * 10;
                   reverse = reverse + (b%10);
                   b = b/10;
                }
               
               a+=reverse;
               reverse = 0;
               count++;
               
               p = a;
               
                while(p != 0)
                {
                   rev = rev * 10;
                   rev = rev + (p%10);
                   p = p/10;
                }
               
             }while(rev!=a);
             
             System.out.println(count + " " + a);
             
         }
        
    }
    
}

