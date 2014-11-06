<?php

interface ObserverEventInterface {
  public function __construct($type, $data);
  public function getType();
  public function getData();
}
