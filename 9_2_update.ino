

float timer = 0.0;
void update( float timeDiff ) {

  input.update( timeDiff );

  timer += timeDiff;

  if( optionsMenu.visible ){

    optionsMenu.update();

    if( timer > 1/30 ) {
      timer = 0.0;
      optionsMenu.draw();
    } else {

    }  
  }

  if( optionsMenu.showBattery ){
    drawBatteryStatus();
  }

};
