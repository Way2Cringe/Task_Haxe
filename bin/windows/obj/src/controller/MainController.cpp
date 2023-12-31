// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_controller_GridPageController
#include <controller/GridPageController.h>
#endif
#ifndef INCLUDED_controller_MainController
#include <controller/MainController.h>
#endif
#ifndef INCLUDED_controller_PanelController
#include <controller/PanelController.h>
#endif
#ifndef INCLUDED_controller_ScreenPageController
#include <controller/ScreenPageController.h>
#endif
#ifndef INCLUDED_feathers_controls_LayoutGroup
#include <feathers/controls/LayoutGroup.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif
#ifndef INCLUDED_feathers_core_MeasureSprite
#include <feathers/core/MeasureSprite.h>
#endif
#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cc70f142dfb1db7a_22_new,"controller.MainController","new",0x563d9659,"controller.MainController.new","controller/MainController.hx",22,0x107b2616)
HX_LOCAL_STACK_FRAME(_hx_pos_cc70f142dfb1db7a_25_Start,"controller.MainController","Start",0x0f9ada7b,"controller.MainController.Start","controller/MainController.hx",25,0x107b2616)
HX_LOCAL_STACK_FRAME(_hx_pos_cc70f142dfb1db7a_33_onPanelClick,"controller.MainController","onPanelClick",0x67b0d78a,"controller.MainController.onPanelClick","controller/MainController.hx",33,0x107b2616)
HX_LOCAL_STACK_FRAME(_hx_pos_cc70f142dfb1db7a_45_onStageResize,"controller.MainController","onStageResize",0xb2674fac,"controller.MainController.onStageResize","controller/MainController.hx",45,0x107b2616)
HX_LOCAL_STACK_FRAME(_hx_pos_cc70f142dfb1db7a_47_onGridButtonClick,"controller.MainController","onGridButtonClick",0x2caf312a,"controller.MainController.onGridButtonClick","controller/MainController.hx",47,0x107b2616)
HX_LOCAL_STACK_FRAME(_hx_pos_cc70f142dfb1db7a_59_resize,"controller.MainController","resize",0x65d0d59b,"controller.MainController.resize","controller/MainController.hx",59,0x107b2616)
HX_LOCAL_STACK_FRAME(_hx_pos_cc70f142dfb1db7a_12_boot,"controller.MainController","boot",0x17bef819,"controller.MainController.boot","controller/MainController.hx",12,0x107b2616)
namespace controller{

void MainController_obj::__construct( ::openfl::display::Stage stage){
            	HX_STACKFRAME(&_hx_pos_cc70f142dfb1db7a_22_new)
HXDLIN(  22)		this->stage = stage;
            	}

Dynamic MainController_obj::__CreateEmpty() { return new MainController_obj; }

void *MainController_obj::_hx_vtable = 0;

Dynamic MainController_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainController_obj > _hx_result = new MainController_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MainController_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x490a0071;
}

void MainController_obj::Start(){
            	HX_GC_STACKFRAME(&_hx_pos_cc70f142dfb1db7a_25_Start)
HXLINE(  26)		this->panelDisplay =  ::feathers::controls::LayoutGroup_obj::__alloc( HX_CTX );
HXLINE(  27)		this->panelController =  ::controller::PanelController_obj::__alloc( HX_CTX ,this->panelDisplay);
HXLINE(  28)		this->panelController->addPanelClickEventListener(this->onPanelClick_dyn());
HXLINE(  29)		this->stage->addChild(this->panelDisplay);
HXLINE(  30)		this->stage->addEventListener(HX_("resize",f4,59,7b,08),this->onStageResize_dyn(),null(),null(),null());
HXLINE(  31)		this->resize();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MainController_obj,Start,(void))

