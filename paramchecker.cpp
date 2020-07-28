#include <paramchecker.h>
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  bool retValue = false;
  
 if(vitalSpo2Ok(spo2) & vitalBmpOk(bpm) & vitalrespRateOk(respRate))
   retValue = true;
    
  return retValue;
}

bool vitalBmpOk(float bpm)
{
  bool retValue = true;
  
  if(bpm < 70 || bpm > 150) {
    retValue =  false;
  }
  return retValue;
}


bool vitalSpo2Ok(float spo2)
{
  bool retValue = true;
  
  if(spo2 < 80) {
    retValue =  false;
  } 
   return retValue;
}
bool vitalrespRateOk(float respRate)
{
  if(respRate < 30 || respRate > 60) {
    retValue =  false;
  } 
   return retValue;
}
