package controller;

import openfl.events.SampleDataEvent;
import view.ScreenPageView;
import model.ScreenPageModel;
import openfl.display.DisplayObjectContainer;

class ScreenPageController{
    var model:ScreenPageModel;
    var view:ScreenPageView;
    public function new(screenPageId:Int, display:DisplayObjectContainer) {
        model = DataBase.GetOrLoadScreenPageModelById(screenPageId);
        view = new ScreenPageView(model, display);
        view.Draw();
    }

}