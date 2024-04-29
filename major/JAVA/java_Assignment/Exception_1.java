import java.util.*;
import java.lang.Exception;
public class Exception_1{                                                                                                                     
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in); 
        System.out.println("Enter the choice: ");
        int ch = sc.nextInt();
        if{

            try{
                System.out.println("Enter the  size of array: ");
                int a = sc.nextInt();
                                        
                int arr[]=new int [a];
                System.out.println("enter the input of the array: ");
                for(int i=0;i<a;i++){
                    arr[i]=sc.nextInt();
                }
                System.out.println("The array is: ");
                for(int i=0;i<a;i++){
                    System.out.println(arr[i]+ " ");
                }
                System.out.println("Enter the index: ");
                int indx = sc.nextInt();
                    
                if(indx>=a){
                    throw  new Exception();
                }
                else{
                    System.out.println("Write right input");
                    System.out.println("The element is: "+ arr[indx]);
                }
                
            }
            catch(Exception e ){
                System.out.println("The unchecked Exception!");
            }
        }
        else{
            System.out.println("Enter the integer: ");
            char n=
        }
        
    }                                                                                                      
}

