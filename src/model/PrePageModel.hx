package model;

import openfl.display.BitmapData;

class PrePageModel{
    public var pageId:Int;
    public var imagePath:String;

    public function new(pageId:Int, imagePath:String) {
        this.pageId = pageId;
        this.imagePath = imagePath;
    }
}