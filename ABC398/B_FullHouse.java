
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Collections;


class B_FullHouse{
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        String str[] = input.split(" ");
       
        ArrayList<Integer> A = new ArrayList<>();
        for(int i = 0;i<7;i++){
            A.add(Integer.parseInt(str[i]));
        }
        //A.sort(null);
        int[] F = new int[13];
        for(int i = 1;i<14;i++){
           F[i-1]=Collections.frequency(A, i);
           
        }

        ArrayList<Integer> more2 = new ArrayList<>();
        for(int i =0; i<13; i++){
           if(F[i]>=2){
            more2.add(F[i]);
           }
        }
      //  more2.sort(null);
        boolean E2 = false;
        for(int i: more2){
            if(more2.size()>1&&i>=3){
                E2 = true;
            }
        }
        if(E2){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }
     

      
        // if(E2&&E3){
        //     System.out.println("Yes");
        // }else{
        //     System.out.println("No");
        // }
   
       
        sc.close();
    }

    
}