// bshuf_decompress_lz4
//
//
//
//

/*
16384
4
14
16
33
39
45
51
57
67
102
108
120
126
128
134
138
140
*/

#include <fstream>
#include <iostream>
#include <string>
#include <bitshuffle.h>

char buffer[50000];

int main() {
        std::ifstream ifs("datas");
        std::string context ((std::istreambuf_iterator<char>(ifs)), (std::istreambuf_iterator<char>()));
        // std::string context;
        std::cout << context.size() << std::endl;
        bshuf_decompress_lz4(context.data(), buffer, 16384, 4, 0);
        int32_t* decoded = (int32_t*)buffer;
        for(int i = 0; i < 100; ++i) {
                std::cout << decoded[i] << std::endl;
        }
        return 0;
}



