#include <vector>

int save(std::vector<int> sizes, int hd) {
    int saved_files = 0;

    int sum_of_file_sizes = 0;

    for (int file_size : sizes) {
        sum_of_file_sizes += file_size;

        if (sum_of_file_sizes > hd) {
            break;
        }

        ++saved_files;
    }

    return saved_files;
}
