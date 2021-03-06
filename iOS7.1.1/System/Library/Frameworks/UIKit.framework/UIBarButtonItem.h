/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIBarItem.h>
#import <CoreFoundation/NSCoding.h>

@class NSString, NSSet, UIImage, UIView, NSDictionary, UIToolbarButton, UIColor;

@interface UIBarButtonItem : UIBarItem <NSCoding> {

	NSString* _title;
	NSSet* _possibleTitles;
	SEL _action;
	id _target;
	UIImage* _image;
	UIImage* _landscapeImagePhone;
	UIEdgeInsets _imageInsets;
	UIEdgeInsets _landscapeImagePhoneInsets;
	double _width;
	UIView* _view;
	long long _tag;
	id _appearanceStorage;
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned viewIsCustom : 1;
		unsigned isMinibarView : 1;
		unsigned disableAutosizing : 1;
		unsigned selected : 1;
		unsigned imageHasEffects : 1;
	}  _barButtonItemFlags;
	bool _flexible;
	bool __viewWantsLetterpressImage;
	bool __needsViewUpdateForLetterpressImage;
	double _toolbarCharge;
	double _minimumWidth;
	double _maximumWidth;
	NSSet* _possibleSystemItems;
	NSDictionary* _stylesForSizingTitles;
	UIBarButtonItem* __itemVariation;

}

