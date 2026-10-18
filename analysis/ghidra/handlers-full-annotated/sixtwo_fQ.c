// ===== Lsixtwo/fQ; _e4e61cf1cd02b1b2e46e5f297e1a41ef ()V (handler @ image 18a934a80, runtime 6ffff2544a80) =====

void FUN_18a934a80(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a934b5f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818c8490 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



