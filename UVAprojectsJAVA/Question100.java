import java.util.Scanner;

public class Question100
{
   
    public static void main(String[] args)
    {
        
        int i,j,count,n,m,x,y,z;
        count = 0;
        y = 0;
        
        Scanner num1 = new Scanner(System.in);

        while(num1.hasNext())
        {  
          i = num1.nextInt();
          j = num1.nextInt();
        
          n = i;
          m = j;
            
           if ( i == 1 && j==1)
           {
               y = 0;
           } 
           else if( i < j)
           {
               for(x = i; x <= j; x++)
                {
                   z = x;
                    while( z != 1)
                    {
                       if(z%2 == 1)
                       {
                         z = 3*z+1;
                         count++;
                       }
                       else
                       {
                         z = z/2;
                         count++;
                       }  
                    } 
                
                    if( y < count)
                    {
                       y = count;
                       count = 0;
                    }
                    else
                       count = 0;
                } 
           }
           else
           {
               for(x = j; x <= i; x++)
                {
                   z = x;
                    while(z != 1)
                    {
                       if(z%2 == 1)
                       {
                         z = 3*z+1;
                         count++;
                       }
                       else
                       {
                         z = z/2;
                         count++;
                       }  
                    }
                
                    if( y < count)
                    {
                       y = count;
                       count = 0;
                    }
                    else
                       count = 0;
                } 

           }
           
           System.out.print(n + " " + m + " ");
           System.out.println(y + 1);
           y = 0;
        
        }
        
    }
    
}
