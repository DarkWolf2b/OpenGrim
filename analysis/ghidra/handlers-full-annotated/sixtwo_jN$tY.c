// ===== Lsixtwo/jN$tY; _1237f65a23b9ad58566a7485d28194b4 ()V (handler @ image 187ec8710, runtime 6fffefad8710) =====

void FUN_187ec8710(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b132,0x433);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187ec8772 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180e0aeb8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



