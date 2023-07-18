import java.io.*;


 public class ContohOperasiFile {
     public static void main(String[] args) {
         try {
             File myFile = new File("namafile.txt");
             FileReader fileReader = new FileReader(myFile);
             BufferedReader reader = new BufferedReader(fileReader);
             String line = null;
             while ((line = reader.readLine()) != null) {
                 System.out.println(line);
             }
             reader.close();
         } catch (IOException ex) {
             System.out.println("Terjadi kesalahan pada operasi file: "+ ex.getMessage());
         }
     }
 }