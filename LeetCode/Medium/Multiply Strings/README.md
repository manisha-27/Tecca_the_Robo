# Test-Case Dry Run Code

Input: <br>
String num1= "123" <br>
String num2= "456"   <br>
Output: "56088"

```
543210  <=Indexes
------
   123
 x 456
  -----
    18    1.
   12*    2.
  06**    3.
 ------
   15*    4.
  10**    5.
 05***    6.
-------
  12**    7.
 08***    8.
04****    9.
=========
056088
```

## Algorithm:
```
multiple(mul)  <= multipke of 2 sub-no.
i,j (indexes of both the multiple number)
=>ch[i+j] and i+j , ch[i+j+1] and i+j+1  <=intial values ata particular index
rem(remainder)=(mul%10)+ch[i+j]
ch[i+j]=rem%10
ch[i+j+1]=(mul/10)+ch[i+j+1]+(rem/10)
```

## Dry Code Run

```
 _ _ _ _ _ _
|0|0|0|0|0|0|   <= UPDATE 
1.=>(Initially)   ch[i+j]=0 and i+j=0 , ch[i+j+1]=0 and i+j+1=1
After using Algo on 1. step
mul=18 
rem=8 
ch[i+j+1]=ch[1]=1 
ch[i+j]=ch[0]=8
 _ _ _ _ _ _
|0|0|0|0|1|8|   <= UPDATE 
2.=>(Initially)   ch[i+j]=1 and i+j=1 , ch[i+j+1]=0 and i+j+1=2
After using Algo on 2. step
mul=12 
rem=3 
ch[i+j+1]=ch[2]=1 
ch[i+j]=ch[1]=3
 _ _ _ _ _ _
|0|0|0|1|3|8|   <= UPDATE 
3.=>(Initially)   ch[i+j]=1 and i+j=2 , ch[i+j+1]=0 and i+j+1=3
After using Algo on 3. step
mul=6 
rem=7 
ch[i+j+1]=ch[3]=0 
ch[i+j]=ch[2]=7
 _ _ _ _ _ _
|0|0|0|7|3|8|   <= UPDATE 
4.=>(Initially)   ch[i+j]=3 and i+j=1 , ch[i+j+1]=7 and i+j+1=2
After using Algo on 4. step
mul=15 
rem=8 
ch[i+j+1]=ch[2]=8 
ch[i+j]=ch[1]=8
 _ _ _ _ _ _
|0|0|0|8|8|8|   <= UPDATE 
5.=>(Initially)   ch[i+j]=8 and i+j=2 , ch[i+j+1]=0 and i+j+1=3
After using Algo on 5. step
mul=10 
rem=8 
ch[i+j+1]=ch[3]=1 
ch[i+j]=ch[2]=8
 _ _ _ _ _ _
|0|0|1|8|8|8|   <= UPDATE 
6.=>(Initially)   ch[i+j]=1 and i+j=3 , ch[i+j+1]=0 and i+j+1=4
After using Algo on 6. step
mul=5 
rem=6 
ch[i+j+1]=ch[4]=0 
ch[i+j]=ch[3]=6
 _ _ _ _ _ _
|0|0|6|8|8|8|   <= UPDATE 
7.=>(Initially)   ch[i+j]=8 and i+j=2 , ch[i+j+1]=6 and i+j+1=3
After using Algo on 7. step
mul=12 
rem=10 
ch[i+j+1]=ch[3]=8 
ch[i+j]=ch[2]=0
 _ _ _ _ _ _
|0|0|8|0|8|8|   <= UPDATE 
8.=>(Initially)   ch[i+j]=8 and i+j=3 , ch[i+j+1]=0 and i+j+1=4
After using Algo on 8. step
mul=8 
rem=16 
ch[i+j+1]=ch[4]=1 
ch[i+j]=ch[3]=6
 _ _ _ _ _ _
|0|1|6|0|8|8|   <= UPDATE 
9.=>(Initially)   ch[i+j]=1 and i+j=4 , ch[i+j+1]=0 and i+j+1=5
After using Algo on 9. step
mul=4 
rem=5 
ch[i+j+1]=ch[5]=0 
ch[i+j]=ch[4]=5
 _ _ _ _ _ _
|0|5|6|0|8|8|   <= FINAL UPDATE 
 5 4 3 2 1 0    <=Indexes of char[]

On reversing the array and storing it in String
OUTPUT: "56088"
```
