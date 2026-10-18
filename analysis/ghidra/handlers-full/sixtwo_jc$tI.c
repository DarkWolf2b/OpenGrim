// ===== Lsixtwo/jc$tI; _f1b27ce0ecd890eb5121903a245a0c07 ()V (handler @ image 188438ca0, runtime 6ffff0048ca0) =====

void FUN_188438ca0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0xc58e,0x21d);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000188438d10 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f508f8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