@property (nonatomic,readonly) bool _needsViewUpdateForLetterpressImage; 
@property (assign,getter=isEnabled,nonatomic) bool enabled; 
@property (nonatomic,readonly) UIToolbarButton * _toolbarButton; 
@property (setter=_setMiniImage:,getter=_miniImage,nonatomic,retain) UIImage * miniImage; 
@property (assign,setter=_setMiniImageInsets:,getter=_miniImageInsets,nonatomic) UIEdgeInsets miniImageInsets; 
@property (nonatomic,readonly) bool isSystemItem; 
@property (nonatomic,readonly) long long systemItem; 
@property (setter=_setPossibleSystemItems:,getter=_possibleSystemItems,nonatomic,copy) NSSet * possibleSystemItems; 
@property (setter=_setPossibleItemVariations:,nonatomic,@dynamic,copy) NSSet * _possibleItemVariations; 
@property (setter=_setItemVariation:,nonatomic,@dynamic,retain) UIBarButtonItem * _itemVariation; 
@property (assign,nonatomic) bool selected; 
@property (assign,setter=_setImageHasEffects:,nonatomic) bool _imageHasEffects; 
@property (assign,nonatomic) long long style; 
@property (assign,nonatomic) double width; 
@property (nonatomic,copy) NSSet * possibleTitles; 
@property (nonatomic,retain) UIView * customView; 
@property (assign,nonatomic) SEL action;                                                                                         //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) id target;                                                                                          //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) UIColor * tintColor; 
@property (setter=_setPossibleSystemItems:,getter=_possibleSystemItems,nonatomic,copy) NSSet * possibleSystemItems;              //@synthesize possibleSystemItems=_possibleSystemItems - In the implementation block
@property (setter=_setPossibleItemVariations:,nonatomic,copy) NSSet * _possibleItemVariations; 
@property (setter=_setItemVariation:,nonatomic,retain) UIBarButtonItem * _itemVariation;                                         //@synthesize _itemVariation=__itemVariation - In the implementation block
@property (setter=_setStylesForSizingTitles:,nonatomic,copy) NSDictionary * _stylesForSizingTitles;                              //@synthesize stylesForSizingTitles=_stylesForSizingTitles - In the implementation block
@property (assign,setter=_setToolbarCharge:,nonatomic) double _toolbarCharge;                                                    //@synthesize toolbarCharge=_toolbarCharge - In the implementation block
@property (assign,setter=_setMinimumWidth:,nonatomic) double _minimumWidth;                                                      //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (assign,setter=_setMaximumWidth:,nonatomic) double _maximumWidth;                                                      //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (assign,setter=_setFlexible:,nonatomic) bool _flexible;                                                                //@synthesize flexible=_flexible - In the implementation block
@property (nonatomic,readonly) bool _viewWantsLetterpressImage;                                                                  //@synthesize _viewWantsLetterpressImage=__viewWantsLetterpressImage - In the implementation block
@property (nonatomic,readonly) bool _needsViewUpdateForLetterpressImage;                                                         //@synthesize _needsViewUpdateForLetterpressImage=__needsViewUpdateForLetterpressImage - In the implementation block
+(void)_getSystemItemStyle:(long long*)arg1 title:(id*)arg2 image:(id*)arg3 selectedImage:(id*)arg4 action:(SEL*)arg5 forBarStyle:(long long)arg6 landscape:(bool)arg7 alwaysBordered:(bool)arg8 usingSystemItem:(long long)arg9 usingItemStyle:(long long)arg10 ;
+(Class)classForNavigationButton;
+(id)_appearanceBlindViewClasses;
-(void)showActionSheet:(id)arg1 animated:(bool)arg2 ;
-(void)configureFromScriptButton:(id)arg1 ;
-(void)mf_setImageOffset:(CGPoint)arg1 ;
-(void)mf_setMiniImageOffset:(CGPoint)arg1 ;
-(void)mf_setImageVerticalOffset:(double)arg1 ;
-(void)mf_setMiniImageVerticalOffset:(double)arg1 ;
-(id)scriptingID;
-(void)_updateView;
-(UIEdgeInsets)_leftRightImagePaddingForEdgeMarginInNavBarIsMini:(bool)arg1 ;
-(void)_getSystemItemStyle:(long long*)arg1 title:(id*)arg2 image:(id*)arg3 selectedImage:(id*)arg4 action:(SEL*)arg5 forBarStyle:(long long)arg6 landscape:(bool)arg7 alwaysBordered:(bool)arg8 ;
-(void)_getNavBarEdgeSizeAdjust:(CGSize*)arg1 imageInsets:(UIEdgeInsets*)arg2 landscape:(bool)arg3 ;
-(void)_getToolbarEdgeInsets:(UIEdgeInsets*)arg1 imageInsets:(UIEdgeInsets*)arg2 glowInsets:(UIEdgeInsets*)arg3 forBarStyle:(long long)arg4 landscape:(bool)arg5 alwaysBordered:(bool)arg6 ;
-(id)window;
-(id)view;
-(id)nextResponder;
-(void)setView:(id)arg1 ;
-(bool)isCustomViewItem;
-(bool)isMinibarView;
-(void)setIsMinibarView:(bool)arg1 ;
-(void)_sendAction:(id)arg1 withEvent:(id)arg2 ;
-(id)createViewForNavigationItem:(id)arg1 ;
-(bool)_shouldBezelSystemButtonImage;
-(double)_width;
-(id)createViewForToolbar:(id)arg1 ;
-(bool)_imageHasEffects;
-(void)_applyPositionAdjustmentToSegmentedControl:(id)arg1 ;
-(id)_miniImage;
-(void)_setMiniImage:(id)arg1 ;
-(UIEdgeInsets)_miniImageInsets;
-(void)_setMiniImageInsets:(UIEdgeInsets)arg1 ;
-(id)_toolbarButton;
-(void)_setImageHasEffects:(bool)arg1 ;
-(id)_foregroundColorForLetterpressWithView:(id)arg1 ;
-(void)_setWidth:(double)arg1 ;
-(void)_connectInterfaceBuilderEventConnection:(id)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)image;
-(long long)style;
-(void)setTag:(long long)arg1 ;
-(bool)isEnabled;
-(id)tintColor;
-(void)setTintColor:(id)arg1 ;
-(long long)tag;
-(void)setEnabled:(bool)arg1 ;
-(id)target;
-(id)_appearanceStorage;
-(id)title;
-(bool)_needsViewUpdateForLetterpressImage;
-(bool)isSystemItem;
-(long long)systemItem;
-(id)landscapeImagePhone;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)backgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 barMetrics:(long long)arg3 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(id)_stylesForSizingTitles;
-(void)_setStylesForSizingTitles:(id)arg1 ;
-(id)_possibleSystemItems;
-(double)_minimumWidth;
-(double)_maximumWidth;
-(void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(double)width;
-(void)setSelected:(bool)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(void)_setPossibleItemVariations:(id)arg1 ;
-(void)_setItemVariation:(id)arg1 ;
-(id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(id)titleTextAttributesForState:(unsigned long long)arg1 ;
-(id)customView;
-(bool)_flexible;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)imageInsets;
-(id)initWithCustomView:(id)arg1 ;
-(void)setWidth:(double)arg1 ;
-(void)_setToolbarCharge:(double)arg1 ;
-(void)setLandscapeImagePhone:(id)arg1 ;
-(void)setCustomView:(id)arg1 ;
-(void)setPossibleTitles:(id)arg1 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(id)initWithImage:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(id)initWithImage:(id)arg1 landscapeImagePhone:(id)arg2 style:(long long)arg3 target:(id)arg4 action:(SEL)arg5 ;
-(id)initWithBarButtonSystemItem:(long long)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)setLandscapeImagePhoneInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)landscapeImagePhoneInsets;
-(id)_possibleItemVariations;
-(id)itemVariation;
-(id)possibleTitles;
-(void)_setSystemItem:(long long)arg1 ;
-(void)_setPossibleSystemItems:(id)arg1 ;
-(bool)selected;
-(id)backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(void)setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(double)backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(UIOffset)titlePositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(double)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(UIOffset)backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1 ;
-(double)_toolbarCharge;
-(void)_setMinimumWidth:(double)arg1 ;
-(void)_setMaximumWidth:(double)arg1 ;
-(void)_setFlexible:(bool)arg1 ;
-(id)_itemVariation;
-(bool)_viewWantsLetterpressImage;
@end

