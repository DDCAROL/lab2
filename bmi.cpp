#include <iostream>
#include "bmi.h"

void Bmi::set_value(float h,float w){
	    weight=w;
		    height=h;
			    return;
}
float Bmi::get_value(){return weight/(height*height/10000);}

string Bmi::category(float BMI){
	    if (BMI<15) {
			        return "Very severely underweight";
					    }
		    else if ((BMI>15)&&(BMI<=16)) {
				        return "severely underweight";
						    }
			    else if ((BMI>16)&&(BMI<=18.5)) {
					        return "underweight";
							    }
				    else if ((BMI>18.5)&&(BMI<=25)) {
						        return "normal";
								    }
					    else if ((BMI>25)&&(BMI<=30)) {
							        return "overweight";
									    }
						    else if ((BMI>30)&&(BMI<=35)) {
								        return "Obese Class I (Moderately obese)";
										    }
							    else if ((BMI>35)&&(BMI<=40)) {
									        return "Obese Class II (Severely obese)";
											    }
								    else {
										        return "Obese Class III (Very severely obese)";
												    }
									    
}

