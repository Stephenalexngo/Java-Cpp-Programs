import java.util.*;

public class Question10107
{
    public static void main(String[] args)
    {
        ArrayList<Integer> listnum = new ArrayList<>();
        int num;
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {
           num = num1.nextInt();
           
           listnum.add(num);
           Collections.sort(listnum);
           
           if(listnum.size()%2 == 1)
                System.out.println(listnum.get(listnum.size()/2));
           else
                System.out.println((listnum.get((listnum.size()-1)/2)+listnum.get(listnum.size()/2))/2);
        }
    }
}