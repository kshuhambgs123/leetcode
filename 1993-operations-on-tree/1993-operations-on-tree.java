// class LockingTree {

//     public LockingTree(int[] parent) {
        
//     }
    
//     public boolean lock(int num, int user) {
        
//     }
    
//     public boolean unlock(int num, int user) {
        
//     }
    
//     public boolean upgrade(int num, int user) {
        
//     }
// }

// /**
//  * Your LockingTree object will be instantiated and called as such:
//  * LockingTree obj = new LockingTree(parent);
//  * boolean param_1 = obj.lock(num,user);
//  * boolean param_2 = obj.unlock(num,user);
//  * boolean param_3 = obj.upgrade(num,user);
//  */


class LockingTree {
    private Map<Integer, Integer> map = new HashMap<>();
    private int[] parent;
    public LockingTree(int[] parent) {
        this.parent = parent;
    }
    
    public boolean lock(int num, int user) {
        if(map.containsKey(num)) return false;
        map.put(num, user);
        return true;
    }
    
    public boolean unlock(int num, int user) {
        if(!map.containsKey(num)) return false;
        if(map.get(num) == user) {
            map.remove(num);
            return true;
        }
        return false;
    }
    
    public boolean upgrade(int num, int user) {
		// first condition: check if node is already locked
        if(map.containsKey(num)) 
            return false;
		// second condition: check if any of the node's ancestors are already locked
        int par = parent[num];
        while(par != -1) {
            if(map.containsKey(par)) 
                return false;
            par = parent[par];
        }
		// third condition: check if a node has any locked descendants
        boolean found = false;
        List<Integer> descendants = new ArrayList<>();
		// loop through all locked nodes
        for(int key: map.keySet()) {
            found = false;
            int p = parent[key];
            List<Integer> l = new ArrayList<>();
            l.add(key);
			// move up the tree using parent array
            while(p != -1) {
				// keep adding nodes along the path in case this path ends up containing locked descendant
                l.add(p);
				// if you reach the current node it means that this current path contains a descendant
                if(p == num) {
                    found = true;
                    break;
                }
                p = parent[p];
            }
			// if you found a descendant add all nodes along the path into a descendants list
            if(found) 
                descendants.addAll(l);
        }
		// if we found any descendants remove them from the map and return true
        if(descendants.size() > 0) {
            for(int n: descendants)
                map.remove(n);
            map.put(num, user);
            return true;
        }
        return false;
    }
}