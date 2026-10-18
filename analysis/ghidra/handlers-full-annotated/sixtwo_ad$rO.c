// ===== Lsixtwo/ad$rO; _8bce1eac70aa2600e7e50c69b155bac5 ()V (handler @ image 19012b540, runtime 6ffff7d3b540) =====

void FUN_19012b540(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00019012b61f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182becf40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



