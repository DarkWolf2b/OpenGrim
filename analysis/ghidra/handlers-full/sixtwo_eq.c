// ===== Lsixtwo/eq; _95f35cd333be09af769faf93936605a8 ()V (handler @ image 18cf6d580, runtime 6ffff4b7d580) =====

void FUN_18cf6d580(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018cf6d65f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820eeb60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



