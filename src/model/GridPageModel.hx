package model;

class GridPageModel{
    public var id:Int;
    public var buttons:Array<Array<GridButtonModel>>;
    public function new(id:Int, buttons:Array<Array<GridButtonModel>>) {
        this.id = id;
        this.buttons = buttons;
    }
}