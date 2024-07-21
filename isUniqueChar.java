import java.util.*;
// an algo to check if a string has all unique characters, what if you cannot use additional ds
//#1 trying solve using bit manipulation
public class isUniqueChar{
    public static void main(String[] args) {
        System.out.println(isUniqueChar("Hars"));
    }
    public static boolean isUniqueChar(String str){
        int checker=0;
        for(int i=0;i<str.length();i++){
            int val=str.charAt(i) - 'a';
            if((checker& (1<<val)) >0)
                return false;
            checker |= (1<< val);
        }
        return true;
    }
}
