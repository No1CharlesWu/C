#include <iostream>
#include <algorithm>

using namespace std;

struct BinaryTreeNode
{
    double value;
    BinaryTreeNode *pLeft;
    BinaryTreeNode *pRight;
};

bool Equal(double num1, double num2)
{
    if (num1 - num2 > -0.0000001 && num1 - num2 < 0.0000001)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool DoesTreeHasTree2(BinaryTreeNode *pRootA, BinaryTreeNode *pRootB)
{
    if (pRootB == nullptr)
    {
        return true;
    }
    if (pRootA == nullptr)
    {
        return false;
    }
    if (!Equal(pRootA->value, pRootB->value))
    {
        return false;
    }
    return DoesTreeHasTree2(pRootA->pLeft, pRootB->pLeft) && DoesTreeHasTree2(pRootA->pRight, pRootB->pRight);
}
bool HasSubTree(BinaryTreeNode *pRootA, BinaryTreeNode *pRootB)
{
    bool result = false;
    if (pRootA != nullptr && pRootB != nullptr)
    {
        if (Equal(pRootA->value, pRootB->value))
        {
            result = DoesTreeHasTree2(pRootA, pRootB);
        }
        if (!result)
        {
            result = HasSubTree(pRootA->pLeft, pRootB);
        }
        if (!result)
        {
            result = HasSubTree(pRootA->pRight, pRootB);
        }
    }
    return result;
}