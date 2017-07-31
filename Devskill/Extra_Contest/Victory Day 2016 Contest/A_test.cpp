import java.math.BigInteger;
import java.util.Scanner;

class Main
{

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        BigInteger t1,average,upper,sum,y,k,x;
        int n=sc.nextInt();
        while(n-->0)
        {
            x=sc.nextBigInteger();
            y=sc.nextBigInteger();

            t1=new BigInteger("2");
            //t2=new BigInteger("1");

            // perform add operation on bi1 using bi2
            sum = x.add(y);
            upper=sum.divide(t1);

            System.out.println(upper);
            //if(n>0) System.out.println();

        }

    }

}
