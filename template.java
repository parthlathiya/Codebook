import java.util.*;
import java.io.File;

/*#################################################### 
#                                                    #
#                     @author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
#                                                    #
####################################################*/


public class template {

    int column;
    int row;

    public static void main(String[] args) throws Exception {

        Scanner in = new Scanner(new File("test.txt"));


        // while(in.hasNextInt()) {
            int m = in.nextInt();
            int n = in.nextInt();
            // System.out.println(m);
        // }

        template a = new template(m,n);
        System.out.println(a.numberOfPaths());
    }


    public template(int length, int width) {
        this.column = length;
        this.row = width;
    }

    //The dp formula will be M[i,j] = M[i - 1, j - 1] + M[i - 1, j] + M[i - 1, j + 1]
    //Because one could only land on current cell from the 3 cells in the upper-left, left and lower-left.
    //To make the space consumption 1d, cache the numbers in one column of the matrix at a time.
    //Follow-up 2: Just reset path-counts for blocked cells to 0
    public int numberOfPaths() {
        int[] paths = new int[row];
        paths[row - 1] = 1; //start from bottom-left corner
        for(int col = 1; col < column; col++) {
            int upper_left_value = 0;
            for(int r = 0; r < row; r++) {
                int left_value = paths[r];
                paths[r] += upper_left_value + (r == row - 1 ? 0 : paths[r + 1]);
                upper_left_value = left_value;
            }
        }

        return paths[row - 1]; //exit from bottom-right
    }
}