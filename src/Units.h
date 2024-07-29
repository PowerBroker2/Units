#pragma once
#include "Arduino.h"




// Distance
constexpr double MM2CM = 1.0 / 10.0;
constexpr double MM2DM = 1.0 / 100.0;
constexpr double MM2M  = 1.0 / 1000.0;
constexpr double MM2KM = 1.0 / 1000000.0;
constexpr double MM2IN = 1.0 / 25.4;
constexpr double MM2FT = 1.0 / 304.8;
constexpr double MM2Y  = 1.0 / 914.4;
constexpr double MM2MI = 1.0 / 1609344.0;

constexpr double CM2MM = 1.0 * 10.0;
constexpr double CM2DM = 1.0 / 10.0;
constexpr double CM2M  = 1.0 / 100.0;
constexpr double CM2KM = 1.0 / 100000.0;
constexpr double CM2IN = 1.0 / 2.54;
constexpr double CM2FT = 1.0 / 30.48;
constexpr double CM2Y  = 1.0 / 91.44;
constexpr double CM2MI = 1.0 / 160934.4;

constexpr double DM2MM = 1.0 * 100.0;
constexpr double DM2CM = 1.0 * 10.0;
constexpr double DM2M  = 1.0 / 10.0;
constexpr double DM2KM = 1.0 / 10000.0;
constexpr double DM2IN = 1.0 / 0.254;
constexpr double DM2FT = 1.0 / 3.048;
constexpr double DM2Y  = 1.0 / 9.144;
constexpr double DM2MI = 1.0 / 16093.44;

constexpr double M2MM = 1.0 * 1000.0;
constexpr double M2CM = 1.0 * 100.0;
constexpr double M2DM = 1.0 * 10.0;
constexpr double M2KM = 1.0 / 1000.0;
constexpr double M2IN = 1.0 / 0.0254;
constexpr double M2FT = 1.0 / 0.3048;
constexpr double M2Y  = 1.0 / 0.9144;
constexpr double M2MI = 1.0 / 1609.344;

constexpr double KM2MM = 1.0 * 1000000.0;
constexpr double KM2CM = 1.0 * 100000.0;
constexpr double KM2DM = 1.0 * 10000.0;
constexpr double KM2M  = 1.0 * 1000.0;
constexpr double KM2IN = 1.0 * 39370.1;
constexpr double KM2FT = 1.0 * 3280.84;
constexpr double KM2Y  = 1.0 / 0.0009144;
constexpr double KM2MI = 1.0 / 1.609344;

constexpr double IN2MM = 1.0 * 25.4;
constexpr double IN2CM = 1.0 * 2.54;
constexpr double IN2DM = 1.0 * 0.254;
constexpr double IN2M  = 1.0 * 0.0254;
constexpr double IN2KM = 1.0 / 39370.1;
constexpr double IN2FT = 1.0 / 12.0;
constexpr double IN2Y  = 1.0 / 36.0;
constexpr double IN2MI = 1.0 / 63360.0;

constexpr double FT2MM = 1.0 * 304.8;
constexpr double FT2CM = 1.0 * 30.48;
constexpr double FT2DM = 1.0 * 3.048;
constexpr double FT2M  = 1.0 * 0.3048;
constexpr double FT2KM = 1.0 / 3280.84;
constexpr double FT2IN = 1.0 * 12.0;
constexpr double FT2Y  = 1.0 / 3.0;
constexpr double FT2MI = 1.0 / 5280.0;

constexpr double Y2MM = 1.0 * 914.4;
constexpr double Y2CM = 1.0 * 91.44;
constexpr double Y2DM = 1.0 * 9.144;
constexpr double Y2M  = 1.0 * 0.9144;
constexpr double Y2KM = 1.0 * 0.0009144;
constexpr double Y2IN = 1.0 * 36.0;
constexpr double Y2FT = 1.0 * 3.0;
constexpr double Y2MI = 1.0 / 1760.0;

constexpr double MI2MM = 1.0 * 1609344.0;
constexpr double MI2CM = 1.0 * 160934.4;
constexpr double MI2DM = 1.0 * 16093.44;
constexpr double MI2M  = 1.0 * 1609.344;
constexpr double MI2KM = 1.0 * 1.609344;
constexpr double MI2IN = 1.0 * 63360.0;
constexpr double MI2FT = 1.0 * 5280.0;
constexpr double MI2Y  = 1.0 * 1760.0;


// Time
constexpr double NS2US  = 1.0 / 1000.0;
constexpr double NS2MS  = 1.0 / 1e6;
constexpr double NS2S   = 1.0 / 1e9;
constexpr double NS2MIN = 1.0 / 6e10;
constexpr double NS2HR  = 1.0 / 3.6e12;
constexpr double NS2DY  = 1.0 / 8.64e13;

constexpr double US2NS  = 1.0 * 1000.0;
constexpr double US2MS  = 1.0 / 1000.0;
constexpr double US2S   = 1.0 / 1e6;
constexpr double US2MIN = 1.0 / 6e7;
constexpr double US2HR  = 1.0 / 3.6e9;
constexpr double US2DY  = 1.0 / 8.64e10;

constexpr double MS2NS  = 1.0 * 1e6;
constexpr double MS2US  = 1.0 * 1000.0;
constexpr double MS2S   = 1.0 / 1000.0;
constexpr double MS2MIN = 1.0 / 60000.0;
constexpr double MS2HR  = 1.0 / 3.6e6;
constexpr double MS2DY  = 1.0 / 8.64e4;

constexpr double S2NS  = 1.0 * 1e9;
constexpr double S2US  = 1.0 * 1e6;
constexpr double S2MS  = 1.0 * 1000.0;
constexpr double S2MIN = 1.0 / 60.0;
constexpr double S2HR  = 1.0 / 3600.0;
constexpr double S2DY  = 1.0 / 86400.0;

constexpr double MIN2NS = 1.0 * 6e10;
constexpr double MIN2US = 1.0 * 6e7;
constexpr double MIN2MS = 1.0 * 60000.0;
constexpr double MIN2S  = 1.0 * 60.0;
constexpr double MIN2HR = 1.0 / 60.0;
constexpr double MIN2DY = 1.0 / 1440.0;

constexpr double HR2NS  = 1.0 * 3.6e12;
constexpr double HR2US  = 1.0 * 3.6e9;
constexpr double HR2MS  = 1.0 * 3.6e6;
constexpr double HR2S   = 1.0 * 3600.0;
constexpr double HR2MIN = 1.0 * 60.0;
constexpr double HR2DY  = 1.0 / 12.0;

constexpr double DY2NS  = 1.0 * 8.64e13;
constexpr double DY2US  = 1.0 * 8.64e10;
constexpr double DY2MS  = 1.0 * 8.64e7;
constexpr double DY2S   = 1.0 * 86400.0;
constexpr double DY2MIN = 1.0 * 1440.0;
constexpr double DY2HR  = 1.0 * 24.0;


// Mass
constexpr double G2KG = 1.0 / 1000.0;
constexpr double G2OZ = 1.0 / 28.34952;
constexpr double G2LB = 1.0 / 453.59237;

constexpr double KG2G  = 1.0 * 1000.0;
constexpr double KG2OZ = 1.0 * 35.27396195;
constexpr double KG2LB = 1.0 / 0.45359237;

constexpr double OZ2G  = 1.0 * 28.34952;
constexpr double OZ2KG = 1.0 / 35.27396195;
constexpr double OZ2LB = 1.0 / 16.0;

constexpr double LB2G  = 1.0 * 453.59237;
constexpr double LB2KG = 1.0 * 0.45359237;
constexpr double LB2OZ = 1.0 * 16.0;


// Volume
constexpr double CM32ML = 1.0 * 1.0;
constexpr double CM32L  = 1.0 / 1000.0;
constexpr double CM32CP = 1.0 / 236.5882365;
constexpr double CM32PT = 1.0 / 473.176473; 
constexpr double CM32QT = 1.0 / 946.352946;
constexpr double CM32GL = 1.0 / 3785.411784;

constexpr double ML2CM3 = 1.0 * 1.0;
constexpr double ML2L   = 1.0 / 1000.0;
constexpr double ML2CP  = 1.0 / 236.5882365;
constexpr double ML2PT  = 1.0 / 473.176473; 
constexpr double ML2QT  = 1.0 / 946.352946;
constexpr double ML2GL  = 1.0 / 3785.411784;

constexpr double L2CM3 = 1.0 * 1000.0;
constexpr double L2ML  = 1.0 * 1000.0;
constexpr double L2CP  = 1.0 * 4.2267528377;
constexpr double L2PT  = 1.0 * 2.1133764189;
constexpr double L2QT  = 1.0 * 1.0566882094;
constexpr double L2GL  = 1.0 / 3.785411784;

constexpr double CP2CM3 = 1.0 * 236.5882365;
constexpr double CP2ML  = 1.0 * 236.5882365;
constexpr double CP2L   = 1.0 * 0.2365882365;
constexpr double CP2PT  = 1.0 / 2.0;
constexpr double CP2QT  = 1.0 / 4.0;
constexpr double CP2GL  = 1.0 / 16.0;

constexpr double PT2CM3 = 1.0 * 473.176473;
constexpr double PT2ML  = 1.0 * 473.176473;
constexpr double PT2L   = 1.0 * 0.473176473;
constexpr double PT2CP  = 1.0 * 2.0;
constexpr double PT2QT  = 1.0 / 2.0;
constexpr double PT2GL  = 1.0 / 8.0;

constexpr double QT2CM3 = 1.0 * 946.352946;
constexpr double QT2ML  = 1.0 * 946.352946;
constexpr double QT2L   = 1.0 * 0.946352946;
constexpr double QT2CP  = 1.0 * 4.0;
constexpr double QT2PT  = 1.0 * 2.0;
constexpr double QT2GL  = 1.0 / 4.0;

constexpr double GL2CM3 = 1.0 * 3785.411784;
constexpr double GL2ML  = 1.0 * 3785.411784;
constexpr double GL2L   = 1.0 * 3.785411784;
constexpr double GL2CP  = 1.0 * 16.0;
constexpr double GL2PT  = 1.0 * 8.0;
constexpr double GL2QT  = 1.0 * 4.0;


// Force
constexpr double N2DYN = 1.0 * 100000.0;
constexpr double N2LBF = 1.0 * 0.2248089431;

constexpr double DYN2N   = 1.0 / 100000.0;
constexpr double DYN2LBF = 1.0 / 444822.16152548;

constexpr double LBF2N   = 1.0 * 4.4482216153;
constexpr double LBF2DYN = 1.0 * 444822.16152548;


// Energy
constexpr double J2KJ   = 1.0 / 1000.0;
constexpr double J2BTU  = 1.0 / 1055.05585262;
constexpr double J2CAL  = 1.0 / 4.184;
constexpr double J2KCAL = 1.0 / 4184.0;
constexpr double J2WHR  = 1.0 / 3600.0;
constexpr double J2KWHR = 1.0 / 3.6e+6;

constexpr double KJ2J    = 1.0 * 1000.0;
constexpr double KJ2BTU  = 1.0 * 0.94781712;
constexpr double KJ2CAL  = 1.0 * 239.0057;
constexpr double KJ2KCAL = 1.0 / 4.184;
constexpr double KJ2WHR  = 1.0 / 3.6;
constexpr double KJ2KWHR = 1.0 / 3600.0;

constexpr double BTU2J    = 1.0 * 1055.0558526;
constexpr double BTU2KJ   = 1.0 * 1.05505585262;
constexpr double BTU2CAL  = 1.0 * 252.164401;
constexpr double BTU2KCAL = 1.0 * 0.252164401;
constexpr double BTU2WHR  = 1.0 / 3.412;
constexpr double BTU2KWHR = 1.0 / 3412.0;

constexpr double CAL2J    = 1.0 * 4184.0;
constexpr double CAL2KJ   = 1.0 * 4.184;
constexpr double CAL2BTU  = 1.0 * 0.003966;
constexpr double CAL2KCAL = 1.0 / 1000.0;
constexpr double CAL2WHR  = 1.0 * 0.001162;
constexpr double CAL2KWHR = 1.0 * 1.1622e-6;

constexpr double KCAL2J    = 1.0 * 4184.0;
constexpr double KCAL2KJ   = 1.0 * 4.184;
constexpr double KCAL2BTU  = 1.0 * 3.965667;
constexpr double KCAL2CAL  = 1.0 * 1000.0;
constexpr double KCAL2WHR  = 1.0 * 1.162222;
constexpr double KCAL2KWHR = 1.0 * 0.001162222;

constexpr double WHR2J    = 1.0 * 3600.0;
constexpr double WHR2KJ   = 1.0 * 3.6;
constexpr double WHR2BTU  = 1.0 * 3.412142;
constexpr double WHR2CAL  = 1.0 * 860.42065;
constexpr double WHR2KCAL = 1.0 * 0.860421;
constexpr double WHR2KWHR = 1.0 / 1000.0;

constexpr double KWHR2J    = 1.0 * 3.6e6;
constexpr double KWHR2KJ   = 1.0 * 3600.0;
constexpr double KWHR2BTU  = 1.0 * 3412.142;
constexpr double KWHR2CAL  = 1.0 * 860420.65;
constexpr double KWHR2KCAL = 1.0 * 860.42065;
constexpr double KWHR2WHR  = 1.0 * 1000.0;


// Power
constexpr double MW2W = 1.0 / 1000.0;

