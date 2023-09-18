package model;

class ScreenPageModel{
    public var id:Int;
    public var title:String;
    public var content:String;
    public function new(id:Int, title:String, content:String) {
        this.id = id;
        this.title = title;
        this.content = content;
    }
}