package view;

import feathers.controls.ButtonState;
import feathers.data.ButtonBarItemState;
import openfl.display.DisplayObject;
import openfl.geom.Rectangle;
import feathers.skins.RectangleSkin;
import feathers.events.TriggerEvent;
import feathers.events.ListViewEvent;
import openfl.events.Event;
import openfl.utils.ByteArray;
import feathers.controls.Button;
import feathers.layout.HorizontalLayout;
import feathers.layout.VerticalLayout;
import feathers.controls.ScrollContainer;
import openfl.display.DisplayObjectContainer;
import feathers.controls.LayoutGroup;
import model.PanelModel;
import model.TabModel;

class PanelView {
	public static inline var layoutGap:Float = 10;
	public static inline var buttonHeight:Float = 40;
	public static inline var buttonWidth:Float = 250;

	static var pressedSkin:RectangleSkin = new RectangleSkin(SolidColor(0x8f76ff));
	static var notPressedSkinUp:DisplayObject;
	static var notPressedSkinHover:DisplayObject;

	var listeners:Map<String, Array<Int->Void>>;

	var model:PanelModel;
	var display:DisplayObjectContainer;
	var scrollContainer:ScrollContainer;
	var buttons:Array<Button>;

	public function new(model:PanelModel, display:DisplayObjectContainer) {
		this.model = model;
		this.display = display;
		listeners = new Map<String, Array<Int->Void>>();
		notPressedSkinUp = new Button().getSkinForState(ButtonState.UP);
		notPressedSkinHover = new Button().getSkinForState(ButtonState.HOVER);
	}

	public function Draw() {
		scrollContainer = new ScrollContainer();
		scrollContainer.width = display.width;
		display.addChild(scrollContainer);
		var hl = new HorizontalLayout();
		hl.gap = layoutGap;
		scrollContainer.layout = hl;
		display.addEventListener(Event.RESIZE, onStageResize);
		buttons = [];
		var i = 0;
		for (tab in model.tabs) {
			var button = new Button();
			button.width = buttonWidth;
			button.height = buttonHeight;
			button.text = tab.name;
			button.name = Std.string(i++);
			button.addEventListener(TriggerEvent.TRIGGER, onButtonClick);
			buttons.push(button);
			scrollContainer.addChild(button);
		}
	}

	function onStageResize(event:Event):Void {
		scrollContainer.width = display.width;
	}

	function onButtonClick(event:Event):Void {
		if (!listeners.exists('trigger'))
			return;
		if (listeners.get('trigger') == null)
			return;
		var target:Button = event.currentTarget;
		for (li in listeners.get('trigger')) {
			var n = Std.parseInt(target.name);
			chooseButton(n);
			li(model.tabs[n].gridPageModelId);
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

	public function chooseButton(n:Int) {
		for (button in buttons) {
			button.setSkinForState(ButtonState.UP, notPressedSkinUp);
			button.setSkinForState(ButtonState.HOVER, notPressedSkinHover);
		}
		if (n >= 0) {
			buttons[n].setSkinForState(ButtonState.UP, pressedSkin);
			buttons[n].setSkinForState(ButtonState.HOVER, pressedSkin);
		}
	}
}
