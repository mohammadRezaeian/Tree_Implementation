#ifndef TREE_PREORDER_TRAVERSAL_TREE_H
#define TREE_PREORDER_TRAVERSAL_TREE_H

#include <iostream>

class Tree {

private:
    char m_value;
    Tree *m_right;
    Tree *m_left;

public:
    explicit Tree(char _value, Tree *_right= nullptr, Tree *_left= nullptr);

    Tree *getMRight() const;
    Tree *getMLeft() const;

    void setMLeft(Tree *mLeft);
    void setMRight(Tree *mRight);

    void preorderTraversal(Tree *tree);

    virtual ~Tree();
};


#endif //TREE_PREORDER_TRAVERSAL_TREE_H
