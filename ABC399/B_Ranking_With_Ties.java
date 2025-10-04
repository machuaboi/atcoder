import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class B_Ranking_With_Ties {
       public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        ArrayList<Integer> P = new ArrayList<>();
        ArrayList<Integer> ranking = new ArrayList<>();
        // int[] ranking = new int[N];
       
      
        for(int i = 0; i<N; i++){
           P.add(sc.nextInt());
           ranking.add(0);
        }
        int k = 1;
        int count =0;
        while(true){
            if(Collections.max(P)==-1){
                break;
            }else{
                if(P.lastIndexOf(Collections.max(P))!=P.indexOf(Collections.max(P))){
                    int n = P.lastIndexOf(Collections.max(P));
                    P.set(n,-1);
                    ranking.set(n,k);
                    count++;
                }else{
                    int n = P.lastIndexOf(Collections.max(P));
                    // System.out.println(n+"<-n");
                    P.set(n,-1);
                    ranking.set(n,k);    
                    
                    if(count==0){
                        k+=1;
                    }else{
                        k+=count+1;
                        count =0;
                    }
                                
                                
                }
               
            }   
            

        }
      //  System.out.println(ranking);

       

        for(int m : ranking){
            System.out.println(m);
        }

    }
}
