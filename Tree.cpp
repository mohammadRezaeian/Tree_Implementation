#include "Tree.h"

Tree::Tree(char _value, Tree *_right, Tree *_left) : m_value(_value),  m_right(_right), m_left(_left){}

void Tree::setMRight(Tree *mRight) {
    m_right = mRight;
}

void Tree::setMLeft(Tree *mLeft) {
    m_left = mLeft;
}

Tree *Tree::getMRight() const {
    return m_right;
}


Tree *Tree::getMLeft() const {
    return m_left;
}
void Tree::preorderTraversal(Tree *tree)
{
    if (tree == nullptr)
        return;
    else
    {
        std::cout << tree->m_value << std::endl;

        preorderTraversal(tree->m_left);
        preorderTraversal(tree->m_right);
    }
}

Tree::~Tree() {
    delete m_left;
    delete m_right;
}

