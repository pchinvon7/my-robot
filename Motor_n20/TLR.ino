void tl(int pw, int offset)
  {
    if(none_set_f == false)
      {
        Motor(-40, -40, -40, -40); delay(130);
        delay(100);
      }
    else{}
    Motor(0, 0, 0, 0);
    delay(300);
    Motor(-pw, pw, -pw, pw);
    delay(offset);
    Motor(0, 0, 0, 0);
    delay(200);

    none_set_f = false;
  }
void tr(int pw, int offset)
  {
    if(none_set_f == false)
      {
        Motor(-40, -40, -40, -40); delay(130);
        delay(100);
      }
    else{}
    Motor(0, 0, 0, 0);
    delay(300);
    Motor(pw, -pw, pw, -pw);
    delay(offset);
    Motor(0, 0, 0, 0);
    delay(200);

    none_set_f = false;
  }
