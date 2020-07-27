
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  bool retValue = false;
  
 if(vitalSpo2Ok(bpm) & vitalBmpOk(spo2) & vitalrespRateOk(respRate))
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