constexpr double W2MW = 1.0 * 1000.0;


// Angles
constexpr double RAD2DEG = M_PI / 180.0;

constexpr double DEG2RAD = 180.0 / M_PI;


// Frequency
constexpr double RADPERS2HZ  = 1.0 / (2.0 * M_PI);
constexpr double RADPERS2KHZ = 1.0 / (2.0 * M_PI * 1000.0);
constexpr double RADPERS2MHZ = 1.0 / (2.0 * M_PI * 1e6);
constexpr double RADPERS2GHZ = 1.0 / (2.0 * M_PI * 1e9);
constexpr double RADPERS2THZ = 1.0 / (2.0 * M_PI * 1e12);

constexpr double HZ2RADPERS = 1.0 * (2.0 * M_PI);
constexpr double HZ2KHZ     = 1.0 / 1000.0;
constexpr double HZ2MHZ     = 1.0 / 1e6;
constexpr double HZ2GHZ     = 1.0 / 1e9;
constexpr double HZ2THZ     = 1.0 / 1e12;

constexpr double KHZ2RADPERS = 1.0 * (2.0 * M_PI * 1000.0);
constexpr double KHZ2HZ      = 1.0 * 1000.0;
constexpr double KHZ2MHZ     = 1.0 / 1000.0;
constexpr double KHZ2GHZ     = 1.0 / 1e6;
constexpr double KHZ2THZ     = 1.0 / 1e9;

constexpr double MHZ2RADPERS = 1.0 * (2.0 * M_PI * 1e6);
constexpr double MHZ2HZ      = 1.0 * 1e6;
constexpr double MHZ2KHZ     = 1.0 * 1000.0;
constexpr double MHZ2GHZ     = 1.0 / 1000.0;
constexpr double MHZ2THZ     = 1.0 / 1e6;

constexpr double GHZ2RADPERS = 1.0 * (2.0 * M_PI * 1e9);
constexpr double GHZ2HZ      = 1.0 * 1e9;
constexpr double GHZ2KHZ     = 1.0 * 1e6;
constexpr double GHZ2MHZ     = 1.0 * 1000.0;
constexpr double GHZ2THZ     = 1.0 / 1000.0;

constexpr double THZ2RADPERS = 1.0 * (2.0 * M_PI * 1e12);
constexpr double THZ2HZ      = 1.0 * 1e12;
constexpr double THZ2KHZ     = 1.0 * 1e9;
constexpr double THZ2MHZ     = 1.0 * 1e6;
constexpr double THZ2GHZ     = 1.0 * 1000.0;




// Distance
constexpr double MM_TO_CM(double x) { return (x * MM2CM); }
constexpr double MM_TO_DM(double x) { return (x * MM2DM); }
constexpr double MM_TO_M (double x) { return (x * MM2M ); }
constexpr double MM_TO_KM(double x) { return (x * MM2KM); }
constexpr double MM_TO_IN(double x) { return (x * MM2IN); }
constexpr double MM_TO_FT(double x) { return (x * MM2FT); }
constexpr double MM_TO_Y (double x) { return (x * MM2Y ); }
constexpr double MM_TO_MI(double x) { return (x * MM2MI); }

constexpr double CM_TO_MM(double x) { return (x * CM2MM); }
constexpr double CM_TO_DM(double x) { return (x * CM2DM); }
constexpr double CM_TO_M (double x) { return (x * CM2M ); }
constexpr double CM_TO_KM(double x) { return (x * CM2KM); }
constexpr double CM_TO_IN(double x) { return (x * CM2IN); }
constexpr double CM_TO_FT(double x) { return (x * CM2FT); }
constexpr double CM_TO_Y (double x) { return (x * CM2Y ); }
constexpr double CM_TO_MI(double x) { return (x * CM2MI); }

constexpr double DM_TO_MM(double x) { return (x * DM2MM); }
constexpr double DM_TO_CM(double x) { return (x * DM2CM); }
constexpr double DM_TO_M (double x) { return (x * DM2M ); }
constexpr double DM_TO_KM(double x) { return (x * DM2KM); }
constexpr double DM_TO_IN(double x) { return (x * DM2IN); }
constexpr double DM_TO_FT(double x) { return (x * DM2FT); }
constexpr double DM_TO_Y (double x) { return (x * DM2Y ); }
constexpr double DM_TO_MI(double x) { return (x * DM2MI); }

constexpr double M_TO_MM(double x) { return (x * M2MM); }
constexpr double M_TO_CM(double x) { return (x * M2CM); }
constexpr double M_TO_DM(double x) { return (x * M2DM); }
constexpr double M_TO_KM(double x) { return (x * M2KM); }
constexpr double M_TO_IN(double x) { return (x * M2IN); }
constexpr double M_TO_FT(double x) { return (x * M2FT); }
constexpr double M_TO_Y (double x) { return (x * M2Y ); }
constexpr double M_TO_MI(double x) { return (x * M2MI); }

constexpr double KM_TO_MM(double x) { return (x * KM2MM); }
constexpr double KM_TO_CM(double x) { return (x * KM2CM); }
constexpr double KM_TO_DM(double x) { return (x * KM2DM); }
constexpr double KM_TO_M (double x) { return (x * KM2M ); }
constexpr double KM_TO_IN(double x) { return (x * KM2IN); }
constexpr double KM_TO_FT(double x) { return (x * KM2FT); }
constexpr double KM_TO_Y (double x) { return (x * KM2Y ); }
constexpr double KM_TO_MI(double x) { return (x * KM2MI); }

constexpr double IN_TO_MM(double x) { return (x * IN2MM); }
constexpr double IN_TO_CM(double x) { return (x * IN2CM); }
constexpr double IN_TO_DM(double x) { return (x * IN2DM); }
constexpr double IN_TO_M (double x) { return (x * IN2M ); }
constexpr double IN_TO_KM(double x) { return (x * IN2KM); }
constexpr double IN_TO_FT(double x) { return (x * IN2FT); }
constexpr double IN_TO_Y (double x) { return (x * IN2Y ); }
constexpr double IN_TO_MI(double x) { return (x * IN2MI); }

constexpr double FT_TO_MM(double x) { return (x * FT2MM); }
constexpr double FT_TO_CM(double x) { return (x * FT2CM); }
constexpr double FT_TO_DM(double x) { return (x * FT2DM); }
constexpr double FT_TO_M (double x) { return (x * FT2M ); }
constexpr double FT_TO_KM(double x) { return (x * FT2KM); }
constexpr double FT_TO_IN(double x) { return (x * FT2IN); }
constexpr double FT_TO_Y (double x) { return (x * FT2Y ); }
constexpr double FT_TO_MI(double x) { return (x * FT2MI); }

constexpr double Y_TO_MM(double x) { return (x * Y2MM); }
constexpr double Y_TO_CM(double x) { return (x * Y2CM); }
constexpr double Y_TO_DM(double x) { return (x * Y2DM); }
constexpr double Y_TO_M (double x) { return (x * Y2M ); }
constexpr double Y_TO_KM(double x) { return (x * Y2KM); }
constexpr double Y_TO_IN(double x) { return (x * Y2IN); }
constexpr double Y_TO_FT(double x) { return (x * Y2FT); }
constexpr double Y_TO_MI(double x) { return (x * Y2MI); }

constexpr double MI_TO_MM(double x) { return (x * MI2MM); }
constexpr double MI_TO_CM(double x) { return (x * MI2CM); }
constexpr double MI_TO_DM(double x) { return (x * MI2DM); }
constexpr double MI_TO_M (double x) { return (x * MI2M ); }
constexpr double MI_TO_KM(double x) { return (x * MI2KM); }
constexpr double MI_TO_IN(double x) { return (x * MI2IN); }
constexpr double MI_TO_FT(double x) { return (x * MI2FT); }
constexpr double MI_TO_Y (double x) { return (x * MI2Y ); }




// Velocity
constexpr double MM_PER_S_TO_CM_PER_S(double x) { return (x * MM2CM); }
constexpr double MM_PER_S_TO_DM_PER_S(double x) { return (x * MM2DM); }
constexpr double MM_PER_S_TO_M_PER_S (double x) { return (x * MM2M ); }
constexpr double MM_PER_S_TO_KM_PER_S(double x) { return (x * MM2KM); }
constexpr double MM_PER_S_TO_IN_PER_S(double x) { return (x * MM2IN); }
constexpr double MM_PER_S_TO_FT_PER_S(double x) { return (x * MM2FT); }
constexpr double MM_PER_S_TO_Y_PER_S (double x) { return (x * MM2Y ); }
constexpr double MM_PER_S_TO_MI_PER_S(double x) { return (x * MM2MI); }

constexpr double MM_PER_S_TO_MM_PER_HR(double x) { return (x * 1.0   / S2HR); }
constexpr double MM_PER_S_TO_CM_PER_HR(double x) { return (x * MM2CM / S2HR); }
constexpr double MM_PER_S_TO_DM_PER_HR(double x) { return (x * MM2DM / S2HR); }
constexpr double MM_PER_S_TO_M_PER_HR (double x) { return (x * MM2M  / S2HR); }
constexpr double MM_PER_S_TO_KM_PER_HR(double x) { return (x * MM2KM / S2HR); }
constexpr double MM_PER_S_TO_IN_PER_HR(double x) { return (x * MM2IN / S2HR); }
constexpr double MM_PER_S_TO_FT_PER_HR(double x) { return (x * MM2FT / S2HR); }
constexpr double MM_PER_S_TO_Y_PER_HR (double x) { return (x * MM2Y  / S2HR); }
constexpr double MM_PER_S_TO_MI_PER_HR(double x) { return (x * MM2MI / S2HR); }

constexpr double MM_PER_HR_TO_CM_PER_HR(double x) { return (x * MM2CM); }
constexpr double MM_PER_HR_TO_DM_PER_HR(double x) { return (x * MM2DM); }
constexpr double MM_PER_HR_TO_M_PER_HR (double x) { return (x * MM2M ); }
constexpr double MM_PER_HR_TO_KM_PER_HR(double x) { return (x * MM2KM); }
constexpr double MM_PER_HR_TO_IN_PER_HR(double x) { return (x * MM2IN); }
constexpr double MM_PER_HR_TO_FT_PER_HR(double x) { return (x * MM2FT); }
constexpr double MM_PER_HR_TO_Y_PER_HR (double x) { return (x * MM2Y ); }
constexpr double MM_PER_HR_TO_MI_PER_HR(double x) { return (x * MM2MI); }

constexpr double MM_PER_HR_TO_MM_PER_S(double x) { return (x * 1.0   / HR2S); }
constexpr double MM_PER_HR_TO_CM_PER_S(double x) { return (x * MM2CM / HR2S); }
constexpr double MM_PER_HR_TO_DM_PER_S(double x) { return (x * MM2DM / HR2S); }
constexpr double MM_PER_HR_TO_M_PER_S (double x) { return (x * MM2M  / HR2S); }
constexpr double MM_PER_HR_TO_KM_PER_S(double x) { return (x * MM2KM / HR2S); }
constexpr double MM_PER_HR_TO_IN_PER_S(double x) { return (x * MM2IN / HR2S); }
constexpr double MM_PER_HR_TO_FT_PER_S(double x) { return (x * MM2FT / HR2S); }
constexpr double MM_PER_HR_TO_Y_PER_S (double x) { return (x * MM2Y  / HR2S); }
constexpr double MM_PER_HR_TO_MI_PER_S(double x) { return (x * MM2MI / HR2S); }


constexpr double CM_PER_S_TO_MM_PER_S(double x) { return (x * CM2MM); }
constexpr double CM_PER_S_TO_DM_PER_S(double x) { return (x * CM2DM); }
constexpr double CM_PER_S_TO_M_PER_S (double x) { return (x * CM2M ); }
constexpr double CM_PER_S_TO_KM_PER_S(double x) { return (x * CM2KM); }
constexpr double CM_PER_S_TO_IN_PER_S(double x) { return (x * CM2IN); }
constexpr double CM_PER_S_TO_FT_PER_S(double x) { return (x * CM2FT); }
constexpr double CM_PER_S_TO_Y_PER_S (double x) { return (x * CM2Y ); }
constexpr double CM_PER_S_TO_MI_PER_S(double x) { return (x * CM2MI); }

constexpr double CM_PER_S_TO_MM_PER_HR(double x) { return (x * CM2MM / S2HR); }
constexpr double CM_PER_S_TO_CM_PER_HR(double x) { return (x * 1.0   / S2HR); }
constexpr double CM_PER_S_TO_DM_PER_HR(double x) { return (x * CM2DM / S2HR); }
constexpr double CM_PER_S_TO_M_PER_HR (double x) { return (x * CM2M  / S2HR); }
constexpr double CM_PER_S_TO_KM_PER_HR(double x) { return (x * CM2KM / S2HR); }
constexpr double CM_PER_S_TO_IN_PER_HR(double x) { return (x * CM2IN / S2HR); }
constexpr double CM_PER_S_TO_FT_PER_HR(double x) { return (x * CM2FT / S2HR); }
constexpr double CM_PER_S_TO_Y_PER_HR (double x) { return (x * CM2Y  / S2HR); }
constexpr double CM_PER_S_TO_MI_PER_HR(double x) { return (x * CM2MI / S2HR); }

