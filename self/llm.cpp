#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *sortList(ListNode *head)
    {
        ListNode *t = head;
        while (t->next != nullptr)
        {
            t = t->next;
        }
        cout << head->val << t->val << endl;
        return re(head, t);
    }
    ListNode *re(ListNode *st, ListNode *end)
    {
        if (st == end)
        {
            cout << "pled" << endl;
            ListNode* st = new ListNode(end->val);
            return st;
        }
        ListNode *s = st;
        ListNode *p = s;
        ListNode *m;
        ListNode *r;
        ListNode *fp;
        ListNode *f = st;
        // m is in left side
        int x = 0, rl = 0;

        cout << endl
             << "heres lister: ";

        ListNode *it = st;
        while (it != end->next)
        {
            cout << it->val;
            it = it->next;
        }
        cout << endl;

        while ((f != end && f->next != end))
        {
            // if (f -> next -> next == nullptr || f -> next -> next == end) {
            fp = f->next;
            // }
            f = f->next->next;
            p = s;
            s = s->next;
            x++;
            rl++;
        }
        cout << "?" << endl;

        if (f->next == end)
        {
            cout << "Asdas" << endl;
            m = s;
            r = f->next;
        }
        else
        {
            x++;
            m = s;
            r = f;
        }
        cout << st->val << m->val << m->next->val << r->val << "endof" << x << rl << endl;
        ListNode *left = re(st, m);
        cout << "right" << m->next->val << endl;
        ListNode *right = re(m->next, r);
        cout << "mereging" << x + 1 << rl + 1 << endl;
        if(x == 0 && rl == 0) {
            x++ ;rl++ ; 
        }
        return merge(left, right, x, rl );
    }
    ListNode *merge(ListNode *l, ListNode *r, int x, int rl)
    {
        int p = x;
        ListNode *lp = l;
        ListNode *rp = r;
        ListNode *h;
        ListNode *t;
        cout << lp->val << rp->val << endl;
        if (lp->val <= rp->val)
        {
            h = new ListNode(lp->val);
            t = h;
            lp = lp->next;
            p--;
        }
        else
        {
            h = new ListNode(rp->val);
            t = h;
            rp = rp->next;
            rl--;
            cout << "heres h " << h->val << rl << endl;
        }

        while (p != 0 && rl != 0)
        {
            if (lp->val <= rp->val)
            {
                t->next = new ListNode(lp->val);
                t = t->next;
                lp = lp->next;
                t->next = NULL;
                p--;
            }
            else
            {
                t->next = new ListNode(rp->val);
                t = t->next;
                rp = lp->next;
                t->next = NULL;
                rl--;
            }
        }
        if (p == 0 && rl != 0)
        {
            t->next = new ListNode(rp->val);;
            while (rl)
            {
                t->next = new ListNode(rp->val);
                rp = rp->next;
                t = t->next;
                rl--;
            }
            t->next = NULL;
        }
        if (p != 0 && rl == 0)
        {
            cout << "herest: " << t->val << endl;
            t->next =  new ListNode(lp->val);
            while (p)
            {
                t->next = new ListNode(lp->val);
                lp = lp->next;
                t = t->next;
                p--;
            }
            t->next = NULL;
            cout << t->val;
        }
        ListNode *it = h;
        cout << endl
             << "heres list: ";

        while (it != NULL)
        {
            cout << it->val;
            it = it->next;
        }
        cout << endl;
        return h;
    }
};
int main()
{
  ListNode *head = new ListNode(4);
    ListNode *t = head;
    t->next = new ListNode(2);
    t = t->next;
    t->next = new ListNode(1);
    t = t->next;
    t->next = new ListNode(3);

    Solution s;
    ListNode *h = s.sortList(head);
    ListNode *it = h;
    

}