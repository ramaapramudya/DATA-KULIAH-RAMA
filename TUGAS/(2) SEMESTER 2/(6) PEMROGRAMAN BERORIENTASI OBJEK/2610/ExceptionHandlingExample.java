 public class ExceptionHandlingExample {
     public static void main(String[] args) {
         try {
             int[] arr = new int[5];
             arr[10] = 50; // mencoba mengakses indeks yang tidak ada
         } catch (ArrayIndexOutOfBoundsException e) {
             System.out.println("Terjadi eksepsi: " + e);
         }
         System.out.println("Program berjalan dengan normal.");
     }
 }