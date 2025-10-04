import java.util.*;
public class C_Uniqueness {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt();
    sc.nextLine();
    ArrayList<Integer> A = new ArrayList<>();
    for(int i = 1 ; i<N+1; i++){
        A.add(sc.nextInt());
    }
    int maxTemp;
    while(true){
        try{
            // System.out.println(Collections.max(A));
            // System.out.println(A.lastIndexOf(Collections.max(A)));
            // System.out.println(A.indexOf(Collections.max(A)));
            maxTemp = Collections.max(A);
           // System.out.println("maxtemp: "+ maxTemp);
            if(A.lastIndexOf(Collections.max(A)) == A.indexOf(Collections.max(A))){
                System.out.println( A.lastIndexOf(Collections.max(A))+1);
                break;
            }else{
                while (maxTemp == Collections.max(A)){
                    A.set(A.lastIndexOf(Collections.max(A)), 0); 
                  //  System.out.println(A);
                }
                
            }
            if(Collections.max(A)==0){
                System.out.println(-1);
                break;
            }
    
        }catch(NoSuchElementException e){
            System.out.println(-1);
            break;
        }
        
    }
  }   
}
