//Given two binary search trees, return True if and only if there is a node in the first tree and a node in the second tree whose values sum up to a given integer target.
//Input: root1 = [2,1,4], root2 = [1,0,3], target = 5
//Output: true
//Explanation: 2 and 3 sum up to 5.

//step1: sort the two tree in increasing order (inorder tree)
//step2: take a pointer p in array1 at 0 position and take a pointer q in array2 at the last position
//step3: if (array1[p] + array2[q] > target) then the value should be low so decrement q--
//step3.1: else increment p++ to increment the value to rich target value
//step4: do step3 while p < length of array1 and q >= 0
//step5: if equal the return true else at the end return false
class TreeNode{
    int* root;
    int* left = nullptr;
    int* right = nullptr;

};
int main(){
    int target;
    cin>>target;
    vector<int>array1;
    vector<int>array2;

    inorderSort(root1, array1);
    inorderSort(root2, array2);
    int p = 0; q = array2.size() -1;
    while(p < array1.size() && q >= 0){
        if(array1[p] + array2[q] == target){
            return true;

        }
        else if(array1[p] + array2[q] >target){
            q--;
        }
        else{
            p++;
        }
    }
    return false;
}

//function = inorderSort
//input = root
//step1: if root === null then return
//step2: else
    //step2.1:root = root->leftChild and call the function again
    //step2.2: insert root value to the list
    //step2.3: root = root-> rightChild and call the function again

void inorderSort(Treenode *root, vector<int> &array1){
    if(root == nullptr)
        return
    inorderSort(root->left, array1);
    array1.push_back(root->val);
    inorderSort(root->right, array1);
}