constexpr double CM_PER_HR_TO_MM_PER_HR(double x) { return (x * CM2MM); }
constexpr double CM_PER_HR_TO_DM_PER_HR(double x) { return (x * CM2DM); }
constexpr double CM_PER_HR_TO_M_PER_HR (double x) { return (x * CM2M ); }
constexpr double CM_PER_HR_TO_KM_PER_HR(double x) { return (x * CM2KM); }
constexpr double CM_PER_HR_TO_IN_PER_HR(double x) { return (x * CM2IN); }
constexpr double CM_PER_HR_TO_FT_PER_HR(double x) { return (x * CM2FT); }
constexpr double CM_PER_HR_TO_Y_PER_HR (double x) { return (x * CM2Y ); }
constexpr double CM_PER_HR_TO_MI_PER_HR(double x) { return (x * CM2MI); }

constexpr double CM_PER_HR_TO_MM_PER_S(double x) { return (x * CM2MM / HR2S); }
constexpr double CM_PER_HR_TO_CM_PER_S(double x) { return (x * 1.0   / HR2S); }
constexpr double CM_PER_HR_TO_DM_PER_S(double x) { return (x * CM2DM / HR2S); }
constexpr double CM_PER_HR_TO_M_PER_S (double x) { return (x * CM2M  / HR2S); }
constexpr double CM_PER_HR_TO_KM_PER_S(double x) { return (x * CM2KM / HR2S); }
constexpr double CM_PER_HR_TO_IN_PER_S(double x) { return (x * CM2IN / HR2S); }
constexpr double CM_PER_HR_TO_FT_PER_S(double x) { return (x * CM2FT / HR2S); }
constexpr double CM_PER_HR_TO_Y_PER_S (double x) { return (x * CM2Y  / HR2S); }
constexpr double CM_PER_HR_TO_MI_PER_S(double x) { return (x * CM2MI / HR2S); }


constexpr double DM_PER_S_TO_MM_PER_S(double x) { return (x * DM2MM); }
constexpr double DM_PER_S_TO_CM_PER_S(double x) { return (x * DM2CM); }
constexpr double DM_PER_S_TO_M_PER_S (double x) { return (x * DM2M ); }
constexpr double DM_PER_S_TO_KM_PER_S(double x) { return (x * DM2KM); }
constexpr double DM_PER_S_TO_IN_PER_S(double x) { return (x * DM2IN); }
constexpr double DM_PER_S_TO_FT_PER_S(double x) { return (x * DM2FT); }
constexpr double DM_PER_S_TO_Y_PER_S (double x) { return (x * DM2Y ); }
constexpr double DM_PER_S_TO_MI_PER_S(double x) { return (x * DM2MI); }

constexpr double DM_PER_S_TO_MM_PER_HR(double x) { return (x * DM2MM / S2HR); }
constexpr double DM_PER_S_TO_CM_PER_HR(double x) { return (x * DM2CM / S2HR); }
constexpr double DM_PER_S_TO_DM_PER_HR(double x) { return (x * 1.0   / S2HR); }
constexpr double DM_PER_S_TO_M_PER_HR (double x) { return (x * DM2M  / S2HR); }
constexpr double DM_PER_S_TO_KM_PER_HR(double x) { return (x * DM2KM / S2HR); }
constexpr double DM_PER_S_TO_IN_PER_HR(double x) { return (x * DM2IN / S2HR); }
constexpr double DM_PER_S_TO_FT_PER_HR(double x) { return (x * DM2FT / S2HR); }
constexpr double DM_PER_S_TO_Y_PER_HR (double x) { return (x * DM2Y  / S2HR); }
constexpr double DM_PER_S_TO_MI_PER_HR(double x) { return (x * DM2MI / S2HR); }

constexpr double DM_PER_HR_TO_MM_PER_HR(double x) { return (x * DM2MM); }
constexpr double DM_PER_HR_TO_CM_PER_HR(double x) { return (x * DM2CM); }
constexpr double DM_PER_HR_TO_M_PER_HR (double x) { return (x * DM2M ); }
constexpr double DM_PER_HR_TO_KM_PER_HR(double x) { return (x * DM2KM); }
constexpr double DM_PER_HR_TO_IN_PER_HR(double x) { return (x * DM2IN); }
constexpr double DM_PER_HR_TO_FT_PER_HR(double x) { return (x * DM2FT); }
constexpr double DM_PER_HR_TO_Y_PER_HR (double x) { return (x * DM2Y ); }
constexpr double DM_PER_HR_TO_MI_PER_HR(double x) { return (x * DM2MI); }

constexpr double DM_PER_HR_TO_MM_PER_S(double x) { return (x * DM2MM / HR2S); }
constexpr double DM_PER_HR_TO_CM_PER_S(double x) { return (x * DM2CM / HR2S); }
constexpr double DM_PER_HR_TO_DM_PER_S(double x) { return (x * 1.0   / HR2S); }
constexpr double DM_PER_HR_TO_M_PER_S (double x) { return (x * DM2M  / HR2S); }
constexpr double DM_PER_HR_TO_KM_PER_S(double x) { return (x * DM2KM / HR2S); }
constexpr double DM_PER_HR_TO_IN_PER_S(double x) { return (x * DM2IN / HR2S); }
constexpr double DM_PER_HR_TO_FT_PER_S(double x) { return (x * DM2FT / HR2S); }
constexpr double DM_PER_HR_TO_Y_PER_S (double x) { return (x * DM2Y  / HR2S); }
constexpr double DM_PER_HR_TO_MI_PER_S(double x) { return (x * DM2MI / HR2S); }


constexpr double M_PER_S_TO_MM_PER_S(double x) { return (x * M2MM); }
constexpr double M_PER_S_TO_CM_PER_S(double x) { return (x * M2CM); }
constexpr double M_PER_S_TO_DM_PER_S(double x) { return (x * M2DM); }
constexpr double M_PER_S_TO_KM_PER_S(double x) { return (x * M2KM); }
constexpr double M_PER_S_TO_IN_PER_S(double x) { return (x * M2IN); }
constexpr double M_PER_S_TO_FT_PER_S(double x) { return (x * M2FT); }
constexpr double M_PER_S_TO_Y_PER_S (double x) { return (x * M2Y ); }
constexpr double M_PER_S_TO_MI_PER_S(double x) { return (x * M2MI); }

constexpr double M_PER_S_TO_MM_PER_HR(double x) { return (x * M2MM / S2HR); }
constexpr double M_PER_S_TO_CM_PER_HR(double x) { return (x * M2CM / S2HR); }
constexpr double M_PER_S_TO_DM_PER_HR(double x) { return (x * M2DM / S2HR); }
constexpr double M_PER_S_TO_M_PER_HR (double x) { return (x * 1.0  / S2HR); }
constexpr double M_PER_S_TO_KM_PER_HR(double x) { return (x * M2KM / S2HR); }
constexpr double M_PER_S_TO_IN_PER_HR(double x) { return (x * M2IN / S2HR); }
constexpr double M_PER_S_TO_FT_PER_HR(double x) { return (x * M2FT / S2HR); }
constexpr double M_PER_S_TO_Y_PER_HR (double x) { return (x * M2Y  / S2HR); }
constexpr double M_PER_S_TO_MI_PER_HR(double x) { return (x * M2MI / S2HR); }

constexpr double M_PER_HR_TO_MM_PER_HR(double x) { return (x * M2MM); }
constexpr double M_PER_HR_TO_CM_PER_HR(double x) { return (x * M2CM); }
constexpr double M_PER_HR_TO_DM_PER_HR(double x) { return (x * M2DM); }
constexpr double M_PER_HR_TO_KM_PER_HR(double x) { return (x * M2KM); }
constexpr double M_PER_HR_TO_IN_PER_HR(double x) { return (x * M2IN); }
constexpr double M_PER_HR_TO_FT_PER_HR(double x) { return (x * M2FT); }
constexpr double M_PER_HR_TO_Y_PER_HR (double x) { return (x * M2Y ); }
constexpr double M_PER_HR_TO_MI_PER_HR(double x) { return (x * M2MI); }

constexpr double M_PER_HR_TO_MM_PER_S(double x) { return (x * M2MM / HR2S); }
constexpr double M_PER_HR_TO_CM_PER_S(double x) { return (x * M2CM / HR2S); }
constexpr double M_PER_HR_TO_DM_PER_S(double x) { return (x * M2DM / HR2S); }
constexpr double M_PER_HR_TO_M_PER_S (double x) { return (x * 1.0  / HR2S); }
constexpr double M_PER_HR_TO_KM_PER_S(double x) { return (x * M2KM / HR2S); }
constexpr double M_PER_HR_TO_IN_PER_S(double x) { return (x * M2IN / HR2S); }
constexpr double M_PER_HR_TO_FT_PER_S(double x) { return (x * M2FT / HR2S); }
constexpr double M_PER_HR_TO_Y_PER_S (double x) { return (x * M2Y  / HR2S); }
constexpr double M_PER_HR_TO_MI_PER_S(double x) { return (x * M2MI / HR2S); }


constexpr double KM_PER_S_TO_MM_PER_S(double x) { return (x * KM2MM); }
constexpr double KM_PER_S_TO_CM_PER_S(double x) { return (x * KM2CM); }
constexpr double KM_PER_S_TO_DM_PER_S(double x) { return (x * KM2DM); }
constexpr double KM_PER_S_TO_M_PER_S (double x) { return (x * KM2M ); }
constexpr double KM_PER_S_TO_IN_PER_S(double x) { return (x * KM2IN); }
constexpr double KM_PER_S_TO_FT_PER_S(double x) { return (x * KM2FT); }
constexpr double KM_PER_S_TO_Y_PER_S (double x) { return (x * KM2Y ); }
constexpr double KM_PER_S_TO_MI_PER_S(double x) { return (x * KM2MI); }

constexpr double KM_PER_S_TO_MM_PER_HR(double x) { return (x * KM2MM / S2HR); }
constexpr double KM_PER_S_TO_CM_PER_HR(double x) { return (x * KM2CM / S2HR); }
constexpr double KM_PER_S_TO_DM_PER_HR(double x) { return (x * KM2DM / S2HR); }
constexpr double KM_PER_S_TO_M_PER_HR (double x) { return (x * KM2M  / S2HR); }
constexpr double KM_PER_S_TO_KM_PER_HR(double x) { return (x * 1.0   / S2HR); }
constexpr double KM_PER_S_TO_IN_PER_HR(double x) { return (x * KM2IN / S2HR); }
constexpr double KM_PER_S_TO_FT_PER_HR(double x) { return (x * KM2FT / S2HR); }
constexpr double KM_PER_S_TO_Y_PER_HR (double x) { return (x * KM2Y  / S2HR); }
constexpr double KM_PER_S_TO_MI_PER_HR(double x) { return (x * KM2MI / S2HR); }

constexpr double KM_PER_HR_TO_MM_PER_HR(double x) { return (x * KM2MM); }
constexpr double KM_PER_HR_TO_CM_PER_HR(double x) { return (x * KM2CM); }
constexpr double KM_PER_HR_TO_DM_PER_HR(double x) { return (x * KM2DM); }
constexpr double KM_PER_HR_TO_M_PER_HR (double x) { return (x * KM2M ); }
constexpr double KM_PER_HR_TO_IN_PER_HR(double x) { return (x * KM2IN); }
constexpr double KM_PER_HR_TO_FT_PER_HR(double x) { return (x * KM2FT); }
constexpr double KM_PER_HR_TO_Y_PER_HR (double x) { return (x * KM2Y ); }
constexpr double KM_PER_HR_TO_MI_PER_HR(double x) { return (x * KM2MI); }

constexpr double KM_PER_HR_TO_MM_PER_S(double x) { return (x * KM2MM / HR2S); }
constexpr double KM_PER_HR_TO_CM_PER_S(double x) { return (x * KM2CM / HR2S); }
constexpr double KM_PER_HR_TO_DM_PER_S(double x) { return (x * KM2DM / HR2S); }
constexpr double KM_PER_HR_TO_M_PER_S (double x) { return (x * KM2M  / HR2S); }
constexpr double KM_PER_HR_TO_KM_PER_S(double x) { return (x * 1.0   / HR2S); }
constexpr double KM_PER_HR_TO_IN_PER_S(double x) { return (x * KM2IN / HR2S); }
constexpr double KM_PER_HR_TO_FT_PER_S(double x) { return (x * KM2FT / HR2S); }
constexpr double KM_PER_HR_TO_Y_PER_S (double x) { return (x * KM2Y  / HR2S); }
constexpr double KM_PER_HR_TO_MI_PER_S(double x) { return (x * KM2MI / HR2S); }


constexpr double IN_PER_S_TO_MM_PER_S(double x) { return (x * IN2MM); }
constexpr double IN_PER_S_TO_CM_PER_S(double x) { return (x * IN2CM); }
constexpr double IN_PER_S_TO_DM_PER_S(double x) { return (x * IN2DM); }
constexpr double IN_PER_S_TO_M_PER_S (double x) { return (x * IN2M ); }
constexpr double IN_PER_S_TO_KM_PER_S(double x) { return (x * IN2KM); }
constexpr double IN_PER_S_TO_FT_PER_S(double x) { return (x * IN2FT); }
constexpr double IN_PER_S_TO_Y_PER_S (double x) { return (x * IN2Y ); }
constexpr double IN_PER_S_TO_MI_PER_S(double x) { return (x * IN2MI); }

