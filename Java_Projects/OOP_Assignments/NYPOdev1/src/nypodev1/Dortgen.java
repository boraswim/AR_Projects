
package nypodev1;

public class Dortgen{
        int x1,x2,x3,x4,y1,y2,y3,y4;
        
        Dortgen(Nokta n1,Nokta n2,Nokta n3,Nokta n4){
            this.x1=n1.x;
            this.y1=n1.y;
            this.x2=n2.x;
            this.y2=n2.y;
            this.x3=n3.x;
            this.y3=n3.y;
            this.x4=n4.x;
            this.y4=n4.y;

        }
        
        public void alanHesapla(){
            if(this.x1-this.x2==0){
                System.out.print(Math.abs(this.y1-this.y2)*Math.abs(this.x4-this.x3));
            }
            
            else{
                System.out.print(Math.abs(this.x1-this.x2)*Math.abs(this.y4-this.y3));
            }
        }
    
    }