void MainController_obj::onPanelClick(int GridPageId){
            	HX_GC_STACKFRAME(&_hx_pos_cc70f142dfb1db7a_33_onPanelClick)
HXLINE(  34)		this->screenPageController = null();
HXLINE(  35)		this->stage->removeChild(this->windowDisplay);
HXLINE(  36)		this->windowDisplay =  ::feathers::controls::LayoutGroup_obj::__alloc( HX_CTX );
HXLINE(  37)		this->windowDisplay->set_y(((Float)60));
HXLINE(  38)		this->resize();
HXLINE(  39)		this->stage->addChild(this->windowDisplay);
HXLINE(  40)		this->gridPageController =  ::controller::GridPageController_obj::__alloc( HX_CTX ,GridPageId,this->windowDisplay);
HXLINE(  41)		this->gridPageController->addGridButtonClickEventListener(this->onGridButtonClick_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainController_obj,onPanelClick,(void))

void MainController_obj::onStageResize( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_cc70f142dfb1db7a_45_onStageResize)
HXDLIN(  45)		this->resize();
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainController_obj,onStageResize,(void))

void MainController_obj::onGridButtonClick(int screenPageId){
            	HX_GC_STACKFRAME(&_hx_pos_cc70f142dfb1db7a_47_onGridButtonClick)
HXLINE(  48)		this->panelController->clearColor();
HXLINE(  49)		this->gridPageController = null();
HXLINE(  50)		this->stage->removeChild(this->windowDisplay);
HXLINE(  51)		this->windowDisplay =  ::feathers::controls::LayoutGroup_obj::__alloc( HX_CTX );
HXLINE(  52)		this->windowDisplay->set_y(((Float)60));
HXLINE(  53)		this->resize();
HXLINE(  54)		this->stage->addChild(this->windowDisplay);
HXLINE(  55)		this->screenPageController =  ::controller::ScreenPageController_obj::__alloc( HX_CTX ,screenPageId,this->windowDisplay);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainController_obj,onGridButtonClick,(void))

void MainController_obj::resize(){
            	HX_STACKFRAME(&_hx_pos_cc70f142dfb1db7a_59_resize)
HXLINE(  60)		this->panelDisplay->set_width(( (Float)(this->stage->stageWidth) ));
HXLINE(  61)		this->panelDisplay->set_height(((Float)60));
HXLINE(  62)		if (::hx::IsNull( this->windowDisplay )) {
HXLINE(  63)			return;
            		}
HXLINE(  64)		this->windowDisplay->set_width(( (Float)(this->stage->stageWidth) ));
HXLINE(  65)		this->windowDisplay->set_height((( (Float)(this->stage->stageHeight) ) - ((Float)60)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MainController_obj,resize,(void))

Float MainController_obj::displayHeight;


::hx::ObjectPtr< MainController_obj > MainController_obj::__new( ::openfl::display::Stage stage) {
	::hx::ObjectPtr< MainController_obj > __this = new MainController_obj();
	__this->__construct(stage);
	return __this;
}

::hx::ObjectPtr< MainController_obj > MainController_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::Stage stage) {
	MainController_obj *__this = (MainController_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MainController_obj), true, "controller.MainController"));
	*(void **)__this = MainController_obj::_hx_vtable;
	__this->__construct(stage);
	return __this;
}

MainController_obj::MainController_obj()
{
}

void MainController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainController);
	HX_MARK_MEMBER_NAME(panelController,"panelController");
	HX_MARK_MEMBER_NAME(gridPageController,"gridPageController");
	HX_MARK_MEMBER_NAME(screenPageController,"screenPageController");
	HX_MARK_MEMBER_NAME(panelDisplay,"panelDisplay");
	HX_MARK_MEMBER_NAME(windowDisplay,"windowDisplay");
	HX_MARK_MEMBER_NAME(stage,"stage");
	HX_MARK_END_CLASS();
}

void MainController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(panelController,"panelController");
	HX_VISIT_MEMBER_NAME(gridPageController,"gridPageController");
	HX_VISIT_MEMBER_NAME(screenPageController,"screenPageController");
	HX_VISIT_MEMBER_NAME(panelDisplay,"panelDisplay");
	HX_VISIT_MEMBER_NAME(windowDisplay,"windowDisplay");
	HX_VISIT_MEMBER_NAME(stage,"stage");
}

