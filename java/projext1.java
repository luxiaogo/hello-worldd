public class projext1 {
    public static void main(String[] args){
        float ans=0;
        for(int i=1;i<=20;i++){
            float temp=1;
            for(int j=1;j<=i;j++){
                temp*=j;
            }
            ans+=1/temp;
        }
        System.out.printf("%.2f ",ans);
        ans=0;
        int i=1;
        do{
            int j=1;
            float temp=1;
            while(j<=i){
                j++;
                temp*=j;
            }
            ans+=1/temp;
            i++;

        }while(i<=20);
        System.out.printf("%.2f",ans);
    }
}
