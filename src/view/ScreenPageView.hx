package view;

import openfl.text.TextField;
import feathers.text.TextFormat;
import feathers.controls.Label;
import feathers.layout.VerticalLayout;
import feathers.controls.ScrollContainer;
import openfl.events.Event;
import openfl.display.DisplayObjectContainer;
import model.ScreenPageModel;

class ScreenPageView{
    var model:ScreenPageModel;
    var display:DisplayObjectContainer;
	var scrollContainer:ScrollContainer;
    var title:Label;
    var content:Label;
    public function new(model:ScreenPageModel, display:DisplayObjectContainer) {
        this.model = model;
        this.display = display;
    }
    public function Draw() {
		scrollContainer = new ScrollContainer();
		scrollContainer.width = display.width;
		scrollContainer.height = display.height;
		display.addChild(scrollContainer);
		var vl = new VerticalLayout();
        scrollContainer.layout = vl;
        title = new Label(model.title);
        title.width = display.width;
        title.wordWrap = true;
        title.textFormat = new TextFormat(40);
        scrollContainer.addChild(title);
        content = new Label(model.content);
        content.width = display.width;
        content.wordWrap = true;
        content.textFormat = new TextFormat(25);
        scrollContainer.addChild(content);
        display.addEventListener(Event.RESIZE, onStageResize);
	}

	function onStageResize(event:Event):Void {
		scrollContainer.width = display.width;
        scrollContainer.height = display.height;
        title.width = display.width;
        content.width = display.width;
	}
}