void shuffle(int &a,int &b,int &c,int &d){
	int a[]={a,b,c,d} ;
	for (int i = 0; i < 4; i++)
	{
		int x = rand%4 ;
		int temp ; 
		int j = x+1 ;
		a[i] = temp ;
		a[i] = a[j] ;
		a[j] = temp ;

	}
	
	
	

}
