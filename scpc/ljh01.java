/*
You should use the standard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful. 
*/

import java.util.Scanner;

/*
   As the name of the class should be Solution , using Solution.java as the filename is recommended.
   In any case, you can execute your program by running 'java Solution' command.
 */
class Solution {
   static int Answer;
   static int[] list = new int[1000001];
   static int[] sum = new int[1000001];
   public static void main(String args[]) throws Exception   {

      Scanner sc = new Scanner(System.in);
      list[1] = 0;
      list[2] = 1;
      list();
      sum();

      int T = sc.nextInt();
      for(int test_case = 0; test_case < T; test_case++) {
         
          Answer = 0;
         int start = sc.nextInt();
         int end =sc.nextInt();
         // Print the answer to standard output(screen).
         Answer = sum[end] - sum[start-1];
         System.out.println("Case #"+(test_case+1));
         System.out.println(Answer);
      }
   }
   
   public static void list() {
      
      for(int i =3 ; i <= 1000000 ; i++) {
         if(i % 2 == 0) {
            list[i] = list[i/2] +1;
            list[i-1] = list[i] +1;
         }
      }
      
   }
   
   public static void sum() {
      sum[2] = 1;
      for(int i = 3 ; i <= 1000000; i++) {
         sum[i] = list[i] + sum[i-1];
      }
   }
}