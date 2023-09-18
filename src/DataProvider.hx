import openfl.display.BitmapData;
import openfl.display.Bitmap;
import sys.FileSystem;
import sys.io.File;

class DataProvider {
	static function PathForXml(className:String):String {
		var path = FileSystem.absolutePath('../../../xml/' + className + '.xml');
		return path;
	}

	static function PathForImg(imgName:String) {
		var path = FileSystem.absolutePath('../../../img/' + imgName);
		return path;
	}

	/**
	 * Loads array of objects from xml file. It shouldn't be formatted (no line breaks and extra spaces)
	 * @param ClassName Name of the class, array of which ones is expected to be returned (Also needed for filename)
	 * @return Array of objects of defined class type
	 */
	public static function Load(className:String):Dynamic {
		var xmlString:String = File.getContent(PathForXml(className));
		var xml = Xml.parse(xmlString).firstChild();
		return XmlSerializer.Deserialize(xml);
	}

	/**
	 * Saves array of objects into xml file
	 * @param arr Array of objects, which is excepted to be saved into file
	 * @param className Name of the class, array of which ones is expected to be saved (Also needed for filename)
	 */
	public static function Save(arr:Dynamic, className:String) {
		var xml = XmlSerializer.Serialize(arr);
		var xmlString:String = xml.toString();
		File.saveContent(PathForXml(className), xmlString);
	}

	/**
	 * Loads image from file
	 * @param imgName Should look like: '1.png'
	 * @return BitmapData Image at Bitmap
	 */
	public static function LoadImg(imgName:String):BitmapData {
		return BitmapData.fromFile(PathForImg(imgName));
	}
}
