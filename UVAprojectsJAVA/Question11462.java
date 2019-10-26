import java.util.*;

public class Question11462
{
    public static void main(String[] args)
    {
        int num;
        Scanner num1 = new Scanner(System.in);
        
        do
        {
           num = num1.nextInt();
           ArrayList<Integer> listnum = new ArrayList<>();
           
           if(num != 0)
           {
               for(int x = 0; x < num; x++)
               {
                  listnum.add(num1.nextInt());
               }
               
               Collections.sort(listnum);
               
               for(int x = 0; x < listnum.size(); x++)
               {
                   if(x != listnum.size()-1)
                      System.out.print(listnum.get(x) + " ");
                   else
                       System.out.println(listnum.get(x)); 
               }
           }
           
        }while(num != 0);
    }
}
