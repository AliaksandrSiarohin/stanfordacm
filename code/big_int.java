// Java program to find large factorials using BigInteger
import java.math.BigInteger;
import java.util.Scanner;
 
public class Example
{
    // Returns Factorial of N
    static BigInteger factorial(int N)
    {
        // Initialize result
        BigInteger f = new BigInteger("1"); // Or BigInteger.ONE
 
        // Multiply f with 2, 3, ...N
        for (int i = 2; i <= N; i++)
            f = f.multiply(BigInteger.valueOf(i));
 
        return f;
    }
 
    // Driver method
    public static void main(String args[]) throws Exception
    {
        int N = 20;
        System.out.println(factorial(N));
	int a, b;				
	BigInteger A, B;
	a = 54;
	b = 23;
	A  = BigInteger.valueOf(54);
	B  = BigInteger.valueOf(37);
	A  = new BigInteger(“54”);
	B  = new BigInteger(“123456789123456789”);
	A = BigInteger.ONE;
	// Other than this, available constant are BigInteger.ZERO 
	// and BigInteger.TEN
	String str = “123456789”;
	BigInteger C = A.add(new BigInteger(str));
	int val  = 123456789;
	BigInteger C = A.add(BigIntger.valueOf(val)); 
	int x   =  A.intValue();   // value should be in limit of int x
	long y   = A.longValue();  // value should be in limit of long y
	String z = A.toString();  
	if (A.compareTo(B) < 0)  {} // For BigInteger 
	if (A.equals(B)) {}  // A is equal to B
    }
}
