
import java.util.Scanner;

public class B_TicketGateLog {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        String S = sc.nextLine();
        int c = 0;
        for(int i = 0; i<S.length()-1; i++){
            
            if(S.charAt(i)==S.charAt(i+1)){
                c++;
            }
                    
        }
        if(S.charAt(S.length()-1)=='i'){
            c++;
        }
        if(S.charAt(0)=='o'){
            c++;
        }
            
        if(S.length()==1&&(S.charAt(0)=='i'||S.charAt(0)=='o')){
            System.out.println(1);
        }else {
            System.out.println(c);
        }

        
      
       

        //System.out.println(output);
        sc.close();
    }
}
