import java.util.Scanner;

class A_ABC400Party{
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        
        if(400%A==0){
            System.out.println(400/A);
        }else{
            System.out.println(-1);
        }
            
      

        //System.out.println(output);
        sc.close();
    }

    
}