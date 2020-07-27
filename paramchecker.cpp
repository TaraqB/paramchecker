
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  bool retValue = true;
  if(bpm < 70 || bpm > 150) {
    retValue =  false;
  } else if(spo2 < 80) {
    retValue =  false;
  } else if(respRate < 30 || respRate > 60) {
    retValue =  false;
  }
  return retValue;
}
