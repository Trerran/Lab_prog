
#include <stdio.h>
#include <math.h>
//3
/*int main()
{	int year = 0;
	printf("Year = ");
	scanf("%d", &year);
	if ((year%400)==0){
		printf("YES\n");
	}
	else if((year%100)==0){
		printf("NO\n");
	}
	else if((year%4)==0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}*/


//4
/*int main(){
	float temp=0;
	char letter=0;
	printf("Input temperature:");
	scanf("%f%c",&temp,&letter);
	if ((letter=='c') || (letter=='C')){
		printf("Output temperature: %f%c\n",temp*1.8+32,'F');
	}
	else if ((letter=='f') || (letter=='F')){
		printf("Output temperature: %f%c\n",(temp-32)/1.8,'C');
	}
	else{
		printf("Output error\n");
	}
	return 0;
}*/

//5
/*int main()
{
	float x=0, y=0;
	printf("Print X:");
	scanf("%f",&x);
	printf("Print Y:");
	scanf("%f",&y);
	if (((-1<=y) && (y<=1)) && ((-1<=x) && (x<=1))){
		if (y>=0){
			printf("True\n");
		}
		else if (y>=x){
			printf("True\n");
		} 
		else if (y>=-x){
			printf("True\n");
		}
		else{
			printf("False\n");
		}
	}
	else{
		printf("False\n");
	}
	return 0;
}*/


//Dop_Zadanie
int main(){
	int H = 600, R = 6371;
	float V = 7560, deg = 0;
	float f0=2.18*pow(10,9);
	printf("Enter elevation angle alpha (0..90 degrees): ");
	scanf("%f",&deg);
	if ((deg>90) || (deg<0)){
		printf("ERROR: angle must be between 0 and 90 degrees.\n");
	}
	else{
		deg=(deg*M_PI)/180;
		float dist = 0, Rad_V = 0,time = 0, freq = 0, b = 0;
		dist=(sqrt(R*R*sin(deg)*sin(deg)+2*R*H+H*H)-R*sin(deg));
		Rad_V=((V*R*cos(deg))/((R*sin(deg))+dist));
		time=((Rad_V*pow(10,9))/299792458);
		b=(Rad_V/299792458);
		freq=((f0*sqrt((1+b)/(1-b))-f0)/1000);
		dist=(dist<0) ? 0:dist;
		Rad_V=(Rad_V<0) ? 0:Rad_V;
		time=(time<0) ? 0:time;
		freq=(freq<0) ? 0:freq;
		if (((freq>42) || (time>18)) && (dist>1000)){
			printf("Distance: %f km\n",dist);
			printf("Radial velocity (vr): %f m/s\n",Rad_V);
			printf("Time drift (dT): %f ns/s\n",time);
			printf("Doppler shift (fd): %f kHz\n",freq);
			printf("Profile: CRITICAL ERROR\n");
		}
		else if((freq>25) && (time>10)){
			printf("Distance: %f km\n",dist);
                	printf("Radial velocity (vr): %f m/s\n",Rad_V);
                	printf("Time drift (dT): %f ns/s\n",time);
                	printf("Doppler shift (fd): %f kHz\n",freq);
                	printf("Profile: HIGH DYNAMIC MODE\n");
		}
		else if((freq>3) || (fabs(time)>1.0)){
			printf("Distance: %f km\n",dist);
                	printf("Radial velocity (vr): %f m/s\n",Rad_V);
                	printf("Time drift (dT): %f ns/s\n",time);
                	printf("Doppler shift (fd): %f kHz\n",freq);
                	printf("Profile: NORMAL ACCELERATION\n");
		}
		else{
			printf("Distance: %f km\n",dist);
                	printf("Radial velocity (vr): %f m/s\n",Rad_V);
                	printf("Time drift (dT): %f ns/s\n",time);
                	printf("Doppler shift (fd): %f kHz\n",freq);
                	printf("Profile: ZENITH MODE\n");
		}
	}
	return 0;
}
