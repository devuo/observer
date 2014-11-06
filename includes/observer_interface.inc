<?php

interface ObserverObserverInterface {
  public function onNotify(ObserverEventInterface $event);
}
