package com.company;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Sparse_arrays {
    public static void main(String[] args) throws IOException {
       // Scanner sn=new Scanner(System.in);
        BufferedReader sn=new BufferedReader(new InputStreamReader(System.in));
        int i,n,q;
        n=Integer.parseInt(sn.readLine());
        String str[]=new String[n];
        for(i=0;i<n;i++)
        {
          str[i]= sn.readLine();
        }
        q=Integer.parseInt(sn.readLine().trim());
        String que[]=new String[q];
        for(i=0;i<q;i++)
        {
            que[i]= sn.readLine();
        }
       int c[]=new int[q];
        for(i=0;i<q;i++)
        {int count=0;
            for(int j=0;j<n;j++)
            {
             if(que[i].equals(str[j]))count++;
            }
            c[i]=count;
        }
        for (int k : c) {
            System.out.println(k);
        }
    }
}
