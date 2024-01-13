class Solution
{
    public:
    Node* insertionSort(struct Node* head)
    {
        Node* c=head;
        vector<int>v;
        while(c!=NULL){
            v.push_back(c->data);
            c=c->next;
        }
        int n=v.size();
        for(int i=1;i<n;i++){
            int k=v[i];
            int j=i-1;
            while(j>=0 and v[j]>k){
                v[j+1]=v[j];
                j--;
            }
            v[j+1]=k;
        }
        Node* te=head;
        int p=0;
        while(te!=NULL){
            te->data=v[p];
            p+=1;
            te=te->next;
        }
        return head;
    }
};