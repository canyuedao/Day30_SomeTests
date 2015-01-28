// Day30_SomeTests.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//class A{
//public:
//	int m_aa;
//	char m_ac;
//	short m_as;
//	virtual void test(){
//		
//	}
//};
//class B:public virtual A{
//public:
//	B(int aa,char ac,short as,char bc,int ba){
//		m_aa=aa;
//		m_ac=ac;
//		m_as=as;
//		m_bC=bc;
//		m_ba=ba;
//	}
//	char m_bC;
//	int m_ba;
//};

//int* add(int a,char c){
//	int *p=new int;
//	*p=a+c;
//	return p;
//}
//
//int* minus(int a,char c){
//	int *p=new int;
//	*p=a-c;
//	return p;
//}

int _tmain(int argc, _TCHAR* argv[])
{
	//int ilen=&A::c;
	//printf("%p\n",&A::a);

	/*typedef int(*F)(int,int);	
	int(*)(int,int)(*pb)(int,int);
	F (*pa)(int,int);*/

	//A a;
	//B b(10,'a',20,'b',30);
	//int alen=sizeof(A);
	//int blen=sizeof(B);
	

	//int (*a[10])(int);//一个有10个元素的数组，元素为函数指针，函数指针的类型为一个int参数、返回值为int

	//int *b[8][8];//一个二维数组，元素为int指针

	//int *((*c)[8])[8];//一个指针，指向一个8行8列的二维数组，数组元素为int指针

	//int* (*(*(*d)[10])[20]);//一个指针，指向一个10个元素的数组，数组元素为一个指针，该指针指向一个20个元素的数组，该数组元素为一个指针，该指针又指向一个int指针

	int* ((*(*(**e[8])[8])[8])[8])[8];//一个8个元素的数组，数组元素为二级指针，该指针指向一个8个元素的数组，数组元素为一个指针，该指针又指向一个8个元素的数组，数组元素为一个指针，该指针又指向一个8行8列的二维数组，
									//该数组元素为int指针

	//int* (*f[10])(int,char)={(int* (*)(int,char))0};//一个有10个元素的数组，元素为函数指针，函数指针类型为一个int、一个char参数，返回值为int指针

	//void (*(*(**g)[10])(double,int))(int,double);//一个二级指针，指向一个10个元素的数组，该数组元素为一个函数指针，函数指针类型为一个double、一个int参数，返回值为一个函数指针，
												//该函数指针类型为一个int、一个double参数，返回值为void类型

	//int (*((*h)[10])[20])(int (*)(void),void* (*)(void));//一个指针，指向一个10行20列的数组，数组元素为函数指针，函数指针类型为一个参数为void、返回值为int的函数指针和一个参数为void、返回值为void指针的参数，返回值为int

	//int* (*(*(*(*i[10])[20])(int,int))[10])(int,void (*)(void));//一个10个元素的数组，数组元素为一个指针，指向一个20个元素的数组，该数组元素为一个函数指针，函数指针类型为两个int参数，
																//返回值为一个指向10个元素数组的指针，该数组元素为一个函数指针，函数指针类型为一个int、一个参数为void返回值为void的函数指针的参数，返回值为int指针
	//三
	/*int* a[8][8];
	c=&a;
	int num=0;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			a[i][j]=new int;
			printf("%d %p\n",++num,(*c)[i][j]);
			
		}
	}
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			delete (*c)[i][j];
		}
		
	}
	return 0;*/

	//四
	//int* (*(*a[10])[20]);
	//d=&a;
	//int num=0;
	//for(int i=0;i<10;i++){
	//	a[i]= (int* (*(*)[20])) new int;
	//	for(int j=0;j<20;j++){
	//		(*a[i])[j]=(int**)new int;
	//		*(*a[i])[j]=new int;
	//		*(*(*a[i])[j])=123+num++;
	//		printf("%d %p %p %d\n",num,(*(*d)[i])[j],*((*(*d)[i])[j]),*(*(*a[i])[j]));
	//	}
	//}

	//五
	int num=0;
	for(int i=0;i<8;i++){
		e[i]=(int* ((*(*(**)[8])[8])[8])[8])new int;
		*e[i]=(int* ((*(*(*)[8])[8])[8])[8])new int;
		for(int j=0;j<8;j++){
			(**e[i])[j]=(int* ((*(*)[8])[8])[8])new int; 
			for(int k=0;k<8;k++){
				//(*(**e[i])[j])[k]=new (int* [1][8][8]);
				(*(**e[i])[j])[k]=(int* (*)[8][8])new int;
				for(int l=0;l<8;l++){
					for(int m=0;m<8;m++){
						(*(*(**e[i])[j])[k])[l][m]=new int;
						*(*(*(**e[i])[j])[k])[l][m]=123+num++;
						printf("%d %d %p %p %p %p %p\n",num,*(*(*(**e[i])[j])[k])[l][m],(*(*(**e[i])[j])[k])[l][m],(*(**e[i])[j])[k],(**e[i])[j],*e[i],e[i]);
					}
				}
			}			
			
		}
		
	}
	
	//六
	//f[0]=add;
	//f[1]=minus;
	//for(int i=0;i<2;i++){
	//	int a=*(*f[i])(100,'a');
	//	printf("%d\n",a);
	//}
	
}