constexpr double IN_PER_S_TO_MM_PER_HR(double x) { return (x * IN2MM / S2HR); }
constexpr double IN_PER_S_TO_CM_PER_HR(double x) { return (x * IN2CM / S2HR); }
constexpr double IN_PER_S_TO_DM_PER_HR(double x) { return (x * IN2DM / S2HR); }
constexpr double IN_PER_S_TO_M_PER_HR (double x) { return (x * IN2M  / S2HR); }
constexpr double IN_PER_S_TO_KM_PER_HR(double x) { return (x * IN2KM / S2HR); }
constexpr double IN_PER_S_TO_IN_PER_HR(double x) { return (x * 1.0   / S2HR); }
constexpr double IN_PER_S_TO_FT_PER_HR(double x) { return (x * IN2FT / S2HR); }
constexpr double IN_PER_S_TO_Y_PER_HR (double x) { return (x * IN2Y  / S2HR); }
constexpr double IN_PER_S_TO_MI_PER_HR(double x) { return (x * IN2MI / S2HR); }

constexpr double IN_PER_HR_TO_MM_PER_HR(double x) { return (x * IN2MM); }
constexpr double IN_PER_HR_TO_CM_PER_HR(double x) { return (x * IN2CM); }
constexpr double IN_PER_HR_TO_DM_PER_HR(double x) { return (x * IN2DM); }
constexpr double IN_PER_HR_TO_M_PER_HR (double x) { return (x * IN2M ); }
constexpr double IN_PER_HR_TO_KM_PER_HR(double x) { return (x * IN2KM); }
constexpr double IN_PER_HR_TO_FT_PER_HR(double x) { return (x * IN2FT); }
constexpr double IN_PER_HR_TO_Y_PER_HR (double x) { return (x * IN2Y ); }
constexpr double IN_PER_HR_TO_MI_PER_HR(double x) { return (x * IN2MI); }

constexpr double IN_PER_HR_TO_MM_PER_S(double x) { return (x * IN2MM / HR2S); }
constexpr double IN_PER_HR_TO_CM_PER_S(double x) { return (x * IN2CM / HR2S); }
constexpr double IN_PER_HR_TO_DM_PER_S(double x) { return (x * IN2DM / HR2S); }
constexpr double IN_PER_HR_TO_M_PER_S (double x) { return (x * IN2M  / HR2S); }
constexpr double IN_PER_HR_TO_KM_PER_S(double x) { return (x * IN2KM / HR2S); }
constexpr double IN_PER_HR_TO_IN_PER_S(double x) { return (x * 1.0   / HR2S); }
constexpr double IN_PER_HR_TO_FT_PER_S(double x) { return (x * IN2FT / HR2S); }
constexpr double IN_PER_HR_TO_Y_PER_S (double x) { return (x * IN2Y  / HR2S); }
constexpr double IN_PER_HR_TO_MI_PER_S(double x) { return (x * IN2MI / HR2S); }


constexpr double FT_PER_S_TO_MM_PER_S(double x) { return (x * FT2MM); }
constexpr double FT_PER_S_TO_CM_PER_S(double x) { return (x * FT2CM); }
constexpr double FT_PER_S_TO_DM_PER_S(double x) { return (x * FT2DM); }
constexpr double FT_PER_S_TO_M_PER_S (double x) { return (x * FT2M ); }
constexpr double FT_PER_S_TO_KM_PER_S(double x) { return (x * FT2KM); }
constexpr double FT_PER_S_TO_IN_PER_S(double x) { return (x * FT2IN); }
constexpr double FT_PER_S_TO_Y_PER_S (double x) { return (x * FT2Y ); }
constexpr double FT_PER_S_TO_MI_PER_S(double x) { return (x * FT2MI); }

constexpr double FT_PER_S_TO_MM_PER_HR(double x) { return (x * FT2MM / S2HR); }
constexpr double FT_PER_S_TO_CM_PER_HR(double x) { return (x * FT2CM / S2HR); }
constexpr double FT_PER_S_TO_DM_PER_HR(double x) { return (x * FT2DM / S2HR); }
constexpr double FT_PER_S_TO_M_PER_HR (double x) { return (x * FT2M  / S2HR); }
constexpr double FT_PER_S_TO_KM_PER_HR(double x) { return (x * FT2KM / S2HR); }
constexpr double FT_PER_S_TO_IN_PER_HR(double x) { return (x * FT2IN / S2HR); }
constexpr double FT_PER_S_TO_FT_PER_HR(double x) { return (x * 1.0   / S2HR); }
constexpr double FT_PER_S_TO_Y_PER_HR (double x) { return (x * FT2Y  / S2HR); }
constexpr double FT_PER_S_TO_MI_PER_HR(double x) { return (x * FT2MI / S2HR); }

constexpr double FT_PER_HR_TO_MM_PER_HR(double x) { return (x * FT2MM); }
constexpr double FT_PER_HR_TO_CM_PER_HR(double x) { return (x * FT2CM); }
constexpr double FT_PER_HR_TO_DM_PER_HR(double x) { return (x * FT2DM); }
constexpr double FT_PER_HR_TO_M_PER_HR (double x) { return (x * FT2M ); }
constexpr double FT_PER_HR_TO_KM_PER_HR(double x) { return (x * FT2KM); }
constexpr double FT_PER_HR_TO_IN_PER_HR(double x) { return (x * FT2IN); }
constexpr double FT_PER_HR_TO_Y_PER_HR (double x) { return (x * FT2Y ); }
constexpr double FT_PER_HR_TO_MI_PER_HR(double x) { return (x * FT2MI); }

constexpr double FT_PER_HR_TO_MM_PER_S(double x) { return (x * FT2MM / HR2S); }
constexpr double FT_PER_HR_TO_CM_PER_S(double x) { return (x * FT2CM / HR2S); }
constexpr double FT_PER_HR_TO_DM_PER_S(double x) { return (x * FT2DM / HR2S); }
constexpr double FT_PER_HR_TO_M_PER_S (double x) { return (x * FT2M  / HR2S); }
constexpr double FT_PER_HR_TO_KM_PER_S(double x) { return (x * FT2KM / HR2S); }
constexpr double FT_PER_HR_TO_IN_PER_S(double x) { return (x * FT2IN / HR2S); }
constexpr double FT_PER_HR_TO_FT_PER_S(double x) { return (x * 1.0   / HR2S); }
constexpr double FT_PER_HR_TO_Y_PER_S (double x) { return (x * FT2Y  / HR2S); }
constexpr double FT_PER_HR_TO_MI_PER_S(double x) { return (x * FT2MI / HR2S); }


constexpr double Y_PER_S_TO_MM_PER_S(double x) { return (x * Y2MM); }
constexpr double Y_PER_S_TO_CM_PER_S(double x) { return (x * Y2CM); }
constexpr double Y_PER_S_TO_DM_PER_S(double x) { return (x * Y2DM); }
constexpr double Y_PER_S_TO_M_PER_S (double x) { return (x * Y2M ); }
constexpr double Y_PER_S_TO_KM_PER_S(double x) { return (x * Y2KM); }
constexpr double Y_PER_S_TO_IN_PER_S(double x) { return (x * Y2IN); }
constexpr double Y_PER_S_TO_FT_PER_S(double x) { return (x * Y2FT); }
constexpr double Y_PER_S_TO_MI_PER_S(double x) { return (x * Y2MI); }

constexpr double Y_PER_S_TO_MM_PER_HR(double x) { return (x * Y2MM / S2HR); }
constexpr double Y_PER_S_TO_CM_PER_HR(double x) { return (x * Y2CM / S2HR); }
constexpr double Y_PER_S_TO_DM_PER_HR(double x) { return (x * Y2DM / S2HR); }
constexpr double Y_PER_S_TO_M_PER_HR (double x) { return (x * Y2M  / S2HR); }
constexpr double Y_PER_S_TO_KM_PER_HR(double x) { return (x * Y2KM / S2HR); }
constexpr double Y_PER_S_TO_IN_PER_HR(double x) { return (x * Y2IN / S2HR); }
constexpr double Y_PER_S_TO_FT_PER_HR(double x) { return (x * Y2FT / S2HR); }
constexpr double Y_PER_S_TO_Y_PER_HR (double x) { return (x * 1.0  / S2HR); }
constexpr double Y_PER_S_TO_MI_PER_HR(double x) { return (x * Y2MI / S2HR); }

constexpr double Y_PER_HR_TO_MM_PER_HR(double x) { return (x * Y2MM); }
constexpr double Y_PER_HR_TO_CM_PER_HR(double x) { return (x * Y2CM); }
constexpr double Y_PER_HR_TO_DM_PER_HR(double x) { return (x * Y2DM); }
constexpr double Y_PER_HR_TO_M_PER_HR (double x) { return (x * Y2M ); }
constexpr double Y_PER_HR_TO_KM_PER_HR(double x) { return (x * Y2KM); }
constexpr double Y_PER_HR_TO_IN_PER_HR(double x) { return (x * Y2IN); }
constexpr double Y_PER_HR_TO_FT_PER_HR(double x) { return (x * Y2FT); }
constexpr double Y_PER_HR_TO_MI_PER_HR(double x) { return (x * Y2MI); }

constexpr double Y_PER_HR_TO_MM_PER_S(double x) { return (x * Y2MM / HR2S); }
constexpr double Y_PER_HR_TO_CM_PER_S(double x) { return (x * Y2CM / HR2S); }
constexpr double Y_PER_HR_TO_DM_PER_S(double x) { return (x * Y2DM / HR2S); }
constexpr double Y_PER_HR_TO_M_PER_S (double x) { return (x * Y2M  / HR2S); }
constexpr double Y_PER_HR_TO_KM_PER_S(double x) { return (x * Y2KM / HR2S); }
constexpr double Y_PER_HR_TO_IN_PER_S(double x) { return (x * Y2IN / HR2S); }
constexpr double Y_PER_HR_TO_FT_PER_S(double x) { return (x * Y2FT / HR2S); }
constexpr double Y_PER_HR_TO_Y_PER_S (double x) { return (x * 1.0  / HR2S); }
constexpr double Y_PER_HR_TO_MI_PER_S(double x) { return (x * Y2MI / HR2S); }


constexpr double MI_PER_S_TO_MM_PER_S(double x) { return (x * MI2MM); }
constexpr double MI_PER_S_TO_CM_PER_S(double x) { return (x * MI2CM); }
constexpr double MI_PER_S_TO_DM_PER_S(double x) { return (x * MI2DM); }
constexpr double MI_PER_S_TO_M_PER_S (double x) { return (x * MI2M ); }
constexpr double MI_PER_S_TO_KM_PER_S(double x) { return (x * MI2KM); }
constexpr double MI_PER_S_TO_IN_PER_S(double x) { return (x * MI2IN); }
constexpr double MI_PER_S_TO_FT_PER_S(double x) { return (x * MI2FT); }
constexpr double MI_PER_S_TO_Y_PER_S (double x) { return (x * MI2Y ); }

constexpr double MI_PER_S_TO_MM_PER_HR(double x) { return (x * MI2MM / S2HR); }
constexpr double MI_PER_S_TO_CM_PER_HR(double x) { return (x * MI2CM / S2HR); }
constexpr double MI_PER_S_TO_DM_PER_HR(double x) { return (x * MI2DM / S2HR); }
constexpr double MI_PER_S_TO_M_PER_HR (double x) { return (x * MI2M  / S2HR); }
constexpr double MI_PER_S_TO_KM_PER_HR(double x) { return (x * MI2KM / S2HR); }
constexpr double MI_PER_S_TO_IN_PER_HR(double x) { return (x * MI2IN / S2HR); }
constexpr double MI_PER_S_TO_FT_PER_HR(double x) { return (x * MI2FT / S2HR); }
constexpr double MI_PER_S_TO_Y_PER_HR (double x) { return (x * MI2Y  / S2HR); }
constexpr double MI_PER_S_TO_MI_PER_HR(double x) { return (x * 1.0   / S2HR); }

constexpr double MI_PER_HR_TO_MM_PER_HR(double x) { return (x * MI2MM); }
constexpr double MI_PER_HR_TO_CM_PER_HR(double x) { return (x * MI2CM); }
constexpr double MI_PER_HR_TO_DM_PER_HR(double x) { return (x * MI2DM); }
constexpr double MI_PER_HR_TO_M_PER_HR (double x) { return (x * MI2M ); }
constexpr double MI_PER_HR_TO_KM_PER_HR(double x) { return (x * MI2KM); }
constexpr double MI_PER_HR_TO_IN_PER_HR(double x) { return (x * MI2IN); }
constexpr double MI_PER_HR_TO_FT_PER_HR(double x) { return (x * MI2FT); }
constexpr double MI_PER_HR_TO_Y_PER_HR (double x) { return (x * MI2Y ); }

constexpr double MI_PER_HR_TO_MM_PER_S(double x) { return (x * MI2MM / HR2S); }
constexpr double MI_PER_HR_TO_CM_PER_S(double x) { return (x * MI2CM / HR2S); }
constexpr double MI_PER_HR_TO_DM_PER_S(double x) { return (x * MI2DM / HR2S); }
constexpr double MI_PER_HR_TO_M_PER_S (double x) { return (x * MI2M  / HR2S); }
constexpr double MI_PER_HR_TO_KM_PER_S(double x) { return (x * MI2KM / HR2S); }
constexpr double MI_PER_HR_TO_IN_PER_S(double x) { return (x * MI2IN / HR2S); }
constexpr double MI_PER_HR_TO_FT_PER_S(double x) { return (x * MI2FT / HR2S); }
constexpr double MI_PER_HR_TO_Y_PER_S (double x) { return (x * MI2Y  / HR2S); }
constexpr double MI_PER_HR_TO_MI_PER_S(double x) { return (x * 1.0   / HR2S); }




