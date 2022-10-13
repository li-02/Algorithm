简单的模式匹配.cpp

/**
 * [StringCompare description]
 * @param  S [description]
 * @param  T [description]
 * @return   [description]
 * 最坏时间复杂度O(nm)
 * 最优时间复杂度
 */
int StringCompare(String S, String T){
	int i=j=1;
	while(i<S.length&&j<T.length){
		if(S[i]==T[j]){
			i++;
			j++;
		}else{
			i=i-j+2;	// i指针退回到最开始的i的后一位
			j=1;
		}
	}
	if(j>T.length){
		return i-T.length;	// j全部匹配完后还会自加1，所以是j>T.length
	}else{
		return 0;
	}
}