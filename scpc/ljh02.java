

import java.util.Scanner;

class Solution {
   static double Answer;

   public static void main(String args[]) throws Exception   {
      
      Scanner sc = new Scanner(System.in);
      //Scanner sc = new Scanner(new FileInputStream("input.txt"));

      int T = sc.nextInt();
      for(int test_case = 0; test_case < T; test_case++) {
            
          Answer = 0;
          int R =sc.nextInt();
          int S =sc.nextInt();
          int E = sc.nextInt();
          int N = sc.nextInt();
          
          int[][] obj = new int[N+1][3];
          for(int i = 1 ; i <=N; i++) {
             obj[i][0] = sc.nextInt();
             obj[i][1] = sc.nextInt();
             obj[i][2] = sc.nextInt();
          }
          
          Answer = E-S;
          for(int i = 1 ; i <=N; i++) {
             if(obj[i][2] < R) {
                double rest2 = Math.pow(R, 2) - Math.pow(R - obj[i][2], 2);
                double rest = Math.sqrt(rest2);
                Answer -= 2*rest;
                double s = Math.asin(rest/R);
                double l = R*s;
                Answer += 2*l;
             } else {
                Answer -= 2*R;
                int moveHeight = obj[i][2] - R;
                Answer += moveHeight*2;
                Answer += R*Math.PI;
             }
             
          }

         // Print the answer to standard output(screen).
         System.out.println("Case #"+(test_case+1));
         System.out.println(Answer);
      }
   }
}