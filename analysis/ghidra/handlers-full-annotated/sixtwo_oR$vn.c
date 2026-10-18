// ===== Lsixtwo/oR$vn; _f0e7e779027d6af28060f3213c93eb75 ()V (handler @ image 1861d4670, runtime 6fffedde4670) =====

void FUN_1861d4670(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1f5da,0x4d5);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001861d46d2 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807c51b8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



