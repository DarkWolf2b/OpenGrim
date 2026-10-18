// ===== Lsixtwo/az$rU; _0dab8b099d33c9a6a17b61a3a90a48d6 ()V (handler @ image 18fbd2410, runtime 6ffff77e2410) =====

void FUN_18fbd2410(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x5231,0xfb);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018fbd2480 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182aa6428 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



