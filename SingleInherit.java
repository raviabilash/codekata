class Bike{
void run(String name){
System.out.println("running fast" +name);
}
}
public class Splendor extends Bike{
void run(){
System.out.println("running with 60km");
}
public static void main(String[] args){
Splendor s=new Splendor();
s.run();
s.run("DEFILER");
}
}
