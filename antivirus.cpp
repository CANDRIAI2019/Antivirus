#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ifstream in;
	ofstream out;
	
	in.open("input.txt");
	out.open("output.txt");
	
	int casi;
	
	in>>casi;
	
	for(int i=0;i<casi;i++){
		int n1,n2,n3,n4;
		in>>n1>>n2>>n3>>n4;
		
		int M;
		in>>M;
		
		string f1,f2,f3,f4;
		in>>f1>>f2>>f3>>f4;
		
		string virus;
		
		string p1,p2,p3,p4;
		int ind1,ind2,ind3,ind4;
		
		for(int j=0;j<n1-M+1;j++){
			p1="";
			ind1=j;
			for(int k1=0;k1<M;k1++){
				p1.push_back(f1[j+k1]);
			}
			for(int l=0;l<n2-M+1;l++){
				p2="";
				ind2=l;
				for(int k2=0;k2<M;k2++){
					p2.push_back(f2[l+k2]);
				}
				if(!p1.compare(p2)){
					for(int a=0;a<n3-M+1;a++){
						p3="";
						ind3=a;
						for(int k3=0;k3<M;k3++){
							p3.push_back(f3[a+k3]);
						}
						if(!p3.compare(p2)){
							for(int b=0;b<n4-M+1;b++){
								p4="";
								ind4=b;
								for(int k4=0;k4<M;k4++){
									p4.push_back(f4[b+k4]);
								}
								if(!p4.compare(p3)){
									virus = p4;
									goto end;
								}
							}
						}	
					}
				}
			}
		}
		end:
		out<<"Case #"<<i+1<<": "<<ind1<<" "<<ind2<<" "<<ind3<<" "<<ind4<<endl;
	}
	
	in.close();
	out.close();
}
