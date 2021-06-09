bool pairWiseConsecutive(stack<int> s)
{
    stack<int> aux; 
    
    while(!s.empty()){ 
        aux.push(s.top()); 
        s.pop(); 
    } 
  
    bool result = true; 
    
    while(aux.size() > 1){ 
        int x = aux.top(); 
        aux.pop(); 
        int y = aux.top(); 
        aux.pop(); 
        // cout<<"X: "<<x<<" y: "<<y<<endl;
        if(abs(x - y) != 1){ 
            result = false; 
            break;
        }
  
        s.push(x); 
        s.push(y); 
    } 
  
    if(aux.size() == 1){ 
        s.push(aux.top());
    }
  
    return result; 
}