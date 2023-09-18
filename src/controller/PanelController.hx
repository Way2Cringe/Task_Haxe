package controller;

import openfl.display.DisplayObjectContainer;
import view.PanelView;
import model.PanelModel;

class PanelController {
	var model:PanelModel;
	var view:PanelView;
	var listeners:Array<Int->Void>;

	public function new(panelDisplay:DisplayObjectContainer) {
		listeners = [];
		model = DataBase.GetOrLoadFirstPanelModel();
		view = new PanelView(model, panelDisplay);
		view.Draw();
		view.addEventListener('trigger', onPanelButtonClick);
	}

	function onPanelButtonClick(id:Int) {
		for (li in listeners)
			li(id);
	}

	public function addPanelClickEventListener(listener:Int->Void) {
		listeners.push(listener);
	}

	public function removePanelClickEventListener(listneter:Int->Void) {
		listeners.remove(listneter);
	}

	public function clearColor() {
		view.chooseButton(-1);
	}
}