// Accelleration
constexpr double MM_PER_S2_TO_CM_PER_S2(double x) { return (x * MM2CM); }
constexpr double MM_PER_S2_TO_DM_PER_S2(double x) { return (x * MM2DM); }
constexpr double MM_PER_S2_TO_M_PER_S2 (double x) { return (x * MM2M ); }
constexpr double MM_PER_S2_TO_KM_PER_S2(double x) { return (x * MM2KM); }
constexpr double MM_PER_S2_TO_IN_PER_S2(double x) { return (x * MM2IN); }
constexpr double MM_PER_S2_TO_FT_PER_S2(double x) { return (x * MM2FT); }
constexpr double MM_PER_S2_TO_Y_PER_S2 (double x) { return (x * MM2Y ); }
constexpr double MM_PER_S2_TO_MI_PER_S2(double x) { return (x * MM2MI); }

constexpr double MM_PER_S2_TO_MM_PER_HR2(double x) { return (x * 1.0   / pow(S2HR, 2)); }
constexpr double MM_PER_S2_TO_CM_PER_HR2(double x) { return (x * MM2CM / pow(S2HR, 2)); }
constexpr double MM_PER_S2_TO_DM_PER_HR2(double x) { return (x * MM2DM / pow(S2HR, 2)); }
constexpr double MM_PER_S2_TO_M_PER_HR2 (double x) { return (x * MM2M  / pow(S2HR, 2)); }
constexpr double MM_PER_S2_TO_KM_PER_HR2(double x) { return (x * MM2KM / pow(S2HR, 2)); }
constexpr double MM_PER_S2_TO_IN_PER_HR2(double x) { return (x * MM2IN / pow(S2HR, 2)); }
constexpr double MM_PER_S2_TO_FT_PER_HR2(double x) { return (x * MM2FT / pow(S2HR, 2)); }
constexpr double MM_PER_S2_TO_Y_PER_HR2 (double x) { return (x * MM2Y  / pow(S2HR, 2)); }
constexpr double MM_PER_S2_TO_MI_PER_HR2(double x) { return (x * MM2MI / pow(S2HR, 2)); }

constexpr double MM_PER_HR2_TO_CM_PER_HR2(double x) { return (x * MM2CM); }
constexpr double MM_PER_HR2_TO_DM_PER_HR2(double x) { return (x * MM2DM); }
constexpr double MM_PER_HR2_TO_M_PER_HR2 (double x) { return (x * MM2M ); }
constexpr double MM_PER_HR2_TO_KM_PER_HR2(double x) { return (x * MM2KM); }
constexpr double MM_PER_HR2_TO_IN_PER_HR2(double x) { return (x * MM2IN); }
constexpr double MM_PER_HR2_TO_FT_PER_HR2(double x) { return (x * MM2FT); }
constexpr double MM_PER_HR2_TO_Y_PER_HR2 (double x) { return (x * MM2Y ); }
constexpr double MM_PER_HR2_TO_MI_PER_HR2(double x) { return (x * MM2MI); }

constexpr double MM_PER_HR2_TO_MM_PER_S2(double x) { return (x * 1.0   / pow(HR2S, 2)); }
constexpr double MM_PER_HR2_TO_CM_PER_S2(double x) { return (x * MM2CM / pow(HR2S, 2)); }
constexpr double MM_PER_HR2_TO_DM_PER_S2(double x) { return (x * MM2DM / pow(HR2S, 2)); }
constexpr double MM_PER_HR2_TO_M_PER_S2 (double x) { return (x * MM2M  / pow(HR2S, 2)); }
constexpr double MM_PER_HR2_TO_KM_PER_S2(double x) { return (x * MM2KM / pow(HR2S, 2)); }
constexpr double MM_PER_HR2_TO_IN_PER_S2(double x) { return (x * MM2IN / pow(HR2S, 2)); }
constexpr double MM_PER_HR2_TO_FT_PER_S2(double x) { return (x * MM2FT / pow(HR2S, 2)); }
constexpr double MM_PER_HR2_TO_Y_PER_S2 (double x) { return (x * MM2Y  / pow(HR2S, 2)); }
constexpr double MM_PER_HR2_TO_MI_PER_S2(double x) { return (x * MM2MI / pow(HR2S, 2)); }


constexpr double CM_PER_S2_TO_MM_PER_S2(double x) { return (x * CM2MM); }
constexpr double CM_PER_S2_TO_DM_PER_S2(double x) { return (x * CM2DM); }
constexpr double CM_PER_S2_TO_M_PER_S2 (double x) { return (x * CM2M ); }
constexpr double CM_PER_S2_TO_KM_PER_S2(double x) { return (x * CM2KM); }
constexpr double CM_PER_S2_TO_IN_PER_S2(double x) { return (x * CM2IN); }
constexpr double CM_PER_S2_TO_FT_PER_S2(double x) { return (x * CM2FT); }
constexpr double CM_PER_S2_TO_Y_PER_S2 (double x) { return (x * CM2Y ); }
constexpr double CM_PER_S2_TO_MI_PER_S2(double x) { return (x * CM2MI); }

constexpr double CM_PER_S2_TO_MM_PER_HR2(double x) { return (x * CM2MM / pow(S2HR, 2)); }
constexpr double CM_PER_S2_TO_CM_PER_HR2(double x) { return (x * 1.0   / pow(S2HR, 2)); }
constexpr double CM_PER_S2_TO_DM_PER_HR2(double x) { return (x * CM2DM / pow(S2HR, 2)); }
constexpr double CM_PER_S2_TO_M_PER_HR2 (double x) { return (x * CM2M  / pow(S2HR, 2)); }
constexpr double CM_PER_S2_TO_KM_PER_HR2(double x) { return (x * CM2KM / pow(S2HR, 2)); }
constexpr double CM_PER_S2_TO_IN_PER_HR2(double x) { return (x * CM2IN / pow(S2HR, 2)); }
constexpr double CM_PER_S2_TO_FT_PER_HR2(double x) { return (x * CM2FT / pow(S2HR, 2)); }
constexpr double CM_PER_S2_TO_Y_PER_HR2 (double x) { return (x * CM2Y  / pow(S2HR, 2)); }
constexpr double CM_PER_S2_TO_MI_PER_HR2(double x) { return (x * CM2MI / pow(S2HR, 2)); }

constexpr double CM_PER_HR2_TO_MM_PER_HR2(double x) { return (x * CM2MM); }
constexpr double CM_PER_HR2_TO_DM_PER_HR2(double x) { return (x * CM2DM); }
constexpr double CM_PER_HR2_TO_M_PER_HR2 (double x) { return (x * CM2M ); }
constexpr double CM_PER_HR2_TO_KM_PER_HR2(double x) { return (x * CM2KM); }
constexpr double CM_PER_HR2_TO_IN_PER_HR2(double x) { return (x * CM2IN); }
constexpr double CM_PER_HR2_TO_FT_PER_HR2(double x) { return (x * CM2FT); }
constexpr double CM_PER_HR2_TO_Y_PER_HR2 (double x) { return (x * CM2Y ); }
constexpr double CM_PER_HR2_TO_MI_PER_HR2(double x) { return (x * CM2MI); }

constexpr double CM_PER_HR2_TO_MM_PER_S2(double x) { return (x * CM2MM / pow(HR2S, 2)); }
constexpr double CM_PER_HR2_TO_CM_PER_S2(double x) { return (x * 1.0   / pow(HR2S, 2)); }
constexpr double CM_PER_HR2_TO_DM_PER_S2(double x) { return (x * CM2DM / pow(HR2S, 2)); }
constexpr double CM_PER_HR2_TO_M_PER_S2 (double x) { return (x * CM2M  / pow(HR2S, 2)); }
constexpr double CM_PER_HR2_TO_KM_PER_S2(double x) { return (x * CM2KM / pow(HR2S, 2)); }
constexpr double CM_PER_HR2_TO_IN_PER_S2(double x) { return (x * CM2IN / pow(HR2S, 2)); }
constexpr double CM_PER_HR2_TO_FT_PER_S2(double x) { return (x * CM2FT / pow(HR2S, 2)); }
constexpr double CM_PER_HR2_TO_Y_PER_S2 (double x) { return (x * CM2Y  / pow(HR2S, 2)); }
constexpr double CM_PER_HR2_TO_MI_PER_S2(double x) { return (x * CM2MI / pow(HR2S, 2)); }


constexpr double DM_PER_S2_TO_MM_PER_S2(double x) { return (x * DM2MM); }
constexpr double DM_PER_S2_TO_CM_PER_S2(double x) { return (x * DM2CM); }
constexpr double DM_PER_S2_TO_M_PER_S2 (double x) { return (x * DM2M ); }
constexpr double DM_PER_S2_TO_KM_PER_S2(double x) { return (x * DM2KM); }
constexpr double DM_PER_S2_TO_IN_PER_S2(double x) { return (x * DM2IN); }
constexpr double DM_PER_S2_TO_FT_PER_S2(double x) { return (x * DM2FT); }
constexpr double DM_PER_S2_TO_Y_PER_S2 (double x) { return (x * DM2Y ); }
constexpr double DM_PER_S2_TO_MI_PER_S2(double x) { return (x * DM2MI); }

constexpr double DM_PER_S2_TO_MM_PER_HR2(double x) { return (x * DM2MM / pow(S2HR, 2)); }
constexpr double DM_PER_S2_TO_CM_PER_HR2(double x) { return (x * DM2CM / pow(S2HR, 2)); }
constexpr double DM_PER_S2_TO_DM_PER_HR2(double x) { return (x * 1.0   / pow(S2HR, 2)); }
constexpr double DM_PER_S2_TO_M_PER_HR2 (double x) { return (x * DM2M  / pow(S2HR, 2)); }
constexpr double DM_PER_S2_TO_KM_PER_HR2(double x) { return (x * DM2KM / pow(S2HR, 2)); }
constexpr double DM_PER_S2_TO_IN_PER_HR2(double x) { return (x * DM2IN / pow(S2HR, 2)); }
constexpr double DM_PER_S2_TO_FT_PER_HR2(double x) { return (x * DM2FT / pow(S2HR, 2)); }
constexpr double DM_PER_S2_TO_Y_PER_HR2 (double x) { return (x * DM2Y  / pow(S2HR, 2)); }
constexpr double DM_PER_S2_TO_MI_PER_HR2(double x) { return (x * DM2MI / pow(S2HR, 2)); }

constexpr double DM_PER_HR2_TO_MM_PER_HR2(double x) { return (x * DM2MM); }
constexpr double DM_PER_HR2_TO_CM_PER_HR2(double x) { return (x * DM2CM); }
constexpr double DM_PER_HR2_TO_M_PER_HR2 (double x) { return (x * DM2M ); }
constexpr double DM_PER_HR2_TO_KM_PER_HR2(double x) { return (x * DM2KM); }
constexpr double DM_PER_HR2_TO_IN_PER_HR2(double x) { return (x * DM2IN); }
constexpr double DM_PER_HR2_TO_FT_PER_HR2(double x) { return (x * DM2FT); }
constexpr double DM_PER_HR2_TO_Y_PER_HR2 (double x) { return (x * DM2Y ); }
constexpr double DM_PER_HR2_TO_MI_PER_HR2(double x) { return (x * DM2MI); }

constexpr double DM_PER_HR2_TO_MM_PER_S2(double x) { return (x * DM2MM / pow(HR2S, 2)); }
constexpr double DM_PER_HR2_TO_CM_PER_S2(double x) { return (x * DM2CM / pow(HR2S, 2)); }
constexpr double DM_PER_HR2_TO_DM_PER_S2(double x) { return (x * 1.0   / pow(HR2S, 2)); }
constexpr double DM_PER_HR2_TO_M_PER_S2 (double x) { return (x * DM2M  / pow(HR2S, 2)); }
constexpr double DM_PER_HR2_TO_KM_PER_S2(double x) { return (x * DM2KM / pow(HR2S, 2)); }
constexpr double DM_PER_HR2_TO_IN_PER_S2(double x) { return (x * DM2IN / pow(HR2S, 2)); }
constexpr double DM_PER_HR2_TO_FT_PER_S2(double x) { return (x * DM2FT / pow(HR2S, 2)); }
constexpr double DM_PER_HR2_TO_Y_PER_S2 (double x) { return (x * DM2Y  / pow(HR2S, 2)); }
constexpr double DM_PER_HR2_TO_MI_PER_S2(double x) { return (x * DM2MI / pow(HR2S, 2)); }


constexpr double M_PER_S2_TO_MM_PER_S2(double x) { return (x * M2MM); }
constexpr double M_PER_S2_TO_CM_PER_S2(double x) { return (x * M2CM); }
constexpr double M_PER_S2_TO_DM_PER_S2(double x) { return (x * M2DM); }
constexpr double M_PER_S2_TO_KM_PER_S2(double x) { return (x * M2KM); }
constexpr double M_PER_S2_TO_IN_PER_S2(double x) { return (x * M2IN); }
constexpr double M_PER_S2_TO_FT_PER_S2(double x) { return (x * M2FT); }
constexpr double M_PER_S2_TO_Y_PER_S2 (double x) { return (x * M2Y ); }
constexpr double M_PER_S2_TO_MI_PER_S2(double x) { return (x * M2MI); }

