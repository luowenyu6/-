void  setup（）
{
  pinMode（0，OUTPUT）;
  pinMode（1，OUTPUT）;
  pinMode（2，OUTPUT）;
  pinMode（3，OUTPUT）;
  pinMode（4，OUTPUT）;
  串行。开始（9600）;
}
byte luo = 0 ;
void  loop（）
{
  如果（串行。可用的（）> 0）
  {
    luo = Serial。read（）;
    luo = luo  - ' 0 ' ;
    digitalWrite（0，LOW）;
    延迟（10）;
    if（luo＆0x1）
    {
      digitalWrite（1，HIGH）;
    }
    其他
    {
      digitalWrite（1，LOW）;
    }
    if（（luo >> 1）＆0x1）
    {
      digitalWrite（2，HIGH）;
    }
    其他
    {
      digitalWrite（2，LOW）;
    }
    if（（luo >> 2）＆0x1）
    {
      digitalWrite（3，HIGH）;
    }
    其他
    {
      digitalWrite（3，LOW）;
    }
    if（（luo >> 3）＆0x1）
    {
      digitalWrite（4，HIGH）;
    }
    其他
    {
      digitalWrite（4，LOW）;
    }
    延迟（10）;
    digitalWrite（0，HIGH）;
    延迟（10）;
  }
}
