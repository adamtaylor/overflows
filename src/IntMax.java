public class IntMax {
    
    public static void main( String[] args ) {
        
        System.out.println("Integer.MAX_VALUE = " + Integer.MAX_VALUE);
        System.out.println("Integer.MAX_VALUE + 1 = " + (Integer.MAX_VALUE+1));
        System.out.println("Integer.MAX_VALUE + 1 = " + (Integer.MAX_VALUE-1));
        
        System.out.println("");
        
        System.out.println("Integer.MAX_VALUE / Integer.MAX_VALUE = " + (Integer.MAX_VALUE/Integer.MAX_VALUE));
        System.out.println("(Integer.MAX_VALUE + 1) / Integer.MAX_VALUE = " + ((Integer.MAX_VALUE+1)/Integer.MAX_VALUE));
        System.out.println("(Integer.MAX_VALUE - 1) / Integer.MAX_VALUE = " + ((Integer.MAX_VALUE-1)/Integer.MAX_VALUE));
        System.out.println("Integer.MAX_VALUE / (Integer.MAX_VALUE + 1) = " + (Integer.MAX_VALUE/(Integer.MAX_VALUE+1)));
        System.out.println("Integer.MAX_VALUE / (Integer.MAX_VALUE - 1) = " + (Integer.MAX_VALUE/(Integer.MAX_VALUE-1)));
        
    }
    
}