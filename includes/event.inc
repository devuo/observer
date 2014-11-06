<?php

class ObserverEvent implements ObserverEventInterface {

  protected $type;
  protected $data;

  public function __construct($type, $data) {
    $this->type = $type;
    $this->data = $data;
  }

  public function getType() {
    return $this->type;
  }

  public function getData() {
    return $this->data;
  }

}
