import openfl.display.Stage;
import feathers.controls.LayoutGroup;
import openfl.display.StageScaleMode;
import feathers.controls.Button;
import feathers.layout.HorizontalLayout;
import feathers.controls.ScrollContainer;
import controller.MainController;
import feathers.controls.Application;

class Task_Haxe extends Application {
	public function new() {
		super();
		// generateAndDeserializeXmls();
		startApp(stage);
	}
	public function startApp(stage:Stage) {
		var mainContainer = new MainController(stage);
		mainContainer.Start();		
	}
	public function generateAndDeserializeXmls(){
		DataBase.FillWithStartingData();
		DataBase.SaveScreenPageModels();
	}
}
