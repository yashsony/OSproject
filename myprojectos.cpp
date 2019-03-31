#include<stdio.h>
#include<conio.h>
int main()
{
int time = 0;
int q1[4]={9000,9000,9000,9000} , q2[4] , q3[4] ={9000,9000,9000,9000}, q1p[4] , q2p[4] , AT[4] = {0,2,14,13} , BT[4] = {6,23,22,7} ,ans[200]
, min=900 ,  f_q1=-1 , r_q1=-1 , f_q2=-1 , r_q2=-1 ,f_q3=-1 , r_q3=-1 , p,var1,var2,var3,name_of_p_low_bt,
 p0_c,p1_c,p2_c,p3_c,p0_c1=0,p1_c1=0,p2_c1=0,p3_c1=0;
while(1)
 {
	for(int i=0;i<4;i++)
	{	if(time==AT[i])
		{ if(f_q1==-1 && r_q1==-1)//insert in q1
			{ f_q1=0;  r_q1=0;
			  q1[r_q1]=i;
			  		
			}
		  else if(r_q1==3)
		   {
		  	r_q1=0;
		  	q1[r_q1]=i;
		  	
		   }
		  else
		  { ++r_q1;
		    q1[r_q1]=i;
		    
		  } 
		}
		
	}
	//for(int i=0;i<4;i++)printf("showing p in q1 %d\n",q1[i]);//
	 //printf(" r_q1,f_q2 %d %d\n",r_q1,f_q1);//-->0123
	if(r_q1==-1 && f_q1==-1)//q1
	{ 
		if(r_q2==-1 && f_q2==-1)//q2
		{	//printf("yash soni");
			if(r_q3==-1 && f_q3==-1)//q3
			{  //printf("hello2");
				if(BT[0]==0 && BT[1]==0 && BT[2]==0 && BT[3]==0)
				{
				  printf("last\n");
				goto Q;
				}
				else
				//printf("works%d\n",time);
				goto T;
			}
			else//q3
			{
				
				 //for(int i=0;i<4;i++)
			//	{printf(" %d  %d \n",BT[i],i);}
			//	printf("min BT %d  %d \n",BT[name_of_p_low_bt],name_of_p_low_bt);
				name_of_p_low_bt=q3[f_q3];
				
				BT[name_of_p_low_bt]=BT[name_of_p_low_bt]-1;
				if(BT[name_of_p_low_bt]==0)
					{ 
					 if(f_q3==r_q3)
					{//printf("hello1\n");
					f_q3=-1;r_q3=-1;}
					else if(f_q3==3){
					
				//	printf("hello\n");
					f_q3=0;}
					else{
					//printf("hello\n");
					++f_q3;
					}}
				ans[time]=name_of_p_low_bt;
				printf("in Q3\n");
				
			}
		}
		else//for Q2
		{var2=q2[f_q2];//var2=name of process 0,1,2,3
		//printf( "kk %d\n",f_q2);
		BT[var2]=BT[var2]-1;
	    q2p[var2]=q2p[var2]+1;
		
		if(BT[var2]==0)//delete  p form q2
		{	 if(f_q2==r_q2)
			{
			f_q2=-1;r_q2=-1;}// var2 == process from q2 from rear
			else if(f_q2==3)
			f_q2=0;
			
			else
			++f_q2;
		}
		if(q2p[var2]==6 && BT[var2]!=0)//at maximum time qunautam 20
		{ if(f_q3==-1 && r_q3==-1)//insert in q3
			{ f_q3=0;  r_q3=0;
			  q3[r_q3]=var2;
			  		
			}
		  else if(r_q3==3)
		   { r_q3=0;
		   	q3[r_q3]=var2;
		  	
		  	
		   }
		  else
		  { ++r_q3;
		  q3[r_q3]=var2;
		    
	      }
	      if(1)
		      {
			  
		       if(f_q2==r_q2)
			  {
			  f_q2=-1;r_q2=-1;}
		      else if(f_q2==3)//delete from q2
			  f_q2=0;
			  
			  else
			  ++f_q2;
		       }
	    }
	    ans[time]=var2;
	    printf("in Q2\n");
	    
	    
		}//q2 end
		
	}
	else//q1 start
	{ //printf("%d",f_q1);//correct
	var3=q1[f_q1];//var3 = name of process 0,1,2,3
	 BT[var3]=BT[var3]-1;
	    q1p[var3]=q1p[var3]+1;
		
		//printf("kk %d\n",var3);
		
		if(BT[var3]==0)//delete  p form q1
		{
		    if(f_q1==r_q1)
			{
			f_q1=-1;r_q1=-1;}
			else if(f_q1==3)
			f_q1=0;
			else
			++f_q1;
		}
		if(q1p[var3]==3 && BT[var2]!=0)//at maximum time qunautam 10
		{ if(f_q2==-1 && r_q2==-1)//insert in q2
			{ f_q2=0;  r_q2=0;
			  q2[r_q2]=var3;
			  //printf("in  q2 %d\n",q2[r_q2]);
			 		
			}
		  else if(r_q2==3)
		   { r_q2=0;
		   	q2[r_q2]=var3;
		  	
		  	
		   }
		  else
		  { ++r_q2;
		  q2[r_q2]=var3;
		    
		    //printf("n %d\n",var3);
		    //printf("in  q2 jj %d\n",q2[r_q2-1]);
	      }
	      if(1){
		       if(f_q1==r_q1)//delete from q1 because of 10 time over
			  {
			  r_q1=-1;f_q1=-1;
			  //printf("works2\n");
			  } 
		      else if(f_q1==3)
			  {//printf("works1\n");
			  f_q1=0;
			  }
			  
			  else{
			  //printf("works3\n");
			  ++f_q1;
				}
		  }
	    }
	    ans[time]=var3;
	    printf("in Q1\n");
	   
	    
	}//q2 end	
    
	
printf("%d %d\n",ans[time],time+1);	
printf("--------------------------------\n");
T:	
time++;	 
}
Q:
	for(int i=0;i<time;i++)
	{if(ans[i]==0)
	{
	p0_c=i+1;
	++p0_c1;}
	else if(ans[i]==1)
	{++p1_c1;
		p1_c=i+1;
	}

	else if(ans[i]==2)
	{++p2_c1;
		p2_c=i+1;
	}

	else
	{
    ++p3_c1;
	p3_c=i+1;
    }
	}
	printf("p0 p1 p2 p3\n");
	printf("%d %d %d %d\n", p0_c,p1_c,p2_c,p3_c);
	printf("%d %d %d %d\n", p0_c1,p1_c1,p2_c1,p3_c1);
	
	return 0;
}
