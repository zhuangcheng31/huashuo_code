#include<stdio.h>
//num跟数组中和[0,N]之间所有抑或，结果就是要找的数；
//原理：相同抑或为零；而数组中没有6,[0,N]之间都有。。。。（）

//void fuc(int*arr, int num){
//	while (2 * num + 1){
//		arr
//	}
//	for (int i = 0; i < n; i++){
//		if (arr[i] ^ i != 0){
//			printf("")
//		}
//	}
//}
//int main(){
//	int arr[] = { 0, 1, 2, 3, 5 };
//	int num = 5;
//	fuc(arr, 5);
//	system("pause");
//	return 0;
//}



//1,所有抑或 结果=两个出现一次的数值抑或的值 2；将该值分开，
//0011     3
//1000     8
//--------
//1011
//

//原地移除数组中所有的元素val，要求时间复杂度为O(N)，空间复杂度为O(1) 

//=============================03
//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
//不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/remove-element
//方法一；双指针
//int removeElement(int* nums, int numsSize, int val){
//	int src = 0, dst = 0;
//	while (src<numsSize){
//		if (nums[src] != val){
//			nums[dst] = nums[src];
//			++src;
//			++dst;
//		}
//		else{
//			++src;
//		}
//	}
//	return dst;
//}
//=================================04
//给定一个排序数组，你需要在 原地 删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。
//不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/remove-duplicates-from-sorted-array
//int removeDuplicates(int* nums, int numsSize){
//	if (numsSize == 0){
//		return 0;
//	}
//	int prev = 0, cur = 1;  int dst = 0;     // 方法二可以 不用 dst
//	while (cur<numsSize){
//		if (nums[prev] != nums[cur]){
//			nums[dst] = nums[prev];
//			prev++;
//			cur++;
//			dst++;
//		}
//		else{
//			prev++;
//			cur++;
//		}
//	}
//	nums[dst] = nums[prev];
//	dst++;
//	prev++;
//	return dst;
//}

//==========================================05
//数组形式的整数加法   模拟大数相加；
//输入：A = [2, 7, 4], K = 181
//输出：[4, 5, 5]
//解释：274 + 181 = 455
/*int* addToArrayForm(int* A, int ASize, int K, int* returnSize){
	int sum = 0; 
	int mul = 1;
	int arr[] = { 0 };
	for (int i = ASize - 1; i >= 0; i--){    //倒置取每一位数，转换成整数
		sum += A[i] * mul;
		mul *= 10;
	}
	sum = (sum + K);
	int tmp = sum;

	//先求位数
	int count = 0;
	while (sum){
		sum /= 10;
		++count;
	}
	//将每个数取出放在数组里
	
	for (int i = 0; i < count; i++){
		int a = tmp % 10;
		arr[count - 1 - i] = a;
		tmp /= 10;
	}
	return arr;
}
int main(){
	int arr[] = { 2, 7, 4 }, K = 181;
	int ASize = sizeof(arr) / sizeof(arr[0]);
	int * arr1 = 0; 
	int returnSize = 3;
	arr1 = addToArrayForm(arr, ASize, K, &returnSize);

	for (int i = 0; i < returnSize; i++){
		printf("%d ", arr1[i]);
	}

	system("pause");
	return 0;
}
*/
/**
* Note: The returned array must be malloced, assume caller calls free().
*/
//int* addToArrayForm(int* A, int ASize, int K, int* returnSize){
//	int KSize = 0;
//	int kNum = K;
//	while (kNum){//计算
//		++KSize;
//		kNum /= 10;
//	}
//	int len = ASize>KSize ? ASize + 1 : KSize + 1;
//	int*retArr = (int*)malloc(sizeof(int)*(len + 1));
//
//	// A[]
//	int Ai = ASize - 1;
//	int ret_i = 0;
//	int nextNum = 0; //进位
//	int retArr[] = { 0 };
//	while (len--){
//
//		//==================
//		int a = 0;
		
//
//		//=================
//		int ret = A[Ai] + K % 10 + nextNum;
//		Ai--;
//		K /= 10;
//		if (ret>9){  //有进位
//			ret -= 10;
//			nextNum = 1;
//		}
//		else{       //不进位
//			nextNum = 0;
//		}
//		retArr[ret_i] = ret;
//		++ret_i;
//	}
//	if (nextNum == 1){    //这种情况是 最高位进位的情况
//		retArr[ret_i] = 1;
//	}
//	//逆置
//	int left = 0, right = ret_i - 1;
//	while (left < right){
//		int tmp = retArr[left];
//		retArr[left] = retArr[right];
//		retArr[right] = tmp;
//
//	}
//	*returnSize = ret_i;
//	return retArr;
//}




//4.旋转数组
//给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。
//尽可能想出更多的解决方案，至少有三种不同的方法可以解决这个问题。要求使用空间复杂度为 O(1) 的 原地 算法。
//解法一：逆置法 https://leetcode-cn.com/problems/rotate-array/solution/cyu-yan-shi-xian-shu-zu-xuan-zhuan-by-shi-si-5/
//void reverse(int *nums, int start, int end){
//	int i = 0, j = 0;
//	for (i = start, j = end; i < j; i++, j--){
//		int tmp = nums[i];
//		nums[i] = nums[j];
//		nums[j] = tmp;
//	}
//
//}
//void rotate(int *nums, int numsSize, int K){
//	//int i = 0, j = 0;
//	//for (i = 0, j = numsSize - 1 - K; i < j; i++, j--){  //前半部分逆置
//	//	int tmp = nums[i];
//	//	nums[i] = nums[j];
//	//	nums[j] = tmp;
//	//}
//	reverse(nums, 0, numsSize - 1 - K);
//
//	//for (i = numsSize - K, j = numsSize - 1; i < j; i++, j--){ //后半部分逆置
//	//	int tmp = nums[i];
//	//	nums[i] = nums[j];
//	//	nums[j] = tmp;
//	//}
//	reverse(nums, numsSize - K, numsSize - 1);
//
//	//for (i = 0, j = numsSize - K; i < j; i++, j--){ //整体逆置
//	//	int tmp = nums[i];
//	//	nums[i] = nums[j];
//	//	nums[j] = tmp;
//	//}
//
//	reverse(nums, 0, numsSize - 1);
//	
//}

//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	int numsSize = 6;
//	int K = 3;
//	rotate(arr, numsSize, K);
//	for (int i = 0; i < numsSize; i++){
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}


//反转链表
//Definition for singly - linked list.
 struct ListNode {
	int val;
	struct ListNode *next;
	
};
//int main(){
//	Node*n1 = (Node*)malloc(sizeof(Node));
//	n1->val = 6;
//
//
//}



//给定一个头结点为 head 的非空单链表，返回链表的中间结点。
//如果有两个中间结点，则返回第二个中间结点
//Definition for singly-linked list.
//struct ListNode {
//     int val;
//     struct ListNode *next;
// };
//
//struct ListNode* middleNode(struct ListNode* head){
//	struct ListNode *slow = head;
//	struct ListNode *fast = head; //如果一前一后，要判空
//	while (fast&&fast->next){  //写继续条件
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//	return slow;
//
//}

//倒数第K个结点
//struct ListNode {
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* middleNode(struct ListNode* head){
//	struct ListNode *slow = head;
//	struct ListNode *fast = head->next->next; //如果一前一后，要判空
//	int k = 3;
//	while (k--){     //这里有问题 k可能会超出范围
//		fast = fast->next;
//	}
//	while (fast){  //写继续条件
//		slow = slow->next;
//		fast = fast->next;
//	}
//	return slow;
//
//}


//将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
//输入：1->2->4, 1->3->4
//输出：1->1->2->3->4->4



