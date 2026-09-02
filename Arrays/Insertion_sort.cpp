class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        int n = head.size();
        int temp = head[i];
        for(int i =1;i<n;i++){
            int j =i-1
            for(;j>=0;j--){
                if(head[j]>temp){
                    head[j+1] = head[j];
                }
                else
                {
                    break;
                }
            }
            head[j+1] = temp;
        }
        
    }
};