package BasicPrograms;

class Armstrong{
    static boolean isArmstrong(int n){
        int rem=0, sum=0, original=n;
        while(n>0){
          rem = n%10;
          sum+=rem*rem*rem;
          n=n/10;
        }
        return original==sum;
    }
    public static void main(String[] args) {
        for(int i=1;i<1000;i++){
            if(isArmstrong(i))
                System.out.print(i+" ");
        }
    }
}