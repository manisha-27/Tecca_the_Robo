import java.util.Scanner;
import java.lang.Math;

public class SeiveOfEratosthenes {
    public static void sE(int n){
        int m=(int)Math.sqrt(n);
        boolean p[] = new boolean[n];              //by default all the values are taken as false
                      // true == not a prime no.          &&   false == prime no.
        p[0]=true;
        p[1]=true;
        for (int i = 2; i < m; i++) {
            for (int j = i*i; j < n; j++) {
                if(j%i==0)
                    p[j]=true;                              // if a no. gets divisible by any no. mark it as true
            }
        }
        for (int i = 0; i < n; i++) {
            if(p[i]==false){
                System.out.print(i+" ");                    // print all the no. that are false i.e., prime no.
            }    
        }
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        sE(n);
    }
}
