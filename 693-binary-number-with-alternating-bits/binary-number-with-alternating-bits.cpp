class Solution {
public:
    bool hasAlternatingBits(int n) {
        int Quo1=n%2,Rem=n/2;
        cout<<n<<"|"<<Quo1<<"\n";
        while(Rem > 0)
        {
            cout<<Rem<<"|"<<Quo1<<"\n";
            if(Quo1 == Rem%2)
               return false;   
            Quo1 = Rem % 2;
            Rem = Rem / 2;
        }
        return true;
    }
};