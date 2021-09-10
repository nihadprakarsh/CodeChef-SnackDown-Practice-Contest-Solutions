import java.io.IOException;
import java.util.*;
class Snakes
{
    public static void main(String args[]) throws IOException
    {
        Scanner in =new Scanner(System.in);
        int t,j=0;char ch,ch1='B';
        t=in.nextInt();
        while(j<t)
        {
            int n=in.nextInt();
            String s=in.next();int h=0,t1=0,h3=0,h4=0;
            for(int i=0;i<n;i++)
            {
                ch=s.charAt(i);
                if(ch=='H')
                h++;
                if(ch=='T')
                t1++;


            }
            if(t1==h)
            {
                for(int i=0;i<n;i++)
                {
                    ch=s.charAt(i);
                    if(ch!='.')
                    {
                        if((h4%2==0)&&(ch!='H'))
                        h3=1;
                        if((h4%2==1)&&(ch!='T'))
                        h3=1;
                        h4++;

                    }
                }
                if(h3==1)
                System.out.println("Invalid");
                else
                System.out.println("Valid");

            }
            else
            System.out.println("Invalid");
            h=0;t1=0;j++;h3=0;h4=0;

        }
        
        

    }
}