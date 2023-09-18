// Generated by Haxe 4.3.1
#ifndef INCLUDED_feathers_controls_ListView
#define INCLUDED_feathers_controls_ListView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_controls_supportClasses_BaseScrollContainer
#include <feathers/controls/supportClasses/BaseScrollContainer.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusContainer
#include <feathers/core/IFocusContainer.h>
#endif
#ifndef INCLUDED_feathers_core_IDataSelector
#include <feathers/core/IDataSelector.h>
#endif
#ifndef INCLUDED_feathers_core_IIndexSelector
#include <feathers/core/IIndexSelector.h>
#endif
HX_DECLARE_CLASS2(feathers,controls,ListView)
HX_DECLARE_CLASS3(feathers,controls,_ListView,ItemRendererStorage)
HX_DECLARE_CLASS3(feathers,controls,supportClasses,AdvancedLayoutViewPort)
HX_DECLARE_CLASS3(feathers,controls,supportClasses,BaseScrollContainer)
HX_DECLARE_CLASS3(feathers,controls,supportClasses,IViewPort)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDataSelector)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusContainer)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS2(feathers,core,IIndexSelector)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,InvalidationFlag)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,data,IFlatCollection)
HX_DECLARE_CLASS2(feathers,data,ListViewItemState)
HX_DECLARE_CLASS2(feathers,events,FlatCollectionEvent)
HX_DECLARE_CLASS2(feathers,events,TriggerEvent)
HX_DECLARE_CLASS2(feathers,layout,ILayout)
HX_DECLARE_CLASS2(feathers,layout,ILayoutObject)
HX_DECLARE_CLASS2(feathers,layout,VirtualLayoutRange)
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IVariantStyleObject)
HX_DECLARE_CLASS2(feathers,utils,DisplayObjectFactory)
HX_DECLARE_CLASS2(feathers,utils,DisplayObjectRecycler)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,utils,ObjectPool_feathers_data_ListViewItemState)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,events,TouchEvent)

namespace feathers{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES ListView_obj : public  ::feathers::controls::supportClasses::BaseScrollContainer_obj
{
	public:
		typedef  ::feathers::controls::supportClasses::BaseScrollContainer_obj super;
		typedef ListView_obj OBJ_;
		ListView_obj();

	public:
		enum { _hx_ClassId = 0x2607a7f1 };

		void __construct(::Dynamic dataProvider, ::Dynamic changeListener);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls.ListView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls.ListView"); }
		static ::hx::ObjectPtr< ListView_obj > __new(::Dynamic dataProvider, ::Dynamic changeListener);
		static ::hx::ObjectPtr< ListView_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic dataProvider, ::Dynamic changeListener);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,ListView_obj *_hx_obj);
		//~ListView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ListView",03,be,f5,07); }

		static void __boot();
		static  ::Dynamic __meta__;
		static ::String VARIANT_BORDERLESS;
		static ::String VARIANT_BORDER;
		static ::String VARIANT_POP_UP;
		static ::String CHILD_VARIANT_ITEM_RENDERER;
		static  ::feathers::core::InvalidationFlag INVALIDATION_FLAG_ITEM_RENDERER_FACTORY;
		static  ::feathers::data::ListViewItemState RESET_ITEM_STATE;
		static void defaultUpdateItemRenderer( ::openfl::display::DisplayObject itemRenderer, ::feathers::data::ListViewItemState state);
		static ::Dynamic defaultUpdateItemRenderer_dyn();

		static void defaultResetItemRenderer( ::openfl::display::DisplayObject itemRenderer, ::feathers::data::ListViewItemState state);
		static ::Dynamic defaultResetItemRenderer_dyn();

		 ::feathers::controls::supportClasses::AdvancedLayoutViewPort listViewPort;
		bool get_tabEnabled();

		bool _childFocusEnabled;
		bool get_childFocusEnabled();
		::Dynamic get_childFocusEnabled_dyn();

		bool set_childFocusEnabled(bool value);
		::Dynamic set_childFocusEnabled_dyn();

		::Dynamic _dataProvider;
		::Dynamic get_dataProvider();
		::Dynamic get_dataProvider_dyn();

		::Dynamic set_dataProvider(::Dynamic value);
		::Dynamic set_dataProvider_dyn();

		int _selectedIndex;
		int get_selectedIndex();
		::Dynamic get_selectedIndex_dyn();

		int set_selectedIndex(int value);
		::Dynamic set_selectedIndex_dyn();

		int get_maxSelectedIndex();
		::Dynamic get_maxSelectedIndex_dyn();

		 ::Dynamic _selectedItem;
		 ::Dynamic get_selectedItem();
		::Dynamic get_selectedItem_dyn();

		 ::Dynamic set_selectedItem( ::Dynamic value);
		::Dynamic set_selectedItem_dyn();

		bool _allowMultipleSelection;
		bool get_allowMultipleSelection();
		::Dynamic get_allowMultipleSelection_dyn();

		bool set_allowMultipleSelection(bool value);
		::Dynamic set_allowMultipleSelection_dyn();

		int _selectionAnchorIndex;
		::Array< int > _selectedIndices;
		::Array< int > get_selectedIndices();
		::Dynamic get_selectedIndices_dyn();

		::Array< int > set_selectedIndices(::Array< int > value);
		::Dynamic set_selectedIndices_dyn();

		::cpp::VirtualArray _selectedItems;
		::cpp::VirtualArray get_selectedItems();
		::Dynamic get_selectedItems_dyn();

		::cpp::VirtualArray set_selectedItems(::cpp::VirtualArray value);
		::Dynamic set_selectedItems_dyn();

		::Dynamic _previousLayout;
		::String _previousCustomItemRendererVariant;
		 ::feathers::utils::DisplayObjectRecycler get_itemRendererRecycler();
		::Dynamic get_itemRendererRecycler_dyn();

		 ::feathers::utils::DisplayObjectRecycler set_itemRendererRecycler( ::feathers::utils::DisplayObjectRecycler value);
		::Dynamic set_itemRendererRecycler_dyn();

		bool _forceItemStateUpdate;
		bool get_forceItemStateUpdate();
		::Dynamic get_forceItemStateUpdate_dyn();

		bool set_forceItemStateUpdate(bool value);
		::Dynamic set_forceItemStateUpdate_dyn();

		 ::haxe::ds::StringMap _recyclerMap;
		 ::Dynamic _itemRendererRecyclerIDFunction;
		Dynamic _itemRendererRecyclerIDFunction_dyn() { return _itemRendererRecyclerIDFunction;}
		 ::Dynamic get_itemRendererRecyclerIDFunction();
		::Dynamic get_itemRendererRecyclerIDFunction_dyn();

		 ::Dynamic set_itemRendererRecyclerIDFunction( ::Dynamic value);
		::Dynamic set_itemRendererRecyclerIDFunction_dyn();

		 ::feathers::controls::_ListView::ItemRendererStorage _defaultStorage;
		::Array< ::Dynamic> _additionalStorage;
		 ::haxe::ds::ObjectMap dataToItemRenderer;
		 ::haxe::ds::ObjectMap itemRendererToItemState;
		 ::lime::utils::ObjectPool_feathers_data_ListViewItemState itemStatePool;
		::cpp::VirtualArray _unrenderedData;
		::cpp::VirtualArray _virtualCache;
		 ::feathers::layout::VirtualLayoutRange _visibleIndices;
		 ::feathers::layout::VirtualLayoutRange _tempVisibleIndices;
		::Array< ::Dynamic> _layoutItems;
		bool _selectable;
		bool get_selectable();
		::Dynamic get_selectable_dyn();

		bool set_selectable(bool value);
		::Dynamic set_selectable_dyn();

		bool _virtualLayout;
		bool get_virtualLayout();
		::Dynamic get_virtualLayout_dyn();

		bool set_virtualLayout(bool value);
		::Dynamic set_virtualLayout_dyn();

		bool pointerSelectionEnabled;
		int _pendingScrollIndex;
		 ::Dynamic _pendingScrollDuration;
		bool _ignoreSelectionChange;
		bool _ignoreLayoutChanges;
		::Dynamic itemToText;
		inline ::Dynamic &itemToText_dyn() {return itemToText; }

		::Dynamic itemToEnabled;
		inline ::Dynamic &itemToEnabled_dyn() {return itemToEnabled; }

		void scrollToIndex(int index, ::Dynamic animationDuration);
		::Dynamic scrollToIndex_dyn();

		 ::openfl::display::DisplayObject itemToItemRenderer( ::Dynamic item);
		::Dynamic itemToItemRenderer_dyn();

		 ::Dynamic itemRendererToItem( ::openfl::display::DisplayObject itemRenderer);
		::Dynamic itemRendererToItem_dyn();

		 ::openfl::display::DisplayObject indexToItemRenderer(int index);
		::Dynamic indexToItemRenderer_dyn();

		 ::feathers::utils::DisplayObjectRecycler getItemRendererRecycler(::String id);
		::Dynamic getItemRendererRecycler_dyn();

		void setItemRendererRecycler(::String id, ::feathers::utils::DisplayObjectRecycler recycler);
		::Dynamic setItemRendererRecycler_dyn();

		void initializeListViewTheme();
		::Dynamic initializeListViewTheme_dyn();

		void update();

		void createScroller();

		void refreshScrollerValues();

		bool needsScrollMeasurement();

		void refreshItemRenderers(::Array< ::Dynamic> items);
		::Dynamic refreshItemRenderers_dyn();

		void refreshInactiveItemRenderers( ::feathers::controls::_ListView::ItemRendererStorage storage,bool factoryInvalid);
		::Dynamic refreshInactiveItemRenderers_dyn();

		void recoverInactiveItemRenderers( ::feathers::controls::_ListView::ItemRendererStorage storage);
		::Dynamic recoverInactiveItemRenderers_dyn();

		void freeInactiveItemRenderers( ::feathers::controls::_ListView::ItemRendererStorage storage);
		::Dynamic freeInactiveItemRenderers_dyn();

		void findUnrenderedData();
		::Dynamic findUnrenderedData_dyn();

		bool populateCurrentItemState( ::Dynamic item,int index, ::feathers::data::ListViewItemState state,bool force);
		::Dynamic populateCurrentItemState_dyn();

		void resetItemRenderer( ::openfl::display::DisplayObject itemRenderer, ::feathers::data::ListViewItemState state, ::feathers::controls::_ListView::ItemRendererStorage storage);
		::Dynamic resetItemRenderer_dyn();

		void updateItemRenderer( ::openfl::display::DisplayObject itemRenderer, ::feathers::data::ListViewItemState state, ::feathers::controls::_ListView::ItemRendererStorage storage);
		::Dynamic updateItemRenderer_dyn();

		void refreshItemRendererProperties( ::openfl::display::DisplayObject itemRenderer, ::feathers::data::ListViewItemState state);
		::Dynamic refreshItemRendererProperties_dyn();

		void renderUnrenderedData();
		::Dynamic renderUnrenderedData_dyn();

		 ::openfl::display::DisplayObject createItemRenderer( ::feathers::data::ListViewItemState state);
		::Dynamic createItemRenderer_dyn();

		void destroyItemRenderer( ::openfl::display::DisplayObject itemRenderer, ::feathers::utils::DisplayObjectRecycler recycler);
		::Dynamic destroyItemRenderer_dyn();

		 ::feathers::controls::_ListView::ItemRendererStorage itemStateToStorage( ::feathers::data::ListViewItemState state);
		::Dynamic itemStateToStorage_dyn();

		void refreshSelectedIndicesAfterFilterOrSort();
		::Dynamic refreshSelectedIndicesAfterFilterOrSort_dyn();

		void handleSelectionChange( ::Dynamic item,int index,bool ctrlKey,bool shiftKey);
		::Dynamic handleSelectionChange_dyn();

		void handlePendingScroll();
		::Dynamic handlePendingScroll_dyn();

		void listView_itemRenderer_touchTapHandler( ::openfl::events::TouchEvent event);
		::Dynamic listView_itemRenderer_touchTapHandler_dyn();

		void listView_itemRenderer_clickHandler( ::openfl::events::MouseEvent event);
		::Dynamic listView_itemRenderer_clickHandler_dyn();

		void listView_itemRenderer_triggerHandler( ::feathers::events::TriggerEvent event);
		::Dynamic listView_itemRenderer_triggerHandler_dyn();

		void listView_itemRenderer_resizeHandler( ::openfl::events::Event event);
		::Dynamic listView_itemRenderer_resizeHandler_dyn();

		void listView_itemRenderer_changeHandler( ::openfl::events::Event event);
		::Dynamic listView_itemRenderer_changeHandler_dyn();

		void listView_dataProvider_changeHandler( ::openfl::events::Event event);
		::Dynamic listView_dataProvider_changeHandler_dyn();

		void listView_dataProvider_addItemHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic listView_dataProvider_addItemHandler_dyn();

		void listView_dataProvider_removeItemHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic listView_dataProvider_removeItemHandler_dyn();

		void listView_dataProvider_replaceItemHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic listView_dataProvider_replaceItemHandler_dyn();

		void listView_dataProvider_removeAllHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic listView_dataProvider_removeAllHandler_dyn();

		void listView_dataProvider_resetHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic listView_dataProvider_resetHandler_dyn();

		void listView_dataProvider_sortChangeHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic listView_dataProvider_sortChangeHandler_dyn();

		void listView_dataProvider_filterChangeHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic listView_dataProvider_filterChangeHandler_dyn();

		void updateItemRendererForIndex(int index);
		::Dynamic updateItemRendererForIndex_dyn();

		void listView_dataProvider_updateItemHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic listView_dataProvider_updateItemHandler_dyn();

		void listView_dataProvider_updateAllHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic listView_dataProvider_updateAllHandler_dyn();

		void navigateWithKeyboard( ::openfl::events::KeyboardEvent event);
		::Dynamic navigateWithKeyboard_dyn();

		void baseScrollContainer_keyDownHandler( ::openfl::events::KeyboardEvent event);

		void listView_keyDownHandler( ::openfl::events::KeyboardEvent event);
		::Dynamic listView_keyDownHandler_dyn();

		::hx::Class get_styleContext();

		::Dynamic _hx___layout;
		::Dynamic get_layout();
		::Dynamic get_layout_dyn();

		::Dynamic set_layout(::Dynamic value);
		::Dynamic set_layout_dyn();

		::Dynamic clearStyle_layout();
		::Dynamic clearStyle_layout_dyn();

		::String _hx___customItemRendererVariant;
		::String get_customItemRendererVariant();
		::Dynamic get_customItemRendererVariant_dyn();

		::String set_customItemRendererVariant(::String value);
		::Dynamic set_customItemRendererVariant_dyn();

		::String clearStyle_customItemRendererVariant();
		::Dynamic clearStyle_customItemRendererVariant_dyn();

};

} // end namespace feathers
} // end namespace controls

#endif /* INCLUDED_feathers_controls_ListView */ 