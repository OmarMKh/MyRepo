

 int NumLen (int MyNum){
    int counter = 1;

    while (MyNum>1){

    MyNum = MyNum/10;

    if (MyNum<1) {
    break;
    }
    else if (MyNum>1) {
    counter ++;
    }
      }

    return counter;
    }
