 int count[256] ={0};
    for(int i=0;s[i] != '\0';i++)
    {
        count[s[i]]++;
    }
    for(int i=0;s[i] !='\0';i++)
    {
        if(count[s[i]] == 1)
        {
        return i;
        }
    }
    return -1;
}

// Another method 

for (int i = 0; s[i] != '\0'; i++)
    {
        int count = 0;

        // Count how many times s[i] occurs
        for (int j = 0; s[j] != '\0'; j++)
        {
            if (s[i] == s[j])
            {
                count++;
            }
        }

        // If it occurs only once
        if (count == 1)
        {
            return i;
        }
    }

    return -1;
}

