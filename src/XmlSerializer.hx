import haxe.Exception;

//Risky, but very general serialization. Could use another library. Or use recursion to serialize collections
class XmlSerializer {
    /**
     * Any object to xml file
     * @param obj Shouldn't contain collections or another class objects 
     */
    public static function Serialize<T>(obj:T):String{
        var xml = Xml.createElement(Type.getClassName(Type.getClass(obj)));
        
        for (field in Reflect.fields(obj)) {
            var value:Dynamic = Reflect.field(obj, field);
            if (Std.isOfType(value, Float) || Std.isOfType(value, Int) || Std.isOfType(value, String)){
                var fieldXml = Xml.createElement(field);
                fieldXml.addChild(Xml.createPCData(Std.string(value)));
                xml.addChild(fieldXml);
            }
        }
        
        return xml.toString();
    }

    public static function Deserialize<T>(xmlString:String):T {
        var xml = Xml.parse(xmlString);
        var xmlNodeName = xml.nodeName;

        var cls = Type.resolveClass(xmlNodeName);
        if (cls == null) {
            throw new Exception("Couldn't resolve class " + xmlNodeName);
        }

        // tries to create a new instance of the class
        var obj = Type.createInstance(cls, []);
        if (obj == null) {
            throw new Exception("Couldn't resolve class " + xmlNodeName);
        }
        
        
        return obj;
    }
}
