<?php

class ObserverObservable implements ObserverObservableInterface {

  /**
   * The list of observers.
   *
   * @var ObserverObserverInterface[]
   */
  protected $observers = array();

  /**
   * {@inheritdoc}
   */
  public function registerObserver(ObserverObserverInterface $observer) {
    $this->observers[] = $observer;

    return $this;
  }

  /**
   * {@inheritdoc}
   */
  public function unregisterObserver(ObserverObserverInterface $removableObserver) {
    foreach ($this->observers as $index => $observer) {
      if ($observer === $removableObserver) {
        unset($this->observers[$index]);
      }
    }

    return $this;
  }

  /**
   * {@inheritdoc}
   */
  public function notifyObservers(ObserverEventInterface $event) {
    foreach ($this->observers as $observer) {
      $observer->onNotify($event);
    }

    return $this;
  }

}
