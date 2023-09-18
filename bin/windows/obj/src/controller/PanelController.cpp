// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_DataBase
#include <DataBase.h>
#endif
#ifndef INCLUDED_controller_PanelController
#include <controller/PanelController.h>
#endif
#ifndef INCLUDED_model_PanelModel
#include <model/PanelModel.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_view_PanelView
#include <view/PanelView.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1e2f605bc4d8261a_12_new,"controller.PanelController","new",0x8780a0c0,"controller.PanelController.new","controller/PanelController.hx",12,0xc8d0caf1)
HX_LOCAL_STACK_FRAME(_hx_pos_1e2f605bc4d8261a_21_onPanelButtonClick,"controller.PanelController","onPanelButtonClick",0x90b33731,"controller.PanelController.onPanelButtonClick","controller/PanelController.hx",21,0xc8d0caf1)
HX_LOCAL_STACK_FRAME(_hx_pos_1e2f605bc4d8261a_26_addPanelClickEventListener,"controller.PanelController","addPanelClickEventListener",0x5be1fae9,"controller.PanelController.addPanelClickEventListener","controller/PanelController.hx",26,0xc8d0caf1)
HX_LOCAL_STACK_FRAME(_hx_pos_1e2f605bc4d8261a_30_removePanelClickEventListener,"controller.PanelController","removePanelClickEventListener",0x6a01c1e6,"controller.PanelController.removePanelClickEventListener","controller/PanelController.hx",30,0xc8d0caf1)
HX_LOCAL_STACK_FRAME(_hx_pos_1e2f605bc4d8261a_34_clearColor,"controller.PanelController","clearColor",0x855eac36,"controller.PanelController.clearColor","controller/PanelController.hx",34,0xc8d0caf1)
namespace controller{

void PanelController_obj::__construct( ::openfl::display::DisplayObjectContainer panelDisplay){
            	HX_GC_STACKFRAME(&_hx_pos_1e2f605bc4d8261a_12_new)
HXLINE(  13)		this->listeners = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  14)		this->model = ::DataBase_obj::GetOrLoadFirstPanelModel();
HXLINE(  15)		this->view =  ::view::PanelView_obj::__alloc( HX_CTX ,this->model,panelDisplay);
HXLINE(  16)		this->view->Draw();
HXLINE(  17)		this->view->addEventListener(HX_("trigger",38,55,df,25),this->onPanelButtonClick_dyn());
            	}

Dynamic PanelController_obj::__CreateEmpty() { return new PanelController_obj; }

void *PanelController_obj::_hx_vtable = 0;

Dynamic PanelController_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PanelController_obj > _hx_result = new PanelController_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PanelController_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1fb0ca58;
}

void PanelController_obj::onPanelButtonClick(int id){
            	HX_STACKFRAME(&_hx_pos_1e2f605bc4d8261a_21_onPanelButtonClick)
HXDLIN(  21)		int _g = 0;
HXDLIN(  21)		::Array< ::Dynamic> _g1 = this->listeners;
HXDLIN(  21)		while((_g < _g1->length)){
HXDLIN(  21)			 ::Dynamic li = _g1->__get(_g);
HXDLIN(  21)			_g = (_g + 1);
HXLINE(  22)			li(id);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PanelController_obj,onPanelButtonClick,(void))

void PanelController_obj::addPanelClickEventListener( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_1e2f605bc4d8261a_26_addPanelClickEventListener)
HXDLIN(  26)		this->listeners->push(listener);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PanelController_obj,addPanelClickEventListener,(void))

void PanelController_obj::removePanelClickEventListener( ::Dynamic listneter){
            	HX_STACKFRAME(&_hx_pos_1e2f605bc4d8261a_30_removePanelClickEventListener)
HXDLIN(  30)		this->listeners->remove(listneter);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PanelController_obj,removePanelClickEventListener,(void))

void PanelController_obj::clearColor(){
            	HX_STACKFRAME(&_hx_pos_1e2f605bc4d8261a_34_clearColor)
HXDLIN(  34)		this->view->chooseButton(-1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(PanelController_obj,clearColor,(void))


::hx::ObjectPtr< PanelController_obj > PanelController_obj::__new( ::openfl::display::DisplayObjectContainer panelDisplay) {
	::hx::ObjectPtr< PanelController_obj > __this = new PanelController_obj();
	__this->__construct(panelDisplay);
	return __this;
}

::hx::ObjectPtr< PanelController_obj > PanelController_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObjectContainer panelDisplay) {
	PanelController_obj *__this = (PanelController_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PanelController_obj), true, "controller.PanelController"));
	*(void **)__this = PanelController_obj::_hx_vtable;
	__this->__construct(panelDisplay);
	return __this;
}

PanelController_obj::PanelController_obj()
{
}

void PanelController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PanelController);
	HX_MARK_MEMBER_NAME(model,"model");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(listeners,"listeners");
	HX_MARK_END_CLASS();
}

void PanelController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(model,"model");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(listeners,"listeners");
}

::hx::Val PanelController_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return ::hx::Val( view ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { return ::hx::Val( model ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { return ::hx::Val( listeners ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearColor") ) { return ::hx::Val( clearColor_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onPanelButtonClick") ) { return ::hx::Val( onPanelButtonClick_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"addPanelClickEventListener") ) { return ::hx::Val( addPanelClickEventListener_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"removePanelClickEventListener") ) { return ::hx::Val( removePanelClickEventListener_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PanelController_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast<  ::view::PanelView >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { model=inValue.Cast<  ::model::PanelModel >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { listeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PanelController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("model",a9,23,58,0c));
	outFields->push(HX_("view",65,32,4f,4e));
	outFields->push(HX_("listeners",7f,65,8e,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PanelController_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::model::PanelModel */ ,(int)offsetof(PanelController_obj,model),HX_("model",a9,23,58,0c)},
	{::hx::fsObject /*  ::view::PanelView */ ,(int)offsetof(PanelController_obj,view),HX_("view",65,32,4f,4e)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(PanelController_obj,listeners),HX_("listeners",7f,65,8e,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PanelController_obj_sStaticStorageInfo = 0;
#endif

static ::String PanelController_obj_sMemberFields[] = {
	HX_("model",a9,23,58,0c),
	HX_("view",65,32,4f,4e),
	HX_("listeners",7f,65,8e,f3),
	HX_("onPanelButtonClick",91,9b,e6,52),
	HX_("addPanelClickEventListener",49,bf,a0,70),
	HX_("removePanelClickEventListener",86,f9,49,2d),
	HX_("clearColor",96,b0,66,1f),
	::String(null()) };

::hx::Class PanelController_obj::__mClass;

void PanelController_obj::__register()
{
	PanelController_obj _hx_dummy;
	PanelController_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("controller.PanelController",ce,80,79,d1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PanelController_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PanelController_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PanelController_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PanelController_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace controller