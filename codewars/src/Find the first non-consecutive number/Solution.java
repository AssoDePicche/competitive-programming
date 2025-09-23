public class Solution {
    static Integer find(final int[] array) {
        for (int index = 0; index < array.length - 1; ++index) {
            if (array[index + 1] != array[index] + 1) {
                return array[index + 1];
            }
        }

        return null;
    }
}
