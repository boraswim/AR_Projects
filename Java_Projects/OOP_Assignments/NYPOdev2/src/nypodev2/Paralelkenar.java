
package nypodev2;

public class Paralelkenar implements Dortgen{
        int x1,x2,x3,x4,y1,y2,y3,y4;
        
        Paralelkenar(Nokta n1,Nokta n2,Nokta n3,Nokta n4){
            this.x1=n1.x;
            this.y1=n1.y;
            this.x2=n2.x;
            this.y2=n2.y;
            this.x3=n3.x;
            this.y3=n3.y;
            this.x4=n4.x;
            this.y4=n4.y;
        }
        
        @Override
        public void alanHesapla(){
            if(this.x2-this.x1==0){
                System.out.print(Math.abs(this.y2-this.y1)*Math.abs(this.x3-this.x4));
            }
            
            else{
                System.out.print(Math.abs(this.x2-this.x1)*Math.abs(this.y3-this.y4));
            }
        }
        }