::hx::Val MainController_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stage") ) { return ::hx::Val( stage ); }
		if (HX_FIELD_EQ(inName,"Start") ) { return ::hx::Val( Start_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"panelDisplay") ) { return ::hx::Val( panelDisplay ); }
		if (HX_FIELD_EQ(inName,"onPanelClick") ) { return ::hx::Val( onPanelClick_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"windowDisplay") ) { return ::hx::Val( windowDisplay ); }
		if (HX_FIELD_EQ(inName,"onStageResize") ) { return ::hx::Val( onStageResize_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"panelController") ) { return ::hx::Val( panelController ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onGridButtonClick") ) { return ::hx::Val( onGridButtonClick_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"gridPageController") ) { return ::hx::Val( gridPageController ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"screenPageController") ) { return ::hx::Val( screenPageController ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MainController_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast<  ::openfl::display::Stage >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"panelDisplay") ) { panelDisplay=inValue.Cast<  ::openfl::display::DisplayObjectContainer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"windowDisplay") ) { windowDisplay=inValue.Cast<  ::openfl::display::DisplayObjectContainer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"panelController") ) { panelController=inValue.Cast<  ::controller::PanelController >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"gridPageController") ) { gridPageController=inValue.Cast<  ::controller::GridPageController >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"screenPageController") ) { screenPageController=inValue.Cast<  ::controller::ScreenPageController >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("panelController",c0,84,43,34));
	outFields->push(HX_("gridPageController",31,89,22,27));
	outFields->push(HX_("screenPageController",57,84,64,f3));
	outFields->push(HX_("panelDisplay",9e,ff,27,1b));
	outFields->push(HX_("windowDisplay",32,1c,62,76));
	outFields->push(HX_("stage",be,6a,0b,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MainController_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::controller::PanelController */ ,(int)offsetof(MainController_obj,panelController),HX_("panelController",c0,84,43,34)},
	{::hx::fsObject /*  ::controller::GridPageController */ ,(int)offsetof(MainController_obj,gridPageController),HX_("gridPageController",31,89,22,27)},
	{::hx::fsObject /*  ::controller::ScreenPageController */ ,(int)offsetof(MainController_obj,screenPageController),HX_("screenPageController",57,84,64,f3)},
	{::hx::fsObject /*  ::openfl::display::DisplayObjectContainer */ ,(int)offsetof(MainController_obj,panelDisplay),HX_("panelDisplay",9e,ff,27,1b)},
	{::hx::fsObject /*  ::openfl::display::DisplayObjectContainer */ ,(int)offsetof(MainController_obj,windowDisplay),HX_("windowDisplay",32,1c,62,76)},
	{::hx::fsObject /*  ::openfl::display::Stage */ ,(int)offsetof(MainController_obj,stage),HX_("stage",be,6a,0b,84)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MainController_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &MainController_obj::displayHeight,HX_("displayHeight",c9,c3,ae,c3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MainController_obj_sMemberFields[] = {
	HX_("panelController",c0,84,43,34),
	HX_("gridPageController",31,89,22,27),
	HX_("screenPageController",57,84,64,f3),
	HX_("panelDisplay",9e,ff,27,1b),
	HX_("windowDisplay",32,1c,62,76),
	HX_("stage",be,6a,0b,84),
	HX_("Start",42,e4,38,17),
	HX_("onPanelClick",a3,a4,0c,ec),
	HX_("onStageResize",73,f8,5e,fe),
	HX_("onGridButtonClick",71,49,58,26),
	HX_("resize",f4,59,7b,08),
	::String(null()) };

static void MainController_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainController_obj::displayHeight,"displayHeight");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MainController_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainController_obj::displayHeight,"displayHeight");
};

#endif

::hx::Class MainController_obj::__mClass;

static ::String MainController_obj_sStaticFields[] = {
	HX_("displayHeight",c9,c3,ae,c3),
	::String(null())
};

void MainController_obj::__register()
{
	MainController_obj _hx_dummy;
	MainController_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("controller.MainController",e7,75,93,0e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MainController_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MainController_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MainController_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MainController_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MainController_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainController_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainController_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MainController_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_cc70f142dfb1db7a_12_boot)
HXDLIN(  12)		displayHeight = ((Float)60);
            	}
}

} // end namespace controller
