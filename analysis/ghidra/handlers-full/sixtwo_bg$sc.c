// ===== Lsixtwo/bg$sc; _24b91673e83bbd509eaef3399b56ed93 ()V (handler @ image 18f057900, runtime 6ffff6c67900) =====

void FUN_18f057900(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x266c,0x80);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018f057962 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827feab8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



