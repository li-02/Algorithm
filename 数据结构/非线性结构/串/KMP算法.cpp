KMP算法.cpp

/**
 * [get_next description]
 * @param T    [description]
 * @param next [description]
 * 获取next数组
 */
void get_next(String T, int next[]){
	int i=1,j=0;
	next[1]=0;
	while(i<T.length){
		if(j==0||T[i]==T[j]){
			i++;
			j++;
			next[i]=j;	// 也就是next[j+1]=next[j]+1
		}else{
			j=next[j];	// 否则就令j=next[j],循环继续
		}
	}
}

int KMP(String S, String T, int next[]){
	int i=1,j=1;
	while(i<=S.length&&j<=T.length){
		if(j==0||S[i]==T[j]){
			i++;
			j++;
		}else{
			j=next[j];
		}
	}
	if(j>T.length){
		return i-T.length;
	}else{
		return 0;
	}
}