int countingValleys(int n, char* s) {
    // Complete this function
      int c=0,v=0;
    for(int i=0;s[i] !='\0';i++)
    {
        if(s[i] == 'D')
            c--;
        else if(s[i] == 'U')
        {
            c++;
            if(c == 0)
                v++;
        }

    }
    return v;
}
