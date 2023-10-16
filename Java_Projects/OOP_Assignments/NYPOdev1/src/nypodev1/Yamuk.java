
package nypodev1;

public class Yamuk extends Dortgen{
        Yamuk(Nokta n1,Nokta n2,Nokta n3,Nokta n4){
            super(n1,n2,n3,n4);
        }
        
        @Override
        public void alanHesapla(){
            if(this.y1-this.y2==0){
                System.out.print((Math.abs(this.x1-this.x2)+Math.abs(this.x3-this.x4))*Math.abs(this.y1-this.y3)/2);
            }
            
            else{
                System.out.print((Math.abs(this.x1-this.x3)+Math.abs(this.x2-this.x4))*Math.abs(this.y1-this.y2)/2);
            }
        }
        
    
    }