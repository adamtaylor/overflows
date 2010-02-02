public class FltMax {
    
    public static void main( String[] args ) {
        
        System.out.println("Float.MAX_VALUE = " + Float.MAX_VALUE);
        System.out.println("Float.MAX_VALUE + 1 = " + (Float.MAX_VALUE+1));
        System.out.println("Float.MAX_VALUE + 1 = " + (Float.MAX_VALUE-1));
        
        System.out.println("");
        
        System.out.println("1 / Float.MAX_VALUE = " + (1/Float.MAX_VALUE));
        System.out.println("1+1/ Float.MAX_VALUE = " + ((1+1)/Float.MAX_VALUE));
        System.out.println("Float.MAX_VALUE / Float.MAX_VALUE = " + (Float.MAX_VALUE/Float.MAX_VALUE));
        System.out.println("(Float.MAX_VALUE + 1) / Float.MAX_VALUE = " + ((Float.MAX_VALUE+1)/Float.MAX_VALUE));
        System.out.println("(Float.MAX_VALUE - 1) / Float.MAX_VALUE = " + ((Float.MAX_VALUE-1)/Float.MAX_VALUE));
        System.out.println("Float.MAX_VALUE / (Float.MAX_VALUE + 1) = " + (Float.MAX_VALUE/(Float.MAX_VALUE+1)));
        System.out.println("Float.MAX_VALUE / (Float.MAX_VALUE - 1) = " + (Float.MAX_VALUE/(Float.MAX_VALUE-1)));
        
    }
    
}