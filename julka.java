import java.util.*;
import java.math.BigInteger;


public class Main {
    public static void main(String args[]) {
        
        Scanner scanner = new Scanner(System.in);
        while(scanner.hasNext() ){
        BigInteger total = new BigInteger(scanner.next());
        BigInteger more = new BigInteger(scanner.next());
        BigInteger natalia = getValue(total, more);
        BigInteger klaudia = natalia.add(more);
        System.out.println(klaudia);
         System.out.println(natalia);
        }
       
    }
    
    public static BigInteger getValue(BigInteger total, BigInteger more){
       return total.subtract(more).divide(BigInteger.valueOf(2));
    }
}