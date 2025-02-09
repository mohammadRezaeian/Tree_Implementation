#include <iostream>
#include "Tree.h"

int main() {
    Tree *tree = new Tree('A');
    tree->setMLeft(new Tree('B'));
    tree->setMRight(new Tree('C'));

    tree->getMRight()->setMLeft(new Tree('G'));
    tree->getMRight()->setMRight(new Tree('H'));

    tree->getMLeft()->setMLeft(new Tree('D'));
    tree->getMLeft()->getMLeft()->setMLeft(new Tree('E'));
    tree->getMLeft()->getMLeft()->setMRight(new Tree('F'));

    tree->preorderTraversal(tree);
    delete tree;
    return 0;
}
