<?php

/**
 * Class CEDashboardMenuItem
 * @param string $path - path for the menu item
 * @param string $linkText - link text to be displayed for the menu item
 * @param string $classes - string of classes to be added to the menu item
 */
class CEDashboardMenuItem{
  private $path;
  private $linkText;
  private $classes;
  function __construct($path = null, $linkText, $classes = null){
    $this->path = $path;
    $this->linkText = $linkText;
    $this->classes = $classes;
  }
  function getPath(){
    return $this->path;
  }
  function getLinkText(){
    return $this->linkText;
  }
  function getClasses(){
    return $this->classes;
  }
}