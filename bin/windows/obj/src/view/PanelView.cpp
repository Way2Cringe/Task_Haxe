// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_BasicButton
#include <feathers/controls/BasicButton.h>
#endif
#ifndef INCLUDED_feathers_controls_Button
#include <feathers/controls/Button.h>
#endif
#ifndef INCLUDED_feathers_controls_ButtonState
#include <feathers/controls/ButtonState.h>
#endif
#ifndef INCLUDED_feathers_controls_ITriggerView
#include <feathers/controls/ITriggerView.h>
#endif
#ifndef INCLUDED_feathers_controls_ScrollContainer
#include <feathers/controls/ScrollContainer.h>
#endif
#ifndef INCLUDED_feathers_controls_supportClasses_BaseScrollContainer
#include <feathers/controls/supportClasses/BaseScrollContainer.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusContainer
#include <feathers/core/IFocusContainer.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
#ifndef INCLUDED_feathers_core_IHTMLTextControl
#include <feathers/core/IHTMLTextControl.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IStateContext
#include <feathers/core/IStateContext.h>
#endif
#ifndef INCLUDED_feathers_core_IStateObserver
#include <feathers/core/IStateObserver.h>
#endif
#ifndef INCLUDED_feathers_core_ITextControl
#include <feathers/core/ITextControl.h>
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
#ifndef INCLUDED_feathers_events_TriggerEvent
#include <feathers/events/TriggerEvent.h>
#endif
#ifndef INCLUDED_feathers_graphics_FillStyle
#include <feathers/graphics/FillStyle.h>
#endif
#ifndef INCLUDED_feathers_graphics_LineStyle
#include <feathers/graphics/LineStyle.h>
#endif
#ifndef INCLUDED_feathers_layout_HorizontalLayout
#include <feathers/layout/HorizontalLayout.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayout
#include <feathers/layout/ILayout.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_skins_BaseGraphicsPathSkin
#include <feathers/skins/BaseGraphicsPathSkin.h>
#endif
#ifndef INCLUDED_feathers_skins_IProgrammaticSkin
#include <feathers/skins/IProgrammaticSkin.h>
#endif
#ifndef INCLUDED_feathers_skins_ProgrammaticSkin
#include <feathers/skins/ProgrammaticSkin.h>
#endif
#ifndef INCLUDED_feathers_skins_RectangleSkin
#include <feathers/skins/RectangleSkin.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_model_PanelModel
#include <model/PanelModel.h>
#endif
#ifndef INCLUDED_model_TabModel
#include <model/TabModel.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_eb5c71447419d6c2_37_new,"view.PanelView","new",0x3d5f4912,"view.PanelView.new","view/PanelView.hx",37,0xe7e47c1f)
HX_LOCAL_STACK_FRAME(_hx_pos_eb5c71447419d6c2_45_Draw,"view.PanelView","Draw",0x5a477b32,"view.PanelView.Draw","view/PanelView.hx",45,0xe7e47c1f)
HX_LOCAL_STACK_FRAME(_hx_pos_eb5c71447419d6c2_68_onStageResize,"view.PanelView","onStageResize",0xf41703a5,"view.PanelView.onStageResize","view/PanelView.hx",68,0xe7e47c1f)
HX_LOCAL_STACK_FRAME(_hx_pos_eb5c71447419d6c2_71_onButtonClick,"view.PanelView","onButtonClick",0xeeab6549,"view.PanelView.onButtonClick","view/PanelView.hx",71,0xe7e47c1f)
HX_LOCAL_STACK_FRAME(_hx_pos_eb5c71447419d6c2_89_addEventListener,"view.PanelView","addEventListener",0xc5118bdb,"view.PanelView.addEventListener","view/PanelView.hx",89,0xe7e47c1f)
HX_LOCAL_STACK_FRAME(_hx_pos_eb5c71447419d6c2_95_chooseButton,"view.PanelView","chooseButton",0xabfc4d37,"view.PanelView.chooseButton","view/PanelView.hx",95,0xe7e47c1f)
HX_LOCAL_STACK_FRAME(_hx_pos_eb5c71447419d6c2_22_boot,"view.PanelView","boot",0x6e19a740,"view.PanelView.boot","view/PanelView.hx",22,0xe7e47c1f)
HX_LOCAL_STACK_FRAME(_hx_pos_eb5c71447419d6c2_23_boot,"view.PanelView","boot",0x6e19a740,"view.PanelView.boot","view/PanelView.hx",23,0xe7e47c1f)
HX_LOCAL_STACK_FRAME(_hx_pos_eb5c71447419d6c2_24_boot,"view.PanelView","boot",0x6e19a740,"view.PanelView.boot","view/PanelView.hx",24,0xe7e47c1f)
HX_LOCAL_STACK_FRAME(_hx_pos_eb5c71447419d6c2_26_boot,"view.PanelView","boot",0x6e19a740,"view.PanelView.boot","view/PanelView.hx",26,0xe7e47c1f)
namespace view{

void PanelView_obj::__construct( ::model::PanelModel model, ::openfl::display::DisplayObjectContainer display){
            	HX_GC_STACKFRAME(&_hx_pos_eb5c71447419d6c2_37_new)
HXLINE(  38)		this->model = model;
HXLINE(  39)		this->display = display;
HXLINE(  40)		this->listeners =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  41)		::view::PanelView_obj::notPressedSkinUp =  ::feathers::controls::Button_obj::__alloc( HX_CTX ,null(),null())->getSkinForState(::feathers::controls::ButtonState_obj::UP_dyn());
HXLINE(  42)		::view::PanelView_obj::notPressedSkinHover =  ::feathers::controls::Button_obj::__alloc( HX_CTX ,null(),null())->getSkinForState(::feathers::controls::ButtonState_obj::HOVER_dyn());
            	}

Dynamic PanelView_obj::__CreateEmpty() { return new PanelView_obj; }

void *PanelView_obj::_hx_vtable = 0;

Dynamic PanelView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PanelView_obj > _hx_result = new PanelView_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PanelView_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x69ac33a4;
}

void PanelView_obj::Draw(){
            	HX_GC_STACKFRAME(&_hx_pos_eb5c71447419d6c2_45_Draw)
HXLINE(  46)		this->scrollContainer =  ::feathers::controls::ScrollContainer_obj::__alloc( HX_CTX );
HXLINE(  47)		 ::feathers::controls::ScrollContainer _hx_tmp = this->scrollContainer;
HXDLIN(  47)		_hx_tmp->set_width(this->display->get_width());
HXLINE(  48)		this->display->addChild(this->scrollContainer);
HXLINE(  49)		 ::feathers::layout::HorizontalLayout hl =  ::feathers::layout::HorizontalLayout_obj::__alloc( HX_CTX );
HXLINE(  50)		hl->set_gap(((Float)10));
HXLINE(  51)		this->scrollContainer->set_layout(hl);
HXLINE(  52)		this->display->addEventListener(HX_("resize",f4,59,7b,08),this->onStageResize_dyn(),null(),null(),null());
HXLINE(  53)		this->buttons = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  54)		int i = 0;
HXLINE(  55)		{
HXLINE(  55)			int _g = 0;
HXDLIN(  55)			::Array< ::Dynamic> _g1 = this->model->tabs;
HXDLIN(  55)			while((_g < _g1->length)){
HXLINE(  55)				 ::model::TabModel tab = _g1->__get(_g).StaticCast<  ::model::TabModel >();
HXDLIN(  55)				_g = (_g + 1);
HXLINE(  56)				 ::feathers::controls::Button button =  ::feathers::controls::Button_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  57)				button->set_width(((Float)250));
HXLINE(  58)				button->set_height(((Float)40));
HXLINE(  59)				button->set_text(tab->name);
HXLINE(  60)				i = (i + 1);
HXDLIN(  60)				button->set_name(::Std_obj::string((i - 1)));
HXLINE(  61)				button->addEventListener(HX_("trigger",38,55,df,25),this->onButtonClick_dyn(),null(),null(),null());
HXLINE(  62)				this->buttons->push(button);
HXLINE(  63)				this->scrollContainer->addChild(button);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PanelView_obj,Draw,(void))

void PanelView_obj::onStageResize( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_eb5c71447419d6c2_68_onStageResize)
HXDLIN(  68)		 ::feathers::controls::ScrollContainer _hx_tmp = this->scrollContainer;
HXDLIN(  68)		_hx_tmp->set_width(this->display->get_width());
            	}


HX_DEFINE_DYNAMIC_FUNC1(PanelView_obj,onStageResize,(void))

void PanelView_obj::onButtonClick( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_eb5c71447419d6c2_71_onButtonClick)
HXLINE(  72)		if (!(this->listeners->exists(HX_("trigger",38,55,df,25)))) {
HXLINE(  73)			return;
            		}
HXLINE(  74)		if (::hx::IsNull( this->listeners->get(HX_("trigger",38,55,df,25)) )) {
HXLINE(  75)			return;
            		}
HXLINE(  76)		 ::feathers::controls::Button target = ( ( ::feathers::controls::Button)(event->currentTarget) );
HXLINE(  77)		{
HXLINE(  77)			int _g = 0;
HXDLIN(  77)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(this->listeners->get(HX_("trigger",38,55,df,25))) );
HXDLIN(  77)			while((_g < _g1->length)){
HXLINE(  77)				 ::Dynamic li = _g1->__get(_g);
HXDLIN(  77)				_g = (_g + 1);
HXLINE(  78)				 ::Dynamic n = ::Std_obj::parseInt(target->get_name());
HXLINE(  79)				this->chooseButton(( (int)(n) ));
HXLINE(  80)				li(this->model->tabs->__get(( (int)(n) )).StaticCast<  ::model::TabModel >()->gridPageModelId);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PanelView_obj,onButtonClick,(void))

void PanelView_obj::addEventListener(::String eventType, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_eb5c71447419d6c2_89_addEventListener)
HXDLIN(  89)		bool _hx_tmp;
HXDLIN(  89)		if (this->listeners->exists(eventType)) {
HXDLIN(  89)			_hx_tmp = ::hx::IsNull( this->listeners->get(eventType) );
            		}
            		else {
HXDLIN(  89)			_hx_tmp = true;
            		}
HXDLIN(  89)		if (_hx_tmp) {
HXLINE(  90)			this->listeners->set(eventType,::Array_obj< ::Dynamic>::__new(1)->init(0,listener));
            		}
            		else {
HXLINE(  92)			( (::Array< ::Dynamic>)(this->listeners->get(eventType)) )->push(listener);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(PanelView_obj,addEventListener,(void))

void PanelView_obj::chooseButton(int n){
            	HX_STACKFRAME(&_hx_pos_eb5c71447419d6c2_95_chooseButton)
HXLINE(  96)		{
HXLINE(  96)			int _g = 0;
HXDLIN(  96)			::Array< ::Dynamic> _g1 = this->buttons;
HXDLIN(  96)			while((_g < _g1->length)){
HXLINE(  96)				 ::feathers::controls::Button button = _g1->__get(_g).StaticCast<  ::feathers::controls::Button >();
HXDLIN(  96)				_g = (_g + 1);
HXLINE(  97)				button->setSkinForState(::feathers::controls::ButtonState_obj::UP_dyn(),::view::PanelView_obj::notPressedSkinUp);
HXLINE(  98)				button->setSkinForState(::feathers::controls::ButtonState_obj::HOVER_dyn(),::view::PanelView_obj::notPressedSkinHover);
            			}
            		}
HXLINE( 100)		if ((n >= 0)) {
HXLINE( 101)			this->buttons->__get(n).StaticCast<  ::feathers::controls::Button >()->setSkinForState(::feathers::controls::ButtonState_obj::UP_dyn(),::view::PanelView_obj::pressedSkin);
HXLINE( 102)			this->buttons->__get(n).StaticCast<  ::feathers::controls::Button >()->setSkinForState(::feathers::controls::ButtonState_obj::HOVER_dyn(),::view::PanelView_obj::pressedSkin);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PanelView_obj,chooseButton,(void))

Float PanelView_obj::layoutGap;

Float PanelView_obj::buttonHeight;

Float PanelView_obj::buttonWidth;

 ::feathers::skins::RectangleSkin PanelView_obj::pressedSkin;

 ::openfl::display::DisplayObject PanelView_obj::notPressedSkinUp;

 ::openfl::display::DisplayObject PanelView_obj::notPressedSkinHover;


::hx::ObjectPtr< PanelView_obj > PanelView_obj::__new( ::model::PanelModel model, ::openfl::display::DisplayObjectContainer display) {
	::hx::ObjectPtr< PanelView_obj > __this = new PanelView_obj();
	__this->__construct(model,display);
	return __this;
}

::hx::ObjectPtr< PanelView_obj > PanelView_obj::__alloc(::hx::Ctx *_hx_ctx, ::model::PanelModel model, ::openfl::display::DisplayObjectContainer display) {
	PanelView_obj *__this = (PanelView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PanelView_obj), true, "view.PanelView"));
	*(void **)__this = PanelView_obj::_hx_vtable;
	__this->__construct(model,display);
	return __this;
}

