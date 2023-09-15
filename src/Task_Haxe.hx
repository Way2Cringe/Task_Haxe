import haxe.io.BytesInput;
import feathers.controls.Application;
import feathers.controls.Label;
import feathers.controls.Button;
import model.PrePageModel;


class Task_Haxe extends Application {
	public function new() {
		super();

		DataLoader.SavePrePageFromFile("/xml/prePages.xml");

		var x:PrePageModel = new PrePageModel(1, 'asdsadasd.img');
		var xx = XmlSerializer.Serialize(x);
		trace(xx);
		var xxx : Dynamic = XmlSerializer.Deserialize(xx);
		trace (Std.string(xxx));

		var button = new Button();
		addChild(button);
	}
}