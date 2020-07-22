class Node{
   
public:
    char key;
    bool terminal;
    map<char, Node*> next;
    Node(char data){
        key=data;
        terminal=false;
        //next=NULL;
    }
    
};

class Trie {
    
    Node * root;
    
public:
    /** Initialize your data structure here. */
    Trie() {
        root=new Node('\0');
    }
    
    /** Inserts a word into the trie. */
    void insert(string s) {
        Node * temp=root;
        for(int i=0;i<s.size();i++){
            if(temp->next.count(s[i])){
                temp=temp->next[s[i]];
            }else{
                Node* newNode= new Node(s[i]);
                temp->next[s[i]]=newNode;
                temp=newNode;
            }
        }
        temp->terminal=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string s) {
        Node * temp=root;
        for(int i=0;i<s.size();i++){
            if(temp->next.count(s[i])){
                temp=temp->next[s[i]];
            }else{
                return false;
            }
        }
        return temp->terminal;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string s) {
        Node * temp=root;
        for(int i=0;i<s.size();i++){
            if(temp->next.count(s[i])){
                temp=temp->next[s[i]];
            }else{
                return false;
            }
        }
        return true;
    }
};

