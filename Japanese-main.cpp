#include <iostream>
#include <random>

int main() {
  std::cout << "九九の勉強をしよう!" << std::endl;
  std::cout << "やり方:\n1:問題が表示されるから>>の後に答えを入力しよう\n2:入力できたらEnterキーを押そう\nあっていたら✅が、間違っていたら❌が表示されるよ\n" << "たくさんやって九九をマスターしよう" << std::endl;
  int RightNumber;
  int LeftNumber;
  int Answer;
  int Input;
  std::random_device Random;
  std::default_random_engine Engine(Random());
  std::uniform_int_distribution<> Distribution(1, 9);

  while (true) {
    RightNumber = Distribution(Engine);
    LeftNumber = Distribution(Engine);
    Answer = LeftNumber * RightNumber;
    std::cout << LeftNumber << " X " << RightNumber << " = ?\n" << ">>> ";
    std::cin >> Input;
    if (Input == Answer) {
      std::cout << "\33[32m\n#####################\n#                   #\n#             @@    #\n#           @@      #\n#   @@    @@        #\n#    @@  @@         #\n#     @@@           #\n#                   #\n#####################\n \33[m" << "正解!" << std::endl;
    }
    else {
      std::cout << "\33[31m\n######################\n#  xx            xx  #\n#    xx        xx    #\n#      xx    xx      #\n#         xx         #\n#         xx         #\n#      xx    xx      #\n#    xx        xx    #\n#  xx            xx  #\n######################\n \33[m" << "残念!正解は" << Answer << "でした!\n" << std::endl;
    }
  }
  return 0;
}
