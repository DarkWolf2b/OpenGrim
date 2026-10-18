// ===== Lsixtwo/eq; _95f35cd333be09af769faf93936605a8 ()V (handler @ image 18cf6d580, runtime 6ffff4b7d580) =====

void FUN_18cf6d580(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018cf6d65f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820eeb60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