constexpr double M_PER_S2_TO_MM_PER_HR2(double x) { return (x * M2MM / pow(S2HR, 2)); }
constexpr double M_PER_S2_TO_CM_PER_HR2(double x) { return (x * M2CM / pow(S2HR, 2)); }
constexpr double M_PER_S2_TO_DM_PER_HR2(double x) { return (x * M2DM / pow(S2HR, 2)); }
constexpr double M_PER_S2_TO_M_PER_HR2 (double x) { return (x * 1.0  / pow(S2HR, 2)); }
constexpr double M_PER_S2_TO_KM_PER_HR2(double x) { return (x * M2KM / pow(S2HR, 2)); }
constexpr double M_PER_S2_TO_IN_PER_HR2(double x) { return (x * M2IN / pow(S2HR, 2)); }
constexpr double M_PER_S2_TO_FT_PER_HR2(double x) { return (x * M2FT / pow(S2HR, 2)); }
constexpr double M_PER_S2_TO_Y_PER_HR2 (double x) { return (x * M2Y  / pow(S2HR, 2)); }
constexpr double M_PER_S2_TO_MI_PER_HR2(double x) { return (x * M2MI / pow(S2HR, 2)); }

constexpr double M_PER_HR2_TO_MM_PER_HR2(double x) { return (x * M2MM); }
constexpr double M_PER_HR2_TO_CM_PER_HR2(double x) { return (x * M2CM); }
constexpr double M_PER_HR2_TO_DM_PER_HR2(double x) { return (x * M2DM); }
constexpr double M_PER_HR2_TO_KM_PER_HR2(double x) { return (x * M2KM); }
constexpr double M_PER_HR2_TO_IN_PER_HR2(double x) { return (x * M2IN); }
constexpr double M_PER_HR2_TO_FT_PER_HR2(double x) { return (x * M2FT); }
constexpr double M_PER_HR2_TO_Y_PER_HR2 (double x) { return (x * M2Y ); }
constexpr double M_PER_HR2_TO_MI_PER_HR2(double x) { return (x * M2MI); }

constexpr double M_PER_HR2_TO_MM_PER_S2(double x) { return (x * M2MM / pow(HR2S, 2)); }
constexpr double M_PER_HR2_TO_CM_PER_S2(double x) { return (x * M2CM / pow(HR2S, 2)); }
constexpr double M_PER_HR2_TO_DM_PER_S2(double x) { return (x * M2DM / pow(HR2S, 2)); }
constexpr double M_PER_HR2_TO_M_PER_S2 (double x) { return (x * 1.0  / pow(HR2S, 2)); }
constexpr double M_PER_HR2_TO_KM_PER_S2(double x) { return (x * M2KM / pow(HR2S, 2)); }
constexpr double M_PER_HR2_TO_IN_PER_S2(double x) { return (x * M2IN / pow(HR2S, 2)); }
constexpr double M_PER_HR2_TO_FT_PER_S2(double x) { return (x * M2FT / pow(HR2S, 2)); }
constexpr double M_PER_HR2_TO_Y_PER_S2 (double x) { return (x * M2Y  / pow(HR2S, 2)); }
constexpr double M_PER_HR2_TO_MI_PER_S2(double x) { return (x * M2MI / pow(HR2S, 2)); }


constexpr double KM_PER_S2_TO_MM_PER_S2(double x) { return (x * KM2MM); }
constexpr double KM_PER_S2_TO_CM_PER_S2(double x) { return (x * KM2CM); }
constexpr double KM_PER_S2_TO_DM_PER_S2(double x) { return (x * KM2DM); }
constexpr double KM_PER_S2_TO_M_PER_S2 (double x) { return (x * KM2M ); }
constexpr double KM_PER_S2_TO_IN_PER_S2(double x) { return (x * KM2IN); }
constexpr double KM_PER_S2_TO_FT_PER_S2(double x) { return (x * KM2FT); }
constexpr double KM_PER_S2_TO_Y_PER_S2 (double x) { return (x * KM2Y ); }
constexpr double KM_PER_S2_TO_MI_PER_S2(double x) { return (x * KM2MI); }

constexpr double KM_PER_S2_TO_MM_PER_HR2(double x) { return (x * KM2MM / pow(S2HR, 2)); }
constexpr double KM_PER_S2_TO_CM_PER_HR2(double x) { return (x * KM2CM / pow(S2HR, 2)); }
constexpr double KM_PER_S2_TO_DM_PER_HR2(double x) { return (x * KM2DM / pow(S2HR, 2)); }
constexpr double KM_PER_S2_TO_M_PER_HR2 (double x) { return (x * KM2M  / pow(S2HR, 2)); }
constexpr double KM_PER_S2_TO_KM_PER_HR2(double x) { return (x * 1.0   / pow(S2HR, 2)); }
constexpr double KM_PER_S2_TO_IN_PER_HR2(double x) { return (x * KM2IN / pow(S2HR, 2)); }
constexpr double KM_PER_S2_TO_FT_PER_HR2(double x) { return (x * KM2FT / pow(S2HR, 2)); }
constexpr double KM_PER_S2_TO_Y_PER_HR2 (double x) { return (x * KM2Y  / pow(S2HR, 2)); }
constexpr double KM_PER_S2_TO_MI_PER_HR2(double x) { return (x * KM2MI / pow(S2HR, 2)); }

constexpr double KM_PER_HR2_TO_MM_PER_HR2(double x) { return (x * KM2MM); }
constexpr double KM_PER_HR2_TO_CM_PER_HR2(double x) { return (x * KM2CM); }
constexpr double KM_PER_HR2_TO_DM_PER_HR2(double x) { return (x * KM2DM); }
constexpr double KM_PER_HR2_TO_M_PER_HR2 (double x) { return (x * KM2M ); }
constexpr double KM_PER_HR2_TO_IN_PER_HR2(double x) { return (x * KM2IN); }
constexpr double KM_PER_HR2_TO_FT_PER_HR2(double x) { return (x * KM2FT); }
constexpr double KM_PER_HR2_TO_Y_PER_HR2 (double x) { return (x * KM2Y ); }
constexpr double KM_PER_HR2_TO_MI_PER_HR2(double x) { return (x * KM2MI); }

constexpr double KM_PER_HR2_TO_MM_PER_S2(double x) { return (x * KM2MM / pow(HR2S, 2)); }
constexpr double KM_PER_HR2_TO_CM_PER_S2(double x) { return (x * KM2CM / pow(HR2S, 2)); }
constexpr double KM_PER_HR2_TO_DM_PER_S2(double x) { return (x * KM2DM / pow(HR2S, 2)); }
constexpr double KM_PER_HR2_TO_M_PER_S2 (double x) { return (x * KM2M  / pow(HR2S, 2)); }
constexpr double KM_PER_HR2_TO_KM_PER_S2(double x) { return (x * 1.0   / pow(HR2S, 2)); }
constexpr double KM_PER_HR2_TO_IN_PER_S2(double x) { return (x * KM2IN / pow(HR2S, 2)); }
constexpr double KM_PER_HR2_TO_FT_PER_S2(double x) { return (x * KM2FT / pow(HR2S, 2)); }
constexpr double KM_PER_HR2_TO_Y_PER_S2 (double x) { return (x * KM2Y  / pow(HR2S, 2)); }
constexpr double KM_PER_HR2_TO_MI_PER_S2(double x) { return (x * KM2MI / pow(HR2S, 2)); }


constexpr double IN_PER_S2_TO_MM_PER_S2(double x) { return (x * IN2MM); }
constexpr double IN_PER_S2_TO_CM_PER_S2(double x) { return (x * IN2CM); }
constexpr double IN_PER_S2_TO_DM_PER_S2(double x) { return (x * IN2DM); }
constexpr double IN_PER_S2_TO_M_PER_S2 (double x) { return (x * IN2M ); }
constexpr double IN_PER_S2_TO_KM_PER_S2(double x) { return (x * IN2KM); }
constexpr double IN_PER_S2_TO_FT_PER_S2(double x) { return (x * IN2FT); }
constexpr double IN_PER_S2_TO_Y_PER_S2 (double x) { return (x * IN2Y ); }
constexpr double IN_PER_S2_TO_MI_PER_S2(double x) { return (x * IN2MI); }

constexpr double IN_PER_S2_TO_MM_PER_HR2(double x) { return (x * IN2MM / pow(S2HR, 2)); }
constexpr double IN_PER_S2_TO_CM_PER_HR2(double x) { return (x * IN2CM / pow(S2HR, 2)); }
constexpr double IN_PER_S2_TO_DM_PER_HR2(double x) { return (x * IN2DM / pow(S2HR, 2)); }
constexpr double IN_PER_S2_TO_M_PER_HR2 (double x) { return (x * IN2M  / pow(S2HR, 2)); }
constexpr double IN_PER_S2_TO_KM_PER_HR2(double x) { return (x * IN2KM / pow(S2HR, 2)); }
constexpr double IN_PER_S2_TO_IN_PER_HR2(double x) { return (x * 1.0   / pow(S2HR, 2)); }
constexpr double IN_PER_S2_TO_FT_PER_HR2(double x) { return (x * IN2FT / pow(S2HR, 2)); }
constexpr double IN_PER_S2_TO_Y_PER_HR2 (double x) { return (x * IN2Y  / pow(S2HR, 2)); }
constexpr double IN_PER_S2_TO_MI_PER_HR2(double x) { return (x * IN2MI / pow(S2HR, 2)); }

constexpr double IN_PER_HR2_TO_MM_PER_HR2(double x) { return (x * IN2MM); }
constexpr double IN_PER_HR2_TO_CM_PER_HR2(double x) { return (x * IN2CM); }
constexpr double IN_PER_HR2_TO_DM_PER_HR2(double x) { return (x * IN2DM); }
constexpr double IN_PER_HR2_TO_M_PER_HR2 (double x) { return (x * IN2M ); }
constexpr double IN_PER_HR2_TO_KM_PER_HR2(double x) { return (x * IN2KM); }
constexpr double IN_PER_HR2_TO_FT_PER_HR2(double x) { return (x * IN2FT); }
constexpr double IN_PER_HR2_TO_Y_PER_HR2 (double x) { return (x * IN2Y ); }
constexpr double IN_PER_HR2_TO_MI_PER_HR2(double x) { return (x * IN2MI); }

constexpr double IN_PER_HR2_TO_MM_PER_S2(double x) { return (x * IN2MM / pow(HR2S, 2)); }
constexpr double IN_PER_HR2_TO_CM_PER_S2(double x) { return (x * IN2CM / pow(HR2S, 2)); }
constexpr double IN_PER_HR2_TO_DM_PER_S2(double x) { return (x * IN2DM / pow(HR2S, 2)); }
constexpr double IN_PER_HR2_TO_M_PER_S2 (double x) { return (x * IN2M  / pow(HR2S, 2)); }
constexpr double IN_PER_HR2_TO_KM_PER_S2(double x) { return (x * IN2KM / pow(HR2S, 2)); }
constexpr double IN_PER_HR2_TO_IN_PER_S2(double x) { return (x * 1.0   / pow(HR2S, 2)); }
constexpr double IN_PER_HR2_TO_FT_PER_S2(double x) { return (x * IN2FT / pow(HR2S, 2)); }
constexpr double IN_PER_HR2_TO_Y_PER_S2 (double x) { return (x * IN2Y  / pow(HR2S, 2)); }
constexpr double IN_PER_HR2_TO_MI_PER_S2(double x) { return (x * IN2MI / pow(HR2S, 2)); }


constexpr double FT_PER_S2_TO_MM_PER_S2(double x) { return (x * FT2MM); }
constexpr double FT_PER_S2_TO_CM_PER_S2(double x) { return (x * FT2CM); }
constexpr double FT_PER_S2_TO_DM_PER_S2(double x) { return (x * FT2DM); }
constexpr double FT_PER_S2_TO_M_PER_S2 (double x) { return (x * FT2M ); }
constexpr double FT_PER_S2_TO_KM_PER_S2(double x) { return (x * FT2KM); }
constexpr double FT_PER_S2_TO_IN_PER_S2(double x) { return (x * FT2IN); }
constexpr double FT_PER_S2_TO_Y_PER_S2 (double x) { return (x * FT2Y ); }
constexpr double FT_PER_S2_TO_MI_PER_S2(double x) { return (x * FT2MI); }

constexpr double FT_PER_S2_TO_MM_PER_HR2(double x) { return (x * FT2MM / pow(S2HR, 2)); }
constexpr double FT_PER_S2_TO_CM_PER_HR2(double x) { return (x * FT2CM / pow(S2HR, 2)); }
constexpr double FT_PER_S2_TO_DM_PER_HR2(double x) { return (x * FT2DM / pow(S2HR, 2)); }
constexpr double FT_PER_S2_TO_M_PER_HR2 (double x) { return (x * FT2M  / pow(S2HR, 2)); }
constexpr double FT_PER_S2_TO_KM_PER_HR2(double x) { return (x * FT2KM / pow(S2HR, 2)); }
constexpr double FT_PER_S2_TO_IN_PER_HR2(double x) { return (x * FT2IN / pow(S2HR, 2)); }
constexpr double FT_PER_S2_TO_FT_PER_HR2(double x) { return (x * 1.0   / pow(S2HR, 2)); }
constexpr double FT_PER_S2_TO_Y_PER_HR2 (double x) { return (x * FT2Y  / pow(S2HR, 2)); }
constexpr double FT_PER_S2_TO_MI_PER_HR2(double x) { return (x * FT2MI / pow(S2HR, 2)); }

constexpr double FT_PER_HR2_TO_MM_PER_HR2(double x) { return (x * FT2MM); }
constexpr double FT_PER_HR2_TO_CM_PER_HR2(double x) { return (x * FT2CM); }
constexpr double FT_PER_HR2_TO_DM_PER_HR2(double x) { return (x * FT2DM); }
constexpr double FT_PER_HR2_TO_M_PER_HR2 (double x) { return (x * FT2M ); }
constexpr double FT_PER_HR2_TO_KM_PER_HR2(double x) { return (x * FT2KM); }
constexpr double FT_PER_HR2_TO_IN_PER_HR2(double x) { return (x * FT2IN); }
constexpr double FT_PER_HR2_TO_Y_PER_HR2 (double x) { return (x * FT2Y ); }
constexpr double FT_PER_HR2_TO_MI_PER_HR2(double x) { return (x * FT2MI); }

constexpr double FT_PER_HR2_TO_MM_PER_S2(double x) { return (x * FT2MM / pow(HR2S, 2)); }
constexpr double FT_PER_HR2_TO_CM_PER_S2(double x) { return (x * FT2CM / pow(HR2S, 2)); }
constexpr double FT_PER_HR2_TO_DM_PER_S2(double x) { return (x * FT2DM / pow(HR2S, 2)); }
constexpr double FT_PER_HR2_TO_M_PER_S2 (double x) { return (x * FT2M  / pow(HR2S, 2)); }
constexpr double FT_PER_HR2_TO_KM_PER_S2(double x) { return (x * FT2KM / pow(HR2S, 2)); }
constexpr double FT_PER_HR2_TO_IN_PER_S2(double x) { return (x * FT2IN / pow(HR2S, 2)); }
constexpr double FT_PER_HR2_TO_FT_PER_S2(double x) { return (x * 1.0   / pow(HR2S, 2)); }
constexpr double FT_PER_HR2_TO_Y_PER_S2 (double x) { return (x * FT2Y  / pow(HR2S, 2)); }
constexpr double FT_PER_HR2_TO_MI_PER_S2(double x) { return (x * FT2MI / pow(HR2S, 2)); }


constexpr double Y_PER_S2_TO_MM_PER_S2(double x) { return (x * Y2MM); }
constexpr double Y_PER_S2_TO_CM_PER_S2(double x) { return (x * Y2CM); }
constexpr double Y_PER_S2_TO_DM_PER_S2(double x) { return (x * Y2DM); }
constexpr double Y_PER_S2_TO_M_PER_S2 (double x) { return (x * Y2M ); }
constexpr double Y_PER_S2_TO_KM_PER_S2(double x) { return (x * Y2KM); }
constexpr double Y_PER_S2_TO_IN_PER_S2(double x) { return (x * Y2IN); }
constexpr double Y_PER_S2_TO_FT_PER_S2(double x) { return (x * Y2FT); }
constexpr double Y_PER_S2_TO_MI_PER_S2(double x) { return (x * Y2MI); }

constexpr double Y_PER_S2_TO_MM_PER_HR2(double x) { return (x * Y2MM / pow(S2HR, 2)); }
constexpr double Y_PER_S2_TO_CM_PER_HR2(double x) { return (x * Y2CM / pow(S2HR, 2)); }
constexpr double Y_PER_S2_TO_DM_PER_HR2(double x) { return (x * Y2DM / pow(S2HR, 2)); }
constexpr double Y_PER_S2_TO_M_PER_HR2 (double x) { return (x * Y2M  / pow(S2HR, 2)); }
constexpr double Y_PER_S2_TO_KM_PER_HR2(double x) { return (x * Y2KM / pow(S2HR, 2)); }
constexpr double Y_PER_S2_TO_IN_PER_HR2(double x) { return (x * Y2IN / pow(S2HR, 2)); }
constexpr double Y_PER_S2_TO_FT_PER_HR2(double x) { return (x * Y2FT / pow(S2HR, 2)); }
constexpr double Y_PER_S2_TO_Y_PER_HR2 (double x) { return (x * 1.0  / pow(S2HR, 2)); }
constexpr double Y_PER_S2_TO_MI_PER_HR2(double x) { return (x * Y2MI / pow(S2HR, 2)); }

constexpr double Y_PER_HR2_TO_MM_PER_HR2(double x) { return (x * Y2MM); }
constexpr double Y_PER_HR2_TO_CM_PER_HR2(double x) { return (x * Y2CM); }
constexpr double Y_PER_HR2_TO_DM_PER_HR2(double x) { return (x * Y2DM); }
constexpr double Y_PER_HR2_TO_M_PER_HR2 (double x) { return (x * Y2M ); }
constexpr double Y_PER_HR2_TO_KM_PER_HR2(double x) { return (x * Y2KM); }
constexpr double Y_PER_HR2_TO_IN_PER_HR2(double x) { return (x * Y2IN); }
constexpr double Y_PER_HR2_TO_FT_PER_HR2(double x) { return (x * Y2FT); }
constexpr double Y_PER_HR2_TO_MI_PER_HR2(double x) { return (x * Y2MI); }

constexpr double Y_PER_HR2_TO_MM_PER_S2(double x) { return (x * Y2MM / pow(HR2S, 2)); }
constexpr double Y_PER_HR2_TO_CM_PER_S2(double x) { return (x * Y2CM / pow(HR2S, 2)); }
constexpr double Y_PER_HR2_TO_DM_PER_S2(double x) { return (x * Y2DM / pow(HR2S, 2)); }
constexpr double Y_PER_HR2_TO_M_PER_S2 (double x) { return (x * Y2M  / pow(HR2S, 2)); }
constexpr double Y_PER_HR2_TO_KM_PER_S2(double x) { return (x * Y2KM / pow(HR2S, 2)); }
constexpr double Y_PER_HR2_TO_IN_PER_S2(double x) { return (x * Y2IN / pow(HR2S, 2)); }
constexpr double Y_PER_HR2_TO_FT_PER_S2(double x) { return (x * Y2FT / pow(HR2S, 2)); }
constexpr double Y_PER_HR2_TO_Y_PER_S2 (double x) { return (x * 1.0  / pow(HR2S, 2)); }
constexpr double Y_PER_HR2_TO_MI_PER_S2(double x) { return (x * Y2MI / pow(HR2S, 2)); }


constexpr double MI_PER_S2_TO_MM_PER_S2(double x) { return (x * MI2MM); }
constexpr double MI_PER_S2_TO_CM_PER_S2(double x) { return (x * MI2CM); }
constexpr double MI_PER_S2_TO_DM_PER_S2(double x) { return (x * MI2DM); }
constexpr double MI_PER_S2_TO_M_PER_S2 (double x) { return (x * MI2M ); }
constexpr double MI_PER_S2_TO_KM_PER_S2(double x) { return (x * MI2KM); }
constexpr double MI_PER_S2_TO_IN_PER_S2(double x) { return (x * MI2IN); }
constexpr double MI_PER_S2_TO_FT_PER_S2(double x) { return (x * MI2FT); }
constexpr double MI_PER_S2_TO_Y_PER_S2 (double x) { return (x * MI2Y ); }

constexpr double MI_PER_S2_TO_MM_PER_HR2(double x) { return (x * MI2MM / pow(S2HR, 2)); }
constexpr double MI_PER_S2_TO_CM_PER_HR2(double x) { return (x * MI2CM / pow(S2HR, 2)); }
constexpr double MI_PER_S2_TO_DM_PER_HR2(double x) { return (x * MI2DM / pow(S2HR, 2)); }
constexpr double MI_PER_S2_TO_M_PER_HR2 (double x) { return (x * MI2M  / pow(S2HR, 2)); }
constexpr double MI_PER_S2_TO_KM_PER_HR2(double x) { return (x * MI2KM / pow(S2HR, 2)); }
constexpr double MI_PER_S2_TO_IN_PER_HR2(double x) { return (x * MI2IN / pow(S2HR, 2)); }
constexpr double MI_PER_S2_TO_FT_PER_HR2(double x) { return (x * MI2FT / pow(S2HR, 2)); }
constexpr double MI_PER_S2_TO_Y_PER_HR2 (double x) { return (x * MI2Y  / pow(S2HR, 2)); }
constexpr double MI_PER_S2_TO_MI_PER_HR2(double x) { return (x * 1.0   / pow(S2HR, 2)); }

constexpr double MI_PER_HR2_TO_MM_PER_HR2(double x) { return (x * MI2MM); }
constexpr double MI_PER_HR2_TO_CM_PER_HR2(double x) { return (x * MI2CM); }
constexpr double MI_PER_HR2_TO_DM_PER_HR2(double x) { return (x * MI2DM); }
constexpr double MI_PER_HR2_TO_M_PER_HR2 (double x) { return (x * MI2M ); }
constexpr double MI_PER_HR2_TO_KM_PER_HR2(double x) { return (x * MI2KM); }
constexpr double MI_PER_HR2_TO_IN_PER_HR2(double x) { return (x * MI2IN); }
constexpr double MI_PER_HR2_TO_FT_PER_HR2(double x) { return (x * MI2FT); }
constexpr double MI_PER_HR2_TO_Y_PER_HR2 (double x) { return (x * MI2Y ); }

constexpr double MI_PER_HR2_TO_MM_PER_S2(double x) { return (x * MI2MM / pow(HR2S, 2)); }
constexpr double MI_PER_HR2_TO_CM_PER_S2(double x) { return (x * MI2CM / pow(HR2S, 2)); }
constexpr double MI_PER_HR2_TO_DM_PER_S2(double x) { return (x * MI2DM / pow(HR2S, 2)); }
constexpr double MI_PER_HR2_TO_M_PER_S2 (double x) { return (x * MI2M  / pow(HR2S, 2)); }
constexpr double MI_PER_HR2_TO_KM_PER_S2(double x) { return (x * MI2KM / pow(HR2S, 2)); }
constexpr double MI_PER_HR2_TO_IN_PER_S2(double x) { return (x * MI2IN / pow(HR2S, 2)); }
constexpr double MI_PER_HR2_TO_FT_PER_S2(double x) { return (x * MI2FT / pow(HR2S, 2)); }
constexpr double MI_PER_HR2_TO_Y_PER_S2 (double x) { return (x * MI2Y  / pow(HR2S, 2)); }
constexpr double MI_PER_HR2_TO_MI_PER_S2(double x) { return (x * 1.0   / pow(HR2S, 2)); }





// Mass
constexpr double G_TO_KG(double x) { return (x * G2KG); }
constexpr double G_TO_OZ(double x) { return (x * G2OZ); }
constexpr double G_TO_LB(double x) { return (x * G2LB); }

constexpr double KG_TO_G (double x) { return (x * KG2G ); }
constexpr double KG_TO_OZ(double x) { return (x * KG2OZ); }
constexpr double KG_TO_LB(double x) { return (x * KG2LB); }

constexpr double OZ_TO_G (double x) { return (x * OZ2G ); }
constexpr double OZ_TO_KG(double x) { return (x * OZ2KG); }
constexpr double OZ_TO_LB(double x) { return (x * OZ2LB); }

constexpr double LB_TO_G (double x) { return (x * LB2G ); }
constexpr double LB_TO_KG(double x) { return (x * LB2KG); }
constexpr double LB_TO_OZ(double x) { return (x * LB2OZ); }




// Volume
constexpr double CM3_TO_ML(double x) { return (x * CM32ML); }
constexpr double CM3_TO_L (double x) { return (x * CM32L ); }
constexpr double CM3_TO_CP(double x) { return (x * CM32CP); }
constexpr double CM3_TO_PT(double x) { return (x * CM32PT); }
constexpr double CM3_TO_QT(double x) { return (x * CM32QT); }
constexpr double CM3_TO_GL(double x) { return (x * CM32GL); }

constexpr double ML_TO_CM3(double x) { return (x * ML2CM3); }
constexpr double ML_TO_L  (double x) { return (x * ML2L  ); }
constexpr double ML_TO_CP (double x) { return (x * ML2CP ); }
constexpr double ML_TO_PT (double x) { return (x * ML2PT ); }
constexpr double ML_TO_QT (double x) { return (x * ML2QT ); }
constexpr double ML_TO_GL (double x) { return (x * ML2GL ); }

constexpr double L_TO_CM3(double x) { return (x * L2CM3); }
constexpr double L_TO_ML (double x) { return (x * L2ML ); }
constexpr double L_TO_CP (double x) { return (x * L2CP ); }
constexpr double L_TO_PT (double x) { return (x * L2PT ); }
constexpr double L_TO_QT (double x) { return (x * L2QT ); }
constexpr double L_TO_GL (double x) { return (x * L2GL ); }

constexpr double CP_TO_CM3(double x) { return (x * CP2CM3); }
constexpr double CP_TO_ML (double x) { return (x * CP2ML ); }
constexpr double CP_TO_L  (double x) { return (x * CP2L  ); }
constexpr double CP_TO_PT (double x) { return (x * CP2PT ); }
constexpr double CP_TO_QT (double x) { return (x * CP2QT ); }
constexpr double CP_TO_GL (double x) { return (x * CP2GL ); }

