string encode(string src)
	{     
	  //Your code here 
	  string ans = "";
	  int i = 0;
	  while(i<src.length())
	  {
	      int j = i;
	      int count = 0;
	      while(j<src.length() and src[i]==src[j])
	      {
	          count++;
	          j++;
	      }
	      ans = ans + src[i] + to_string(count);
	      i = j;
	  }
	  return ans;
	}   