PanelView_obj::PanelView_obj()
{
}

void PanelView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PanelView);
	HX_MARK_MEMBER_NAME(listeners,"listeners");
	HX_MARK_MEMBER_NAME(model,"model");
	HX_MARK_MEMBER_NAME(display,"display");
	HX_MARK_MEMBER_NAME(scrollContainer,"scrollContainer");
	HX_MARK_MEMBER_NAME(buttons,"buttons");
	HX_MARK_END_CLASS();
}

void PanelView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(listeners,"listeners");
	HX_VISIT_MEMBER_NAME(model,"model");
	HX_VISIT_MEMBER_NAME(display,"display");
	HX_VISIT_MEMBER_NAME(scrollContainer,"scrollContainer");
	HX_VISIT_MEMBER_NAME(buttons,"buttons");
}

::hx::Val PanelView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Draw") ) { return ::hx::Val( Draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { return ::hx::Val( model ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { return ::hx::Val( display ); }
		if (HX_FIELD_EQ(inName,"buttons") ) { return ::hx::Val( buttons ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { return ::hx::Val( listeners ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"chooseButton") ) { return ::hx::Val( chooseButton_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStageResize") ) { return ::hx::Val( onStageResize_dyn() ); }
		if (HX_FIELD_EQ(inName,"onButtonClick") ) { return ::hx::Val( onButtonClick_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"scrollContainer") ) { return ::hx::Val( scrollContainer ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return ::hx::Val( addEventListener_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PanelView_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"pressedSkin") ) { outValue = ( pressedSkin ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"notPressedSkinUp") ) { outValue = ( notPressedSkinUp ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"notPressedSkinHover") ) { outValue = ( notPressedSkinHover ); return true; }
	}
	return false;
}

::hx::Val PanelView_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { model=inValue.Cast<  ::model::PanelModel >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { display=inValue.Cast<  ::openfl::display::DisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttons") ) { buttons=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { listeners=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"scrollContainer") ) { scrollContainer=inValue.Cast<  ::feathers::controls::ScrollContainer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PanelView_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"pressedSkin") ) { pressedSkin=ioValue.Cast<  ::feathers::skins::RectangleSkin >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"notPressedSkinUp") ) { notPressedSkinUp=ioValue.Cast<  ::openfl::display::DisplayObject >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"notPressedSkinHover") ) { notPressedSkinHover=ioValue.Cast<  ::openfl::display::DisplayObject >(); return true; }
	}
	return false;
}

void PanelView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("listeners",7f,65,8e,f3));
	outFields->push(HX_("model",a9,23,58,0c));
	outFields->push(HX_("display",42,2a,4a,bb));
	outFields->push(HX_("scrollContainer",74,93,4e,a6));
	outFields->push(HX_("buttons",41,52,75,ca));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PanelView_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(PanelView_obj,listeners),HX_("listeners",7f,65,8e,f3)},
	{::hx::fsObject /*  ::model::PanelModel */ ,(int)offsetof(PanelView_obj,model),HX_("model",a9,23,58,0c)},
	{::hx::fsObject /*  ::openfl::display::DisplayObjectContainer */ ,(int)offsetof(PanelView_obj,display),HX_("display",42,2a,4a,bb)},
	{::hx::fsObject /*  ::feathers::controls::ScrollContainer */ ,(int)offsetof(PanelView_obj,scrollContainer),HX_("scrollContainer",74,93,4e,a6)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(PanelView_obj,buttons),HX_("buttons",41,52,75,ca)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo PanelView_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &PanelView_obj::layoutGap,HX_("layoutGap",8c,8c,fc,5d)},
	{::hx::fsFloat,(void *) &PanelView_obj::buttonHeight,HX_("buttonHeight",79,df,09,aa)},
	{::hx::fsFloat,(void *) &PanelView_obj::buttonWidth,HX_("buttonWidth",b4,76,0d,18)},
	{::hx::fsObject /*  ::feathers::skins::RectangleSkin */ ,(void *) &PanelView_obj::pressedSkin,HX_("pressedSkin",3f,0e,d0,c8)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(void *) &PanelView_obj::notPressedSkinUp,HX_("notPressedSkinUp",67,ad,e5,55)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(void *) &PanelView_obj::notPressedSkinHover,HX_("notPressedSkinHover",30,8e,b4,c8)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String PanelView_obj_sMemberFields[] = {
	HX_("listeners",7f,65,8e,f3),
	HX_("model",a9,23,58,0c),
	HX_("display",42,2a,4a,bb),
	HX_("scrollContainer",74,93,4e,a6),
	HX_("buttons",41,52,75,ca),
	HX_("Draw",24,58,49,2d),
	HX_("onStageResize",73,f8,5e,fe),
	HX_("onButtonClick",17,5a,f3,f8),
	HX_("addEventListener",cd,0b,64,f1),
	HX_("chooseButton",29,6c,6f,c6),
	::String(null()) };

static void PanelView_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PanelView_obj::layoutGap,"layoutGap");
	HX_MARK_MEMBER_NAME(PanelView_obj::buttonHeight,"buttonHeight");
	HX_MARK_MEMBER_NAME(PanelView_obj::buttonWidth,"buttonWidth");
	HX_MARK_MEMBER_NAME(PanelView_obj::pressedSkin,"pressedSkin");
	HX_MARK_MEMBER_NAME(PanelView_obj::notPressedSkinUp,"notPressedSkinUp");
	HX_MARK_MEMBER_NAME(PanelView_obj::notPressedSkinHover,"notPressedSkinHover");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PanelView_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PanelView_obj::layoutGap,"layoutGap");
	HX_VISIT_MEMBER_NAME(PanelView_obj::buttonHeight,"buttonHeight");
	HX_VISIT_MEMBER_NAME(PanelView_obj::buttonWidth,"buttonWidth");
	HX_VISIT_MEMBER_NAME(PanelView_obj::pressedSkin,"pressedSkin");
	HX_VISIT_MEMBER_NAME(PanelView_obj::notPressedSkinUp,"notPressedSkinUp");
	HX_VISIT_MEMBER_NAME(PanelView_obj::notPressedSkinHover,"notPressedSkinHover");
};

#endif

::hx::Class PanelView_obj::__mClass;

static ::String PanelView_obj_sStaticFields[] = {
	HX_("layoutGap",8c,8c,fc,5d),
	HX_("buttonHeight",79,df,09,aa),
	HX_("buttonWidth",b4,76,0d,18),
	HX_("pressedSkin",3f,0e,d0,c8),
	HX_("notPressedSkinUp",67,ad,e5,55),
	HX_("notPressedSkinHover",30,8e,b4,c8),
	::String(null())
};

void PanelView_obj::__register()
{
	PanelView_obj _hx_dummy;
	PanelView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("view.PanelView",20,18,65,fd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PanelView_obj::__GetStatic;
	__mClass->mSetStaticField = &PanelView_obj::__SetStatic;
	__mClass->mMarkFunc = PanelView_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PanelView_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PanelView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PanelView_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PanelView_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PanelView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PanelView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PanelView_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_eb5c71447419d6c2_22_boot)
HXDLIN(  22)		layoutGap = ((Float)10);
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb5c71447419d6c2_23_boot)
HXDLIN(  23)		buttonHeight = ((Float)40);
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb5c71447419d6c2_24_boot)
HXDLIN(  24)		buttonWidth = ((Float)250);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_eb5c71447419d6c2_26_boot)
HXDLIN(  26)		pressedSkin =  ::feathers::skins::RectangleSkin_obj::__alloc( HX_CTX ,::feathers::graphics::FillStyle_obj::SolidColor(9402111,null()),null());
            	}
}

} // end namespace view
