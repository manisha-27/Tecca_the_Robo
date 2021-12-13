import java.util.Scanner;

public class ArraySimpleSorting {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] nums=new int[n];
        for (int i = 0; i < n; i++) {
            nums[i]= sc.nextInt();
        }
        for (int i = 0; i<n; i++) {
            if(i<n-1 && nums[i]<nums[i+1]){
                continue;
            }else{
                System.out.print(nums[i]+" ");
            }
        }
    }
}
