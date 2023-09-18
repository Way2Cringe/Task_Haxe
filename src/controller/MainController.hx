package controller;

import controller.ScreenPageConrtoller.ScreenPageController;
import openfl.events.Event;
import feathers.controls.LayoutGroup;
import openfl.display.DisplayObjectContainer;
import openfl.display.Stage;
import model.PanelModel;
import view.PanelView;

class MainController {
	public static inline var displayHeight:Float = 60;
	var panelController:PanelController;
    var gridPageController:GridPageController;
    var screenPageController:ScreenPageController;
    
	var panelDisplay:DisplayObjectContainer;
	var windowDisplay:DisplayObjectContainer;
	var stage:Stage;

	public function new(stage:Stage) {
		this.stage = stage;
	}

	public function Start() {
        panelDisplay = new LayoutGroup();
        panelController = new PanelController(panelDisplay);
        panelController.addPanelClickEventListener(onPanelClick);
		stage.addChild(panelDisplay);
		stage.addEventListener(Event.RESIZE, onStageResize);
		resize();
	}
    function onPanelClick(GridPageId:Int){
        screenPageController = null;
        stage.removeChild(windowDisplay);
        windowDisplay = new LayoutGroup();
        windowDisplay.y = displayHeight;
        resize();
        stage.addChild(windowDisplay);
        gridPageController = new GridPageController(GridPageId, windowDisplay);
        gridPageController.addGridButtonClickEventListener(onGridButtonClick);
    }

	function onStageResize(event:Event):Void {
		resize();
	}
    function onGridButtonClick(screenPageId:Int) {
        panelController.clearColor();
        gridPageController = null;
        stage.removeChild(windowDisplay);
        windowDisplay = new LayoutGroup();
        windowDisplay.y = displayHeight;
        resize();
        stage.addChild(windowDisplay);
        screenPageController = new ScreenPageController(screenPageId, windowDisplay);
                
    }

	function resize() {
		panelDisplay.width = stage.stageWidth;
		panelDisplay.height = displayHeight;
		if (windowDisplay == null)
			return;
		windowDisplay.width = stage.stageWidth;
		windowDisplay.height = stage.stageHeight - displayHeight;
	}
}
