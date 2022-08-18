// Doubly Linked-List class with prev and next pointers
class Node {
public:
	int key, val;
	Node *next, *prev;
	Node(int _key, int _val) {
		key = _key;
		val = _val;
	}
};

class LRUCache {
private:
	Node *head = new Node(-1, -1);
	Node *tail = new Node(-1, -1);
	unordered_map<int, Node*> addrOfKey;    // hashmap for storing the address corresponding to a key
	int cacheCapacity;

	// adds a new node in-between two pre-existing nodes
	void addNode(Node *newNode) {
		Node *temp = head->next;
		newNode->next = temp;
		newNode->prev = head;
		head->next = newNode;
		temp->prev = newNode;
	}

	// breaks the prev and next links of the node to be removed
	void deleteNode(Node *delNode) {
		Node *delPrev = delNode->prev;
		Node *delNext = delNode->next;
		delPrev->next = delNext;
		delNext->prev = delPrev;
	}

public:
	LRUCache(int capacity) {
		cacheCapacity = capacity;                       // reset the max capacity of the cache
		head->next = tail;
		tail->prev = head;
	}

	int get(int key) {
		if (addrOfKey.find(key) == addrOfKey.end()) {	// if no such key exists in the record
			return -1;
		}
		Node *resNode = addrOfKey[key];                 // find the address of the key
		int res = resNode->val;                         // get the value of the key
		addrOfKey.erase(key);                           // delete that key from the cache
		deleteNode(resNode);                            // delete the address of that key also
		addNode(resNode);                               // add that key at the beginning of cache bcz now it's MRU
		addrOfKey[key] = head->next;                    // store the new-address in the address-map
		return res;                                     // returns the value against the given key
	}

	void put(int key, int value) {
		if (addrOfKey.find(key) != addrOfKey.end()) {
			Node *existingNode = addrOfKey[key];        // find the address of the key that already exists
			addrOfKey.erase(key);                       // delete the address of that key
			deleteNode(existingNode);                   // delete that node for updating the cache with new node
		}
		if (addrOfKey.size() == cacheCapacity) {        // if size of the cache reaches its maximum capacity
			Node *prevNode = tail->prev;                // find the LRU node in the cache
			int keyToBeErased = prevNode->key;          // find the key that is present at the LRU location
			addrOfKey.erase(keyToBeErased);             // delete the address of that key
			deleteNode(prevNode);                       // delete the LRU node from the LRU location
		}
		Node *newNode = new Node(key, value);           // create a new node with the key and value
		addNode(newNode);                               // add the new node at the beginning of the cache bcz now it's MRU
		addrOfKey[key] = head->next;                    // store the new-address in the address-map
	}
};
