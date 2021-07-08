 public void run()
 {
  Thread t1=Thread.currentThread();
  while(t==t1)
  {
   repaint();
   try
   {
    Thread.sleep(100);
   }
   catch(Exception e)
   {   }
  }
 }
 public void paint(Graphics g)
 {
  setBackground(Color.BLACK);
  g.setColor(Color.BLACK);
  x1=(x1+16)%400;
  x2=x2-16;
  y1=(y1+12)%300;
  y2=y2-12;
  if(y2<0)
   y2=288;
  if(x2<0)
   x2=384;
  //Draw the roads using 2 filled rectangles using black color.
  g.fillRect(0,130,400,40);
  g.fillRect(180,0,40,305);
  //Draw the white colored lines.
  g.setColor(Color.white);
  for(int i=0;i<1000;i++)
  {int y=(int)(30*Math.sin(i));
    g.drawLine(i*30,y+100,i*30+1,y+101);
  }
  for(int j=0;j<15;j++)
  {
   if(j!=7 && j!=8)
    g.drawLine(200,j*20,200,j*20+10);
  }
  //Draw 4 colored cars using filled round rectangles.
  g.setColor(Color.yellow);
  
  g.fillRoundRect(x2,152,20,8,2,2);
  g.fillRoundRect(x1,140,20,8,2,2);
  g.fillRoundRect(190,y1,8,20,2,2);
  g.fillRoundRect(202,y2,8,20,2,2);
 }
}