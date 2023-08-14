#include "main.h"

int main() 
{
    LinkedList leList{};
    Node nodeOne{15};
    Node nodeTwo{69};
    Node nodeThree{420};

    leList.appendNode(&nodeOne);
    leList.appendNode(&nodeTwo);
    leList.pushFrontNode(&nodeThree);

    std::cout << leList[1] << '\n';
}
