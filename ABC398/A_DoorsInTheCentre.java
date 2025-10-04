import java.util.Scanner;

class A{
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        int N  = Integer.parseInt(input);
        StringBuilder output = new StringBuilder();
        if(N%2==0){
            //even
            for(int i = 0; i<N;i++){
                output.append("-");
            }
            output.setCharAt(N/2-1,'=');
            output.setCharAt(N/2,'=');
            
           
        }else{
            for(int i = 0; i<N;i++){
                output.append("-");
            }
            output.setCharAt(N/2,'=');
            
        }

        System.out.println(output);
        sc.close();
    }

    
}