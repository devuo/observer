<?php

class ObserverLogObserver implements ObserverObserverInterface {

  /**
   * {@inheritdoc}
   */
  public function onNotify(ObserverEventInterface $event) {
    //drupal_set_message('Event: ' . $event->getType());
  }

}
