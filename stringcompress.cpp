string getCompressedString(string &input) {
    if (input.length() == 0){
        return "";
    }
    // Variables to iterate the string and keep the count of the current character.
   int startindex=0;
   int cindex=0;
   int count=0;
   string k="";
//cout<<input.length()<<endl;
   while(startindex<input.length()){
        if(input[sindex]==input[cindex]){
            count++;
            cindex++;
        }
        else{
                    if(count>1){
                          k=k+input[startindex]+to_string(count);
                    }
                    else{
                        k=k+input[startindex];
                    }
                     count=0;
                    startindex=cindex;

        }

   }
return k;

}

