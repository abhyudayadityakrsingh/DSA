Node* createParentMapping(Node* root, int target , map <Node*, Node*> &nodeToParent){
         //creates mapping
         //returns target
         Node* res = NULL ;
         queue <Node*> q ;
         q.push(root) ;
         
         nodeToParent[root]= NULL ;//parent of root is NULL
         
         while(! q.empty() ){
             Node* front = q.front() ;
             q.pop() ;
             
             if(front->data == target){
                 res = front ;
             }
             if(front->left){
                 nodeToParent[front->left] = front ;//means front is parent of front->left
                 q.push(front->left) ;
             }
             if(front->right){
                 nodeToParent[front->right] = front ;
                 q.push(front->right) ;
             }
         }
         return res ;
    }
    
 int burnTree(Node* root , map <Node*, Node*> &nodeToParent ){
        map <Node* , bool> visited ;
        queue <Node*> q ;
        
        q.push(root) ;
        visited[root] = true ;
        int ans = 0 ;
        
        while(! q.empty() ){
          bool flag = 0 ;
          
          
        int size = q.size() ;
        for(int i = 0 ; i < size ; i ++ ){
            //process the neighbouring nodes
            Node* front = q.front() ;
            q.pop() ;
            
            if(front->left && !visited[front->left]){
                q.push(front->left) ;
                visited[front->left] = 1 ;
                flag =1 ;
            }
            if(front->right && !visited[front->right]){
                q.push(front->right);
                 visited[front->right] =1;
                  flag =1 ;
            }
            //now similarly check for parent
            if(nodeToParent[front] && !visited[nodeToParent[front]]){
                q.push(nodeToParent[front]) ;
                visited[nodeToParent[front]] =1 ;
                 flag =1 ;
            }
        }
        
        if(flag == 1){
            ans ++ ;
        }
            
        }
     return ans ;   
    }
    int minTime(Node* root, int target) 
    {
        // Create a mapping of node to parent
        //find the target node
        //burn the tree in min time
        
        
        map <Node*, Node*> nodeToParent ;
        Node* targetNode = createParentMapping(root,target,nodeToParent) ;
        int ans = burnTree(targetNode , nodeToParent) ;
        return ans ;
        
    }
