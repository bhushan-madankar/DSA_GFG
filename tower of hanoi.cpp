long long toh(int N, int from, int to, int aux) {
        // Your code here
        if(N==1){
            cout<<"move disk 1 from rod "<<from<<" to rod "<<to<<endl;
            return 1; // return the number of moves for one disk
        }
        long long moves = 0; // initialize a variable to store the number of moves
        moves += toh(N-1,from,aux,to); // move N-1 disks from from to aux using to as auxiliary
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl; // move the Nth disk from from to to
        moves++; // increment the number of moves by one
        moves += toh(N-1,aux,to,from); // move N-1 disks from aux to to using from as auxiliary
        return moves; // return the total number of moves
    }
