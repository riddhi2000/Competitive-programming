/* package codechef; // don't place package name! */

import java.math.BigInteger;
import java.util.Scanner;
 
public class Main{
 
    // Driver method
    public static void main(String args[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();

        
        while(t > 0){
            BigInteger n = sc.nextBigInteger();
            BigInteger m = sc.nextBigInteger();

            BigInteger low=BigInteger.valueOf(1);
            BigInteger ans=BigInteger.valueOf(-1);
            Long l = new Long(10000000000L);
            BigInteger high=BigInteger.valueOf(l);
            if(high.compareTo(n) > 0)
                high=n;
            int r=0;
            
            while(r >= 0){
                BigInteger mid=low.add(high);
                mid=mid.divide(BigInteger.valueOf(2));


                BigInteger x=mid.multiply(mid.add(BigInteger.valueOf(1)));
                x=x.divide(BigInteger.valueOf(2));
                r=x.compareTo(m);
                if(r >= 0){
                    ans=mid;
                    high=mid.subtract(BigInteger.valueOf(1));
                }
                else{
                    low=mid.add(BigInteger.valueOf(1));
                }
                r=high.compareTo(low);

            }

            System.out.println(ans);
            t--;

        }
    }
}