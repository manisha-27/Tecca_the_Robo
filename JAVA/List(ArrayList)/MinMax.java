// Output:
// 6
// 2 5 2 5 7 4
// Input:
// 2 7 2 5 4 5 

  
import java.util.*;

class HelloWorld {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        List<Integer> list=new ArrayList<>();
        int n=sc.nextInt();
        for(int i=0;i<n;i++){
            int a=sc.nextInt();
            list.add(a);
        }
        Collections.sort(list);
        int left=0;
        int right=n-1;
        while(left<right){
            System.out.print(list.get(left)+" "+list.get(right)+" ");
            left++;
            right--;
        }
        if(n%2!=0){
            System.out.print(list.get((left+right)/2));
        }
        // System.out.println(list);
    }
}
