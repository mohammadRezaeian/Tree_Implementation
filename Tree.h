//
// Created by Mik on 2/7/2025.
//

#ifndef TREE_PREORDER_TRAVERSAL_TREE_H
#define TREE_PREORDER_TRAVERSAL_TREE_H


class Tree {

private:
    char m_value;
    Tree *m_right;
    Tree *m_left;

public:
    Tree *getMRight() const;
    Tree *getMLeft() const;

    virtual ~Tree();

public:

    void setMLeft(Tree *mLeft);
    void setMRight(Tree *mRight);


public:
    explicit Tree(char _value, Tree *_right= nullptr, Tree *_left= nullptr);
};


#endif //TREE_PREORDER_TRAVERSAL_TREE_H
