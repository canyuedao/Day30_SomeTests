// Day30_SomeTests.cpp : �������̨Ӧ�ó������ڵ㡣
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
	

	//int (*a[10])(int);//һ����10��Ԫ�ص����飬Ԫ��Ϊ����ָ�룬����ָ�������Ϊһ��int����������ֵΪint

	//int *b[8][8];//һ����ά���飬Ԫ��Ϊintָ��

	//int *((*c)[8])[8];//һ��ָ�룬ָ��һ��8��8�еĶ�ά���飬����Ԫ��Ϊintָ��

	//int* (*(*(*d)[10])[20]);//һ��ָ�룬ָ��һ��10��Ԫ�ص����飬����Ԫ��Ϊһ��ָ�룬��ָ��ָ��һ��20��Ԫ�ص����飬������Ԫ��Ϊһ��ָ�룬��ָ����ָ��һ��intָ��

	int* ((*(*(**e[8])[8])[8])[8])[8];//һ��8��Ԫ�ص����飬����Ԫ��Ϊ����ָ�룬��ָ��ָ��һ��8��Ԫ�ص����飬����Ԫ��Ϊһ��ָ�룬��ָ����ָ��һ��8��Ԫ�ص����飬����Ԫ��Ϊһ��ָ�룬��ָ����ָ��һ��8��8�еĶ�ά���飬
									//������Ԫ��Ϊintָ��

	//int* (*f[10])(int,char)={(int* (*)(int,char))0};//һ����10��Ԫ�ص����飬Ԫ��Ϊ����ָ�룬����ָ������Ϊһ��int��һ��char����������ֵΪintָ��

	//void (*(*(**g)[10])(double,int))(int,double);//һ������ָ�룬ָ��һ��10��Ԫ�ص����飬������Ԫ��Ϊһ������ָ�룬����ָ������Ϊһ��double��һ��int����������ֵΪһ������ָ�룬
												//�ú���ָ������Ϊһ��int��һ��double����������ֵΪvoid����

	//int (*((*h)[10])[20])(int (*)(void),void* (*)(void));//һ��ָ�룬ָ��һ��10��20�е����飬����Ԫ��Ϊ����ָ�룬����ָ������Ϊһ������Ϊvoid������ֵΪint�ĺ���ָ���һ������Ϊvoid������ֵΪvoidָ��Ĳ���������ֵΪint

	//int* (*(*(*(*i[10])[20])(int,int))[10])(int,void (*)(void));//һ��10��Ԫ�ص����飬����Ԫ��Ϊһ��ָ�룬ָ��һ��20��Ԫ�ص����飬������Ԫ��Ϊһ������ָ�룬����ָ������Ϊ����int������
																//����ֵΪһ��ָ��10��Ԫ�������ָ�룬������Ԫ��Ϊһ������ָ�룬����ָ������Ϊһ��int��һ������Ϊvoid����ֵΪvoid�ĺ���ָ��Ĳ���������ֵΪintָ��
	//��
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

	//��
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

	//��
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
	
	//��
	//f[0]=add;
	//f[1]=minus;
	//for(int i=0;i<2;i++){
	//	int a=*(*f[i])(100,'a');
	//	printf("%d\n",a);
	//}
	
}

