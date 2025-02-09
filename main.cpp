#include <iostream>
#include "Tree.h"

int main() {
    Tree *tree = new Tree('A');
    tree->setMLeft(new Tree('B'));
    tree->setMRight(new Tree('C'));

    tree->getMRight()->setMLeft(new Tree('G'));
    tree->getMRight()->setMRight(new Tree('H'));

    tree->getMLeft()->setMLeft(new Tree('D'));
    tree->getMLeft()->setMRight(new Tree('F'));
    tree->getMLeft()->setMLeft(new Tree('E'));


    return 0;
}
// TODO: Adding the rest of the leaves and branches
//  Implementation Preorder Traversal for read leaves and branches
