#include "generate.h"

std::string generate_seed_phrase(int length) {
    std::string seedPhrase;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, word_list.size() - 1);

    for (int i = 0; i < length; i++) {
        int index = dis(gen);
        seedPhrase += word_list[index];
        if (i < length - 1) {
            seedPhrase += " ";
        }
    }
  
    return seedPhrase;
}
