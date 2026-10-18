package sixtwo;

import net.minecraft.client.input.KeyInput;
import net.minecraft.client.input.MouseInput;

public class gA extends hH {
   private MouseInput cfYNO;
   private KeyInput mcpAc;
   private int eZWeT;
   private int BZQxa;
   private int nctbO;

   public gA(MouseInput var1, KeyInput var2, int var3, int var4, int var5) {
      this.cfYNO = var1;
      this.mcpAc = var2;
      this.eZWeT = var3;
      this.BZQxa = var4;
      this.nctbO = var5;
   }

   public MouseInput bbN() {
      return this.cfYNO;
   }

   public KeyInput bbO() {
      return this.mcpAc;
   }

   public int bbR() {
      return this.nctbO;
   }

   public int bbQ() {
      return this.BZQxa;
   }

   public int bbP() {
      return this.eZWeT;
   }
}
