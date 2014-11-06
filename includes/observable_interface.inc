<?php

interface ObserverObservableInterface {

  /**
   * Registers an observer.
   *
   * @param ObserverObserverInterface $observer
   * @return ObserverObservableInterface
   */
  public function registerObserver(ObserverObserverInterface $observer);

  /**
   * Unregisters an observer.
   *
   * @param ObserverObserverInterface $observer
   * @return ObserverObservableInterface
   */
  public function unregisterObserver(ObserverObserverInterface $observer);

  /**
   * Notifies all observers of an event.
   *
   * @param ObserverEventInterface $event
   * @return ObserverObservableInterface
   */
  public function notifyObservers(ObserverEventInterface $event);
}
