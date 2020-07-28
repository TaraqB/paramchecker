bool vitalBmpOk(float bpm);
bool vitalSpo2Ok(float spo2);
bool vitalrespRateOk(float respRate);
bool isVitalOk(float value,float min, float max);

bool isVitalOk(float value,float min, float max)
{
  bool retValue = true;
  
  if((value < min) && (value > max) ) retValue =false;
  
  return retValue;
}

bool vitalBmpOk(float bpm)
{
  bool retValue = false;
  
  if(isVitalOk(bpm,70,150)) retValue = true;
  
  return retValue;
}


bool vitalSpo2Ok(float spo2)
{
  bool retValue = false;
   if(isVitalOk(spo2,80,100)) retValue = true;
   return retValue;
}
bool vitalrespRateOk(float respRate)
{
 bool retValue = false;
   if(isVitalOk(respRate,30,60)) retValue = true;
   return retValue;
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  bool retValue = false;
  
 if((vitalSpo2Ok(spo2)) & (vitalBmpOk(bpm)) & (vitalrespRateOk(respRate)))
   retValue = true;
   
  /*
  if((isVitalOk(bpm,70,150)) && (isVitalOk(spo2,80,100)) && (isVitalOk(respRate,30,60)))
    retValue = true;
  */
  return retValue;
}
