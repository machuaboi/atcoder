import java.util.Scanner;

public class A_Thermometer {
     public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        double X = sc.nextDouble();
        
        if(X>=38.0){
            System.out.println(1);
        }else if(X<38.0&&X>=37.5){
            System.out.println(2);
        }else{
            System.out.println(3);
        }
            
      

        //System.out.println(output);
        sc.close();
    }

}
