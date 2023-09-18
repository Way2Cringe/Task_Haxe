import haxe.Exception;
import String;

using Lambda;

// General serialization for any objects and collection. Contains recursions. Can work with any custom class (not all structures are supported: only variables, classes and arrays).
// Could also use another ready library
class XmlSerializer {
	/**
	 * Converts any object to xml file
	 */
	public static function Serialize(obj:Dynamic):Xml {
		trace(' ----> Called Serialize for ' + Std.string(obj) + ' ----> ');
		var xml:Xml;
		
		if (obj is Float || obj is Int || obj is Bool || obj is String) {
			trace('Its a basic type');
			xml = Xml.createPCData(Std.string(obj));
		} else if (obj is Array) {
			trace('Its an Array');
			xml = Xml.createElement('Array');
			var arr:Array<Dynamic> = obj;
			for (el in arr) {
				xml.addChild(Serialize(el));
			}
		} else {
			trace('Its a class');
			xml = Xml.createElement(Type.getClassName(Type.getClass(obj)));
			for (field in Reflect.fields(obj)) {
				var fieldXml = Xml.createElement(field);
				fieldXml.addChild(Serialize(Reflect.field(obj, field)));
				xml.addChild(fieldXml);
			}
		}

		trace(' <---- Returned: ' + xml.toString() + ' for ' + Std.string(obj) + ' <---- ');

		return xml;
	}

	/**
	 * Converts xml to corresponding object. Xml string shouldn't be formatted (no line breaks and extra spaces)
	 */
	public static function Deserialize(xml:Xml):Dynamic {
		var obj:Dynamic = null;
		trace(' ----> Called Deserialize for ' + xml.toString() + ' ----> ');
		var xmlNodeType = xml.nodeType;
		if (xmlNodeType == Xml.PCData) {
			trace('Its a basic type');
			obj = xml.toString();
		} else {
			var xmlNodeName = xml.nodeName;
			if (xmlNodeName == 'Array') {
				trace('Its an Array');
				obj = [];
				for (el in xml.elements()) {
					obj.push(Deserialize(el));
				}
			} else {
				trace('Its a Class');
				// Tries to resolve a name of the class
				var cls = Type.resolveClass(xmlNodeName);
				if (cls == null) {
					throw new Exception("Couldn't resolve class " + xmlNodeName);
				}
				// Tries to create a new instance of the class
				obj = Type.createInstance(cls, []);
				if (obj == null) {
					throw new Exception("Couldn't resolve class " + xmlNodeName);
				}
				trace(obj);
				for (el in xml.elements()) {
					var eltNodeName = el.nodeName;
					Reflect.setProperty(obj, eltNodeName, Deserialize(el.firstChild()));
				}
			}
		}

		trace(' <---- Returned: ' + Std.string(obj) + ' for ' + xml.toString() + ' <---- ');
		return obj;
	}
}
