import java.util.*;

public class Problem450A 
{
    
    public static void main(String[] args)
    {
        int n,m;
        
        Scanner num1 = new Scanner(System.in);
        LinkedList<Child> ll = new LinkedList();
        
        
        n = num1.nextInt();
        m = num1.nextInt();
        
        for(int a = 1; a < n+1; a++)
        {
            ll.add(new Child(a,num1.nextInt()));
        }
        
        while(ll.size() != 1)
        {
            ll.peekFirst().subtractcandies(m);
            
            if(ll.peekFirst().candies <= 0)
                ll.pollFirst();
            else
                ll.addLast(ll.pollFirst());
        }
        
        System.out.println(ll.poll().childname);
            
    }
    
    static class Child
    {
       public Integer childname;
       public Integer candies;
       
       public Child(int childname, int candies)
       {
           this.childname = childname;
           this.candies = candies;
       }
       
       public void subtractcandies(int m)
       {
           this.candies = candies - m;
       }
    }
    
}
