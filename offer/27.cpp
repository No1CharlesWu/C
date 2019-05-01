using namespace std;

struct BinaryTreeNode
{
    double value;
    BinaryTreeNode *pLeft;
    BinaryTreeNode *pRight;
};

void MirrorRecursively(BinaryTreeNode *pRoot)
{
    if (pRoot == nullptr)
    {
        return;
    }
    if (pRoot->pLeft == nullptr && pRoot->pRight == nullptr)
    {
        return;
    }
    BinaryTreeNode *temp;
    temp = pRoot->pLeft;
    pRoot->pLeft = pRoot->pRight;
    pRoot->pRight = temp;

    if (pRoot->pLeft)
    {
        MirrorRecursively(pRoot->pLeft);
    }
    if (pRoot->pRight)
    {
        MirrorRecursively(pRoot->pRight);
    }
}