// ===== Lsixtwo/rt$wi; _988a3ee04a86731418afdacc062483b2 ()V (handler @ image 1847f1d00, runtime 6fffec401d00) =====

void FUN_1847f1d00(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x21518,0x521);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001847f1d62 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180238ca8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



