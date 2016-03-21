#include <iostream>
#include <fstream>
#include "bmi.h"
using namespace std;
int main(){
	    Bmi BMI;
		    fstream fin,fout;
			    char data[200];
				    float height,weight,value;
					    fin.open("file.in", ios::in);
						    fout.open("file.out", ios::out);
							    while (fin.getline(data, sizeof(data))) {
									        if ((data[0]-48)!=0) {
												            height=(data[0]-48)*100+(data[1]-48)*10+(data[2]-48);
															            weight=(data[4]-48)*10+(data[5]-48);
																		            BMI.set_value(height,weight);
																					            BMI.value=BMI.get_value();
																								            BMI.cat=BMI.category(BMI.value);
																											            fout<<BMI.value<<'\t'<<BMI.cat<<endl;
																														        }
											        else return 0;
													    }
								    return 0;
}
