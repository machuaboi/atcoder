import java.util.*;

public class B_SumOfGeometricSeries {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        int X = 0;
        for(int i = 0; i<M+1 ;i++){
            X+=Math.pow(N,i);
        }
        if(Math.pow(10,9)<X){
         X =-1;
        }else{
            System.out.println(X);
        }
        
            
      
        if(X==-1){
            System.out.println("inf");
        }
        //System.out.println(output);
        sc.close();
    }
}
