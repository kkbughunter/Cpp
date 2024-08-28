/*
 * A bigger matrix NxN is passed as the input. Also a smaller MxM matrix is passed as input.
 * The program must print TRUE if the smaller matrix can be found in the bigger matrix. Else the program must print FALSE. 
 * 
 * Input:
 * 3
 * 2
 * 4 5 9
 * 1 3 5
 * 8 2 4
 * 3 5
 * 2 4
 * 
 * Output:
 * TRUE
 * 
 *  * Input:
 * 3
 * 2
 * 4 5 9
 * 1 3 5
 * 8 2 4
 * 4 5
 * 1 4
 * 
 * Output:
 * FALSE
 */
import java.util.*;

public class Q2 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        // Get Matrix Size
        int n = sc.nextInt();
        int m = sc.nextInt();
        boolean found = false;
        
        // Get matrix input
        int[][] big = new int[n][n];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                big[i][j] = sc.nextInt();
        int[][] small = new int[m][m];
        for(int i=0; i<m; i++)
            for(int j=0; j<m; j++)
                small[i][j] = sc.nextInt();
            
        for(int i=0; i<=n-m; i++){
            for(int j=0; j<=n-m; j++){
                
                if (isMatch(big, small, i, j, m)) {
                    found = true;
                    break;
                }
                
            }
            if (found) break;
        }
        System.out.println(found ? "TRUE" : "FALSE");
        
    }
    
    private static boolean isMatch(int[][] big, int[][] small, int startRow, int startCol, int M) {
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < M; j++) {
                if (big[startRow + i][startCol + j] != small[i][j]) {
                    return false;
                }
            }
        }
        return true;
    }
}