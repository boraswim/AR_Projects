
package nypodev1;

public class Paralelkenar extends Dortgen{
        Paralelkenar(Nokta n1,Nokta n2,Nokta n3,Nokta n4){
            super(n1,n2,n3,n4);
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
