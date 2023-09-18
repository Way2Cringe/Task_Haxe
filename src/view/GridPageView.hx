package view;

import feathers.events.TriggerEvent;
import openfl.display.Bitmap;
import feathers.controls.LayoutGroup;
import lime.system.Display;
import feathers.controls.HDividedBox;
import feathers.controls.Button;
import feathers.controls.ButtonBar;
import motion.easing.Linear;
import openfl.events.Event;
import openfl.display.DisplayObjectContainer;
import feathers.controls.ScrollContainer;
import feathers.layout.VerticalLayout;
import model.GridPageModel;

class GridPageView {
	public static inline var layoutGap:Float = 10;
	public static inline var buttonHeight:Float = 100;

	var model:GridPageModel;
	var display:DisplayObjectContainer;
	var scrollContainer:ScrollContainer;
	var listeners:Map<String, Array<Int->Void>>;
	var buttons:Array<Array<Button>>;

	public function new(model:GridPageModel, display:DisplayObjectContainer) {
		this.model = model;
		this.display = display;
		listeners = new Map<String, Array<Int->Void>>();
	}

	public function Draw() {
		scrollContainer = new ScrollContainer();
		scrollContainer.width = display.width;
		scrollContainer.height = display.height;
		display.addChild(scrollContainer);
		var vl = new VerticalLayout();
		vl.gap = layoutGap;
		scrollContainer.layout = vl;
		display.addEventListener(Event.RESIZE, onStageResize);
		buttons = [];
		for (line in model.buttons) {
			var buttonLine:Array<Button> = [];
			var layoutLine = new LayoutGroup();
			scrollContainer.addChild(layoutLine);
			for (but in line) {
				var button = new Button();
				button.icon = new Bitmap(DataProvider.LoadImg(but.imagePath));
				button.height = buttonHeight;
                button.name = Std.string(but.screenPageId);
                button.addEventListener(TriggerEvent.TRIGGER, onButtonClick);
				buttonLine.push(button);
				layoutLine.addChild(button);
			}
			buttons.push(buttonLine);
		}
		resize();
	}

	function onStageResize(event:Event):Void {
		resize();
	}

	function resize() {
		var dwidth = display.width;
		scrollContainer.height = display.height;
		scrollContainer.width = dwidth;
		for (i in 0...buttons.length) {
			for (j in 0...buttons[i].length) {
				var w = (dwidth - layoutGap * (buttons[i].length - 1)) / buttons[i].length;
				buttons[i][j].width = w;
				buttons[i][j].height = w;
                buttons[i][j].icon.width = w*0.7;
                buttons[i][j].icon.height= w*0.7;
				buttons[i][j].x = (dwidth + layoutGap) / buttons[i].length * j;
			}
		}
	}
    function onButtonClick(event:Event):Void {
		if (!listeners.exists('trigger'))
			return;
		if (listeners.get('trigger') == null)
			return;
		var target:Button = event.currentTarget;
		for (li in listeners.get('trigger')) {
			li(Std.parseInt(target.name));
		}
	}
	/**
	 * Add listener to events (button clicks)
	 * @param eventType: 'Trigger' for most of the cases 
	 */
	public function addEventListener(eventType:String, listener:Int->Void) {
		if (!listeners.exists(eventType) || (listeners.get(eventType) == null))
			listeners.set(eventType, [listener]);
		else
			listeners.get(eventType).push(listener);
	}
}
