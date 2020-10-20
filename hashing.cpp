#define LOAD_FACTOR 20
struct ListNode{
	int key;
	int data;
	struct ListNode *next;
};

struct HashTableNode{
	int bcount;
	struct ListNode *next;
};

struct HashTable{
	int tsize;
	int count;
	struct HashTableNode **Table;
};
struct HashTable *CreateHashTable(int size){
	struct HashTable *h;
	h = (struct HashTable *)malloc(sizeof(struct HashTable))
}
