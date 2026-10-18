// ===== Lsixtwo/mv; cmC ()Lnet/minecraft/class_241; (handler @ image 1871f0770, runtime 6fffeee00770) =====

void FUN_1871f0770(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x12cf,0x46);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001871f07ba did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b38380 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