constexpr double PT_TO_CM3(double x) { return (x * PT2CM3); }
constexpr double PT_TO_ML (double x) { return (x * PT2ML ); }
constexpr double PT_TO_L  (double x) { return (x * PT2L  ); }
constexpr double PT_TO_CP (double x) { return (x * PT2CP ); }
constexpr double PT_TO_QT (double x) { return (x * PT2QT ); }
constexpr double PT_TO_GL (double x) { return (x * PT2GL ); }

constexpr double QT_TO_CM3(double x) { return (x * QT2CM3); }
constexpr double QT_TO_ML (double x) { return (x * QT2ML ); }
constexpr double QT_TO_L  (double x) { return (x * QT2L  ); }
constexpr double QT_TO_CP (double x) { return (x * QT2CP ); }
constexpr double QT_TO_PT (double x) { return (x * QT2PT ); }
constexpr double QT_TO_GL (double x) { return (x * QT2GL ); }

constexpr double GL_TO_CM3(double x) { return (x * GL2CM3); }
constexpr double GL_TO_ML (double x) { return (x * GL2ML ); }
constexpr double GL_TO_L  (double x) { return (x * GL2L  ); }
constexpr double GL_TO_CP (double x) { return (x * GL2CP ); }
constexpr double GL_TO_PT (double x) { return (x * GL2PT ); }
constexpr double GL_TO_QT (double x) { return (x * GL2QT ); }




// Density
// cm3/g
// ml/g
// l/g
// cup/g
// pint/g
// quart/g
// gallon/g
// cm3/kg
// ml/kg
// l/kg
// cup/kg
// pint/kg
// quart/kg
// gallon/kg
// cm3/oz
// ml/oz
// l/oz
// cup/oz
// pint/oz
// quart/oz
// gallon/oz
// cm3/lb
// ml/lb
// l/lb
// cup/lb
// pint/lb
// quart/lb
// gallon/lb




// Flow rate
// cm3/s
// ml/s
// l/s
// cup/s
// pint/s
// quart/s
// gallon/s
// cm3/min
// ml/min
// l/min
// cup/min
// pint/min
// quart/min
// gallon/min
// cm3/hr
// ml/hr
// l/hr
// cup/hr
// pint/hr
// quart/hr
// gallon/hr




// Temperature
constexpr double F_TO_C(double x) { return (((x - 32.0)   * 9.0) / 5.0); }
constexpr double F_TO_K(double x) { return (((x + 459.67) * 5.0) / 9.0); }

constexpr double C_TO_F(double x) { return ((x * 9.0 / 5.0) + 32.0); }
constexpr double C_TO_K(double x) { return ( x + 273.15);            }

constexpr double K_TO_C(double x) { return ( x - 273.15);              }
constexpr double K_TO_F(double x) { return ((x * 9.0 / 5.0) - 459.67); }




// Time
constexpr double NS_TO_US (double x) { return (x * NS2US ); }
constexpr double NS_TO_MS (double x) { return (x * NS2MS ); }
constexpr double NS_TO_S  (double x) { return (x * NS2S  ); }
constexpr double NS_TO_MIN(double x) { return (x * NS2MIN); }
constexpr double NS_TO_HR (double x) { return (x * NS2HR ); }
constexpr double NS_TO_DY (double x) { return (x * NS2DY ); }

constexpr double US_TO_NS (double x) { return (x * US2NS ); }
constexpr double US_TO_MS (double x) { return (x * US2MS ); }
constexpr double US_TO_S  (double x) { return (x * US2S  ); }
constexpr double US_TO_MIN(double x) { return (x * US2MIN); }
constexpr double US_TO_HR (double x) { return (x * US2HR ); }
constexpr double US_TO_DY (double x) { return (x * US2DY ); }

constexpr double MS_TO_NS (double x) { return (x * MS2NS ); }
constexpr double MS_TO_US (double x) { return (x * MS2US ); }
constexpr double MS_TO_S  (double x) { return (x * MS2S  ); }
constexpr double MS_TO_MIN(double x) { return (x * MS2MIN); }
constexpr double MS_TO_HR (double x) { return (x * MS2HR ); }
constexpr double MS_TO_DY (double x) { return (x * MS2DY ); }

constexpr double S_TO_NS (double x) { return (x * S2NS ); }
constexpr double S_TO_US (double x) { return (x * S2US ); }
constexpr double S_TO_MS (double x) { return (x * S2MS ); }
constexpr double S_TO_MIN(double x) { return (x * S2MIN); }
constexpr double S_TO_HR (double x) { return (x * S2HR ); }
constexpr double S_TO_DY (double x) { return (x * S2DY ); }

constexpr double MIN_TO_NS(double x) { return (x * MIN2NS); }
constexpr double MIN_TO_US(double x) { return (x * MIN2US); }
constexpr double MIN_TO_MS(double x) { return (x * MIN2MS); }
constexpr double MIN_TO_S (double x) { return (x * MIN2S ); }
constexpr double MIN_TO_HR(double x) { return (x * MIN2HR); }
constexpr double MIN_TO_DY(double x) { return (x * MIN2DY); }

constexpr double HR_TO_NS (double x) { return (x * HR2NS ); }
constexpr double HR_TO_US (double x) { return (x * HR2US ); }
constexpr double HR_TO_MS (double x) { return (x * HR2MS ); }
constexpr double HR_TO_S  (double x) { return (x * HR2S  ); }
constexpr double HR_TO_MIN(double x) { return (x * HR2MIN); }
constexpr double HR_TO_DY (double x) { return (x * HR2DY ); }

constexpr double DY_TO_NS (double x) { return (x * DY2NS ); }
constexpr double DY_TO_US (double x) { return (x * DY2US ); }
constexpr double DY_TO_MS (double x) { return (x * DY2MS ); }
constexpr double DY_TO_S  (double x) { return (x * DY2S  ); }
constexpr double DY_TO_MIN(double x) { return (x * DY2MIN); }
constexpr double DY_TO_HR (double x) { return (x * DY2HR ); }




// Force
constexpr double N_TO_DYN(double x) { return (x * N2DYN); }
constexpr double N_TO_LBF(double x) { return (x * N2LBF); }

constexpr double DYN_TO_N  (double x) { return (x * DYN2N  ); }
constexpr double DYN_TO_LBF(double x) { return (x * DYN2LBF); }

constexpr double LBF_TO_N  (double x) { return (x * LBF2N  ); }
constexpr double LBF_TO_DYN(double x) { return (x * LBF2DYN); }




// Energy
constexpr double J_TO_KJ  (double x) { return (x * J2KJ  ); }
constexpr double J_TO_BTU (double x) { return (x * J2BTU ); }
constexpr double J_TO_CAL (double x) { return (x * J2CAL ); }
constexpr double J_TO_KCAL(double x) { return (x * J2KCAL); }
constexpr double J_TO_WHR (double x) { return (x * J2WHR ); }
constexpr double J_TO_KWHR(double x) { return (x * J2KWHR); }

constexpr double KJ_TO_J   (double x) { return (x * KJ2J   ); }
constexpr double KJ_TO_BTU (double x) { return (x * KJ2BTU ); }
constexpr double KJ_TO_CAL (double x) { return (x * KJ2CAL ); }
constexpr double KJ_TO_KCAL(double x) { return (x * KJ2KCAL); }
constexpr double KJ_TO_WHR (double x) { return (x * KJ2WHR ); }
constexpr double KJ_TO_KWHR(double x) { return (x * KJ2KWHR); }

constexpr double BTU_TO_J   (double x) { return (x * BTU2J   ); }
constexpr double BTU_TO_KJ  (double x) { return (x * BTU2KJ  ); }
constexpr double BTU_TO_CAL (double x) { return (x * BTU2CAL ); }
constexpr double BTU_TO_KCAL(double x) { return (x * BTU2KCAL); }
constexpr double BTU_TO_WHR (double x) { return (x * BTU2WHR ); }
constexpr double BTU_TO_KWHR(double x) { return (x * BTU2KWHR); }

constexpr double CAL_TO_J   (double x) { return (x * CAL2J   ); }
constexpr double CAL_TO_KJ  (double x) { return (x * CAL2KJ  ); }
constexpr double CAL_TO_BTU (double x) { return (x * CAL2BTU ); }
constexpr double CAL_TO_KCAL(double x) { return (x * CAL2KCAL); }
constexpr double CAL_TO_WHR (double x) { return (x * CAL2WHR ); }
constexpr double CAL_TO_KWHR(double x) { return (x * CAL2KWHR); }

constexpr double KCAL_TO_J   (double x) { return (x * KCAL2J   ); }
constexpr double KCAL_TO_KJ  (double x) { return (x * KCAL2KJ  ); }
constexpr double KCAL_TO_BTU (double x) { return (x * KCAL2BTU ); }
constexpr double KCAL_TO_CAL (double x) { return (x * KCAL2CAL ); }
constexpr double KCAL_TO_WHR (double x) { return (x * KCAL2WHR ); }
constexpr double KCAL_TO_KWHR(double x) { return (x * KCAL2KWHR); }

constexpr double WHR_TO_J   (double x) { return (x * WHR2J   ); }
constexpr double WHR_TO_KJ  (double x) { return (x * WHR2KJ  ); }
constexpr double WHR_TO_BTU (double x) { return (x * WHR2BTU ); }
constexpr double WHR_TO_CAL (double x) { return (x * WHR2CAL ); }
constexpr double WHR_TO_KCAL(double x) { return (x * WHR2KCAL); }
constexpr double WHR_TO_KWHR(double x) { return (x * WHR2KWHR); }

constexpr double KWHR_TO_J   (double x) { return (x * KWHR2J   ); }
constexpr double KWHR_TO_KJ  (double x) { return (x * KWHR2KJ  ); }
constexpr double KWHR_TO_BTU (double x) { return (x * KWHR2BTU ); }
constexpr double KWHR_TO_CAL (double x) { return (x * KWHR2CAL ); }
constexpr double KWHR_TO_KCAL(double x) { return (x * KWHR2KCAL); }
constexpr double KWHR_TO_WHR (double x) { return (x * KWHR2WHR ); }




// Power
constexpr double MW_TO_W(double x) { return (x * MW2W); }

constexpr double W_TO_MW(double x) { return (x * W2MW); }




// Angles
// constexpr double RAD_TO_DEG(double x) { return (x * RAD2DEG); } // Teensy already defines RAD_TO_DEG

// constexpr double DEG_TO_RAD(double x) { return (x * DEG2RAD); } // Teensy already defines DEG_TO_RAD



// Frequency
constexpr double RADPERS_TO_HZ (double x) { return (x * RADPERS2HZ ); }
constexpr double RADPERS_TO_KHZ(double x) { return (x * RADPERS2KHZ); }
constexpr double RADPERS_TO_MHZ(double x) { return (x * RADPERS2MHZ); }
constexpr double RADPERS_TO_GHZ(double x) { return (x * RADPERS2GHZ); }
constexpr double RADPERS_TO_THZ(double x) { return (x * RADPERS2THZ); }

constexpr double HZ_TO_RADPERS (double x) { return (x * HZ2RADPERS); }
constexpr double HZ_TO_KHZ     (double x) { return (x * HZ2KHZ    ); }
constexpr double HZ_TO_MHZ     (double x) { return (x * HZ2MHZ    ); }
constexpr double HZ_TO_GHZ     (double x) { return (x * HZ2GHZ    ); }
constexpr double HZ_TO_THZ     (double x) { return (x * HZ2THZ    ); }

constexpr double KHZ_TO_RADPERS(double x) { return (x * KHZ2RADPERS); }
constexpr double KHZ_TO_HZ     (double x) { return (x * KHZ2HZ     ); }
constexpr double KHZ_TO_MHZ    (double x) { return (x * KHZ2MHZ    ); }
constexpr double KHZ_TO_GHZ    (double x) { return (x * KHZ2GHZ    ); }
constexpr double KHZ_TO_THZ    (double x) { return (x * KHZ2THZ    ); }

constexpr double MHZ_TO_RADPERS(double x) { return (x * MHZ2RADPERS); }
constexpr double MHZ_TO_HZ     (double x) { return (x * MHZ2HZ     ); }
constexpr double MHZ_TO_KHZ    (double x) { return (x * MHZ2KHZ    ); }
constexpr double MHZ_TO_GHZ    (double x) { return (x * MHZ2GHZ    ); }
constexpr double MHZ_TO_THZ    (double x) { return (x * MHZ2THZ    ); }

constexpr double GHZ_TO_RADPERS(double x) { return (x * GHZ2RADPERS); }
constexpr double GHZ_TO_HZ     (double x) { return (x * GHZ2HZ     ); }
constexpr double GHZ_TO_KHZ    (double x) { return (x * GHZ2KHZ    ); }
constexpr double GHZ_TO_MHZ    (double x) { return (x * GHZ2MHZ    ); }
constexpr double GHZ_TO_THZ    (double x) { return (x * GHZ2THZ    ); }

constexpr double THZ_TO_RADPERS(double x) { return (x * THZ2RADPERS); }
constexpr double THZ_TO_HZ     (double x) { return (x * THZ2HZ     ); }
constexpr double THZ_TO_KHZ    (double x) { return (x * THZ2KHZ    ); }
constexpr double THZ_TO_MHZ    (double x) { return (x * THZ2MHZ    ); }
constexpr double THZ_TO_GHZ    (double x) { return (x * THZ2GHZ    ); }