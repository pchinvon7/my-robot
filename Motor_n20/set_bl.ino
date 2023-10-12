void set_f(int _time)
  {
    for(int i = 0; i<_time; i++)
      {
        Motor(-40, -40, -40, -40); delay(130);
        Motor(0, 0, 0, 0); delay(100);
        while(1)
          {
            if(mcp_f(1) < md_mcp_f(1) && mcp_f(2) > md_mcp_f(2)) 
              {
                do{Motor(0, 40, 0, 40);}while(mcp_f(2) > md_mcp_f(2));
                Motor(0, -50, 0, -50);
                delay(30);
                Motor(0, 0, 0, 0); delay(10);
                break;
              }
            else if(mcp_f(1) > md_mcp_f(1) && mcp_f(2) < md_mcp_f(2))
              {
                do{Motor(40, 0, 40, 0);}while(mcp_f(1) > md_mcp_f(1));
                Motor(-50, 0, -50, 0);
                delay(30);
                Motor(0, 0, 0, 0); delay(10);
                break;
              }
            else if(mcp_f(1) < md_mcp_f(1) && mcp_f(2) < md_mcp_f(2))
              {
                break;
              }
            else
              {
                Motor(40, 40, 40, 40);
              }
          }
         
      }
     Motor(-40, -40, -40, -40); delay(250);
     Motor(0, 0, 0, 0); delay(100);

     none_set_f = true;
  }
void set_b(int _time)
  {
    for(int i = 0; i<_time; i++)
      {
        Motor(45, 45, 45, 45); delay(140);
        Motor(0, 0, 0, 0); delay(100);
      
        while(1)
          {
            if(mcp_f(4) < md_mcp_f(4) && mcp_f(5) < md_mcp_f(5))
              {
                Motor(45, 45, 45, 45); delay(30);
                Motor(0, 0, 0, 0); delay(10);
                break;
              }
            else if(mcp_f(4) > md_mcp_f(4) && mcp_f(5) < md_mcp_f(5))
              {
                do{Motor(-45, 20, -45, 20);}while(mcp_f(4) > md_mcp_f(4));
                Motor(40, 0, 40, 0);
                delay(50);
                Motor(0, 0, 0, 0); delay(10);
                break;
              }
            else if(mcp_f(4) < md_mcp_f(4) && mcp_f(5) > md_mcp_f(5))
              {
                do{Motor(20, -45, 20, -45);}while(mcp_f(5) > md_mcp_f(5));
                Motor(0, 40, 0, 40);
                delay(50);
                Motor(0, 0, 0, 0); delay(10);
                break;
              }
            else
              {
                Motor(-30, -30, -30, -30);
              }
          }
         
      }
     Motor(45, 45, 45, 45); delay(200);
     Motor(0, 0, 0, 0); delay(2);
     none_set_f = true;
  }
