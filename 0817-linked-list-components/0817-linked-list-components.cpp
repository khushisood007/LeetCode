/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
      int count=0;
      unordered_set<int>s;
      for(int x: nums){
        s.insert(x);
      }
      while(head!=NULL){
        if(s.count(head->val) && (head->next==NULL || !s.count(head->next->val))){
            count++;
        }
        head=head->next;
      }
      return count;
    }
};