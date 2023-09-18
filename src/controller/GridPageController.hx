package controller;

import openfl.display.DisplayObjectContainer;
import view.GridPageView;
import model.GridPageModel;

class GridPageController {
	var model:GridPageModel;
	var view:GridPageView;
	var listeners:Array<Int->Void>;

	public function new(Id:Int, display:DisplayObjectContainer) {
        listeners = [];
		model = DataBase.GetOrLoadGridPageModelById(Id);
		view = new GridPageView(model, display);
		view.Draw();
		view.addEventListener('trigger', onGridButtonClick);
	}

	public function onGridButtonClick(id:Int) {
        for (li in listeners)
			li(id);
    }
	public function addGridButtonClickEventListener(listener:Int->Void) {
		listeners.push(listener);
	}

	public function removeGridButtonClickEventListener(listener:Int->Void) {
		listeners.remove(listener);
	}
}
