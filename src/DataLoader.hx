
import sys.FileSystem;
import sys.io.File;
import model.PrePageModel;

class DataLoader{
    //Better to use ready xml seriaziation libraries, but
    public static function LoadPrePageFromFile(filePath:String):Array<PrePageModel> {
        var prePages:Array<PrePageModel> = [];
        try{
           
            var xmlString:String = sys.io.File.getContent(FileSystem.absolutePath("../../../" + filePath));
            trace(xmlString);

        }
        return prePages;
    }
    public static function SavePrePageFromFile(filePath:String /*, list:Array<PrePageModel>*/){
        var xmlString:Xml = Xml.createElement('prePageList');   
        xmlString.addChild(Xml.createElement('prePage'));
        trace(xmlString);   
    }
}