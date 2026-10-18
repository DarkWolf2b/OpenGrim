// ===== Lsixtwo/jl$tN; _7f7fa61c37be324bb05a66ae5602bbda ()V (handler @ image 1880aed60, runtime 6fffefcbed60) =====

void FUN_1880aed60(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1ab5a,0x423);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001880aedc2 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180e7dbd8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



