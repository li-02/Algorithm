#define size 100

int Uset[size];

/**
 * @brief 初始化
 */
void initial(int S[])
{
    for (int i = 0; i < size; i++)
    {
        S[i] = -1;
    }
}
/**
 * @brief find操作
 */
int find(int S[], int x)
{
    while (S[x] > 0)
    {
        x = S[x]; //向上找根
    }
    return x;
}
/**
 * @brief 合并操作
 */
void Union(int S[], int root1, int root2)
{
    S[root2] = root1;
}