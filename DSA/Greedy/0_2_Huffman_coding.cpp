// Huffman encoding

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    char ch;
    int freq;
    Node *l;
    Node *r;
    Node(char c, int i, Node *lt = NULL, Node *rt = NULL)
    {
        ch = c;
        freq = i;
        l = lt;
        r = rt;
    }
};
class Comparator
{
    public:
        bool operator()(Node *l, Node *r)
        {
            return l->freq > r->freq;
        }
};

void printcode(Node *root, string str)
{
    if (root->ch != '$')
    {
        cout << root->ch << " " << str << "\n";
        return;
    }
    printcode(root->l, str + "0");
    printcode(root->r, str + "1");
}

void printHcode(vector<char> &arr, vector<int> &fq, int n)
{
    priority_queue<Node *, vector<Node *>, Comparator> h;

    for (int i = 0; i < n; i++)
    {
        h.push(new Node(arr[i], fq[i]));
    }

    while (h.size() > 1)
    {

        Node *ll = h.top();
        h.pop();
        Node *rr = h.top();
        h.pop();
        Node *node = new Node('$', ll->freq + rr->freq, ll, rr);
        h.push(node);
    }
    printcode(h.top(), " ");
}

int main()
{
    int n;
    cin >> n;
    vector<int> fq;
    vector<char> arr;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        fq.push_back(k);
    }
    for (int i = 0; i < n; i++)
    {
        char k;
        cin >> k;
        arr.push_back(k);
    }
    printHcode(arr, fq, n);
    return 0;
}