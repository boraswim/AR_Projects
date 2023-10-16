// Bora Sevim
// 1306210013
// NYP 2. ödev 2. madde

package nypodev2;
import java.util.Scanner;

public class NYPOdev2 {

    public static void main(String[] args){
        int i=0;
        Yamuk[] yamuklar= new Yamuk[10];
        Paralelkenar[] paralelkenarlar= new Paralelkenar[10];
        Dikdortgen[] dikdortgenler= new Dikdortgen[10];
        Kare[] kareler= new Kare[10];
        Scanner input=new Scanner(System.in);
      
        while(yamuklar[9]==null||paralelkenarlar[9]==null||dikdortgenler[9]==null||kareler[9]==null){
            System.out.print("Tanimlayacaginiz sekli belirtiniz (Yamuk=y, Paralelkenar=p, Dikdortgen=d, Kare=k):");
            String secim=input.nextLine();
            System.out.println();
            System.out.print("Birinci noktayı giriniz (x,y):");
            int x1=input.nextInt();
            int y1=input.nextInt();
            Nokta n1=new Nokta(x1,y1);
            System.out.println();
            System.out.print("İkinci noktayı giriniz (x,y):");
            int x2=input.nextInt();
            int y2=input.nextInt();
            Nokta n2=new Nokta(x2,y2);
            System.out.println();
            System.out.print("Üçüncü noktayı giriniz (x,y):");
            int x3=input.nextInt();
            int y3=input.nextInt();
            Nokta n3=new Nokta(x3,y3);
            System.out.println();
            System.out.print("Dördüncü noktayı giriniz (x,y):");
            int x4=input.nextInt();
            int y4=input.nextInt();
            Nokta n4=new Nokta(x4,y4);
            System.out.println();
            
        switch(secim){
            case "y":
                Yamuk yamuk=new Yamuk(n1,n2,n3,n4);
                yamuklar[i%10]=yamuk;
                System.out.print("Yamuk");
                break;
                
            case "p":
                Paralelkenar paralelkenar=new Paralelkenar(n1,n2,n3,n4);
                paralelkenarlar[i%10]=paralelkenar;
                System.out.print("Paralelkenar");
                break;
                
            case "d":
                Dikdortgen dikdortgen=new Dikdortgen(n1,n2,n3,n4);
                dikdortgenler[i%10]=dikdortgen;
                System.out.print("Dikdortgen");
                break;
                
            case "k":
                Kare kare=new Kare(n1,n2,n3,n4);
                kareler[i%10]=kare;
                System.out.print("Kare");
                break;

            default:
                System.out.print("Yanlis deger girdiniz.");
                System.exit(0);
        }
        i++;
}
        for(int j=0;j<=9;j++){
            System.out.print((j+1)+". karenin alani:");
            kareler[j].alanHesapla();
            System.out.println();
            System.out.print((j+1)+". dikdortgenin alani:");
            dikdortgenler[j].alanHesapla();
            System.out.println();
            System.out.print((j+1)+". yamugun alani:");
            yamuklar[j].alanHesapla();
            System.out.println();
            System.out.print((j+1)+". paralelkenarin alani:");
            paralelkenarlar[j].alanHesapla();
            System.out.println();
        }
}
    }
    