public class PrintNumbersFromString

{

    public static void main(String[] args) {

        String str = "The price of the book is $49";

 

// extract digits only from strings

String numberOnly = str.replaceAll("[^0-9]", "");

//int l=str.length();

// print the digitts

System.out.println(numberOnly);

//System.out.println(l);

    }

}
