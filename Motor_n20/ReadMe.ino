void ReadMe()
  {
    fw(50, 50, 250, 'l'); //เดินหาหน้าเข้าหาเส้นความเร็ว 50, 50 เวลาการวิ่ง 250
    fw(50, 50, 250, 'n'); //เดินหน้าจนกว่าเวลาหมดความเร็ว 50, 50 เวลาการวิ่ง 250
    fw_none(50, 50, 250, 'l'); //เดินหน้าแบบไม่เช็กซ้ายขวาเข้าหาเส้นความเร็ว 50, 50 เวลาการวิ่ง 250
    fw_none(50, 50, 250, 'n'); //ดินหน้าแบบไม่เช็กซ้ายขวาจนกว่าเวลาจะหมดความเร็ว 50, 50 เวลาการวิ่ง 250
    bw(50, 50, 250, 'l'); //ถอยหลังเข้าหาเส้นความเร็ว 50, 50 เวลาการวิ่ง 250
    bw(50, 50, 250, 'n'); //ถอยหลังจนกว่าเวลาหมดความเร็ว 50, 50 เวลาการวิ่ง 250
    tl(90, 250); //เลี้ยวซ้ายความเร็วในการหมุน 90 เวลาในการหมุน 250
    tr(90, 250); //เลี้ยวขวาความเร็วในการหมุน 90 เวลาในการหมุน 250
    set_f(3); //การทำให้หุ่นยนต์ตรงโดยการเช็กเส้นข้างหน้า
    set_b(3); //การทำให้หุ่นยนต์ตรงโดยการเช็กเส้นข้างหลัง
    mission(); //ปล่อยกล่อง
  }
