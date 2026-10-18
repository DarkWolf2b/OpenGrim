// ===== Lsixtwo/aW$rZ; _4e3056d1f41699aebeef1e481bc773b5 ()V (handler @ image 18f83d780, runtime 6ffff744d780) =====

void FUN_18f83d780(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x62ad,0x11f);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f83d7e2 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1829d2498 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



