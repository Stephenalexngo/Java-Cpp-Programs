import java.util.*;

public class Question10327
{
    public static void main(String[] args)
    {
        int num,tester,temp,flip;
        boolean isSorted;
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {
           num = num1.nextInt();
           ArrayList<Integer> listnum = new ArrayList<>();
           
           for(int x = 0; x < num; x++)
           {
               listnum.add(num1.nextInt());
           }

           tester = 0;
           flip = 0;
           while(tester == 0)
           {
             isSorted = true; 
             
               for(int y = 0; y < listnum.size()-1; y++)
               {
                   if(listnum.get(y) > listnum.get(y+1))
                   {
                       temp = listnum.get(y);
                       listnum.set(y, listnum.get(y+1));
                       listnum.set(y+1, temp);
                       isSorted = false;
                       flip++;
                   }
               }
               
               if(isSorted)
               {
                   tester = 1;
               }
           }
           
            System.out.println("Minimum exchange operations : " + flip);
        }
    }
}
