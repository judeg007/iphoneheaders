/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, UILabel, UIToolbarButtonBadge, _UIPressedIndicatorView, UIColor;

@interface UIToolbarButton : UIControl {

	CGRect _hitRect;
	UIView* _info;
	UILabel* _label;
	UIToolbarButtonBadge* _badge;
	_UIPressedIndicatorView* _pressedIndicator;
	long long _barStyle;
	long long _style;
	UIEdgeInsets _glowAdjust;
	bool _onState;
	bool _barHeight;
	bool _badgeAnimated;
	bool _bezel;
	double _minimumWidth;
	double _maximumWidth;
	float _labelHeight;
	UIEdgeInsets _infoInsets;
	UIColor* _toolbarTintColor;
	bool _isAnimatedTrashButton;
	id _appearanceStorage;
	bool _isInTopBar;
	Class _appearanceGuideClass;

}

@property (assign,getter=isAnimatedTrashButton,nonatomic) bool animatedTrashButton;                        //@synthesize isAnimatedTrashButton=_isAnimatedTrashButton - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor; 
@property (assign,setter=_setAppearanceGuideClass:,nonatomic) Class _appearanceGuideClass;                 //@synthesize appearanceGuideClass=_appearanceGuideClass - In the implementation block
@property (assign,setter=_setCreatedByBarButtonItem:,nonatomic) bool _createdByBarButtonItem; 
+(id)_defaultLabelFont;
+(id)_defaultLabelColor;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(bool)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(bool)_canHandleStatusBarTouchAtLocation:(CGPoint)arg1 ;
-(Class)_appearanceGuideClass;
-(bool)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setEnabled:(bool)arg1 ;
-(void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2 ;
-(bool)_wantsAccessibilityButtonShapes;
-(void)setBarStyle:(long long)arg1 ;
-(void)_UIAppearance_setTintColor:(id)arg1 ;
-(void)_setTintColor:(id)arg1 ;
-(bool)_showsAccessibilityBackgroundWhenEnabled;
-(void)_setWantsBlendModeForAccessibilityBackgrounds:(bool)arg1 ;
-(double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(id)_defaultTitleColorForState:(unsigned long long)arg1 ;
-(CGSize)_defaultTitleShadowOffsetForState:(unsigned long long)arg1 ;
-(id)_defaultTitleShadowColorForState:(unsigned long long)arg1 ;
-(void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)_tintColor;
-(id)_customOrAccessibilityBackgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(bool)arg3 ;
-(void)setHighlighted:(bool)arg1 ;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setWantsLetterpressContent;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(id)_backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(id)_titleTextAttributesForState:(unsigned long long)arg1 ;
-(void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(UIOffset)_titlePositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(bool)_createdByBarButtonItem;
-(void)_setCreatedByBarButtonItem:(bool)arg1 ;
-(void)_setAppearanceGuideClass:(Class)arg1 ;
-(void)_setLastHighlightSuccessful:(bool)arg1 ;
-(bool)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_setTouchHasHighlighted:(bool)arg1 ;
-(id)_info;
-(void)_sizeView:(id)arg1 toPossibleTitles:(id)arg2 pressedTitle:(id)arg3 ;
-(id)_newButton;
-(void)_adjustPushButtonForMiniBar:(bool)arg1 isChangingBarHeight:(bool)arg2 ;
-(bool)_isBordered;
-(void)_setPressed:(bool)arg1 ;
-(bool)_infoIsButton;
-(void)_positionBadge;
-(void)_badgeAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_adjustToolbarButtonInfo;
-(bool)isAnimatedTrashButton;
-(bool)_isBorderedOtherThanAccessibility;
-(bool)_shouldApplyPadding;
-(void)_animateImage:(float)arg1 withButtonBar:(id)arg2 target:(id)arg3 didFinishSelector:(SEL)arg4 ;
-(bool)_useSilverLook;
-(void)_adjustToolbarButtonInfoTintColorHasChanged:(bool)arg1 ;
-(void)_updateInfoTextColorsForState:(unsigned long long)arg1 ;
-(void)_setInTopBar:(bool)arg1 ;
-(id)initWithImage:(id)arg1 pressedImage:(id)arg2 label:(id)arg3 labelHeight:(float)arg4 withBarStyle:(long long)arg5 withStyle:(long long)arg6 withInsets:(UIEdgeInsets)arg7 possibleTitles:(id)arg8 possibleSystemItems:(id)arg9 withToolbarTintColor:(id)arg10 bezel:(bool)arg11 imageInsets:(UIEdgeInsets)arg12 glowInsets:(UIEdgeInsets)arg13 landscape:(bool)arg14 ;
-(void)setSizesToFitImage:(bool)arg1 ;
-(void)_setButtonBarHitRect:(CGRect)arg1 ;
-(CGRect)_buttonBarHitRect;
-(void)_showPressedIndicator:(bool)arg1 ;
-(void)setUseSelectedImage:(bool)arg1 ;
-(void)_setBadgeValue:(id)arg1 ;
-(void)_setBadgeAnimated:(bool)arg1 ;
-(void)_setInfoWidth:(float)arg1 ;
-(void)_setInfoExtremityWidth:(float)arg1 isMin:(bool)arg2 ;
-(void)_setInfoFlexibleWidth:(bool)arg1 ;
-(bool)_canGetPadding;
-(double)_paddingForLeft:(bool)arg1 ;
-(void)_setOn:(bool)arg1 ;
-(bool)_isOn;
-(void)_animateImage:(float)arg1 withButtonBar:(id)arg2 ;
-(void)_setBarHeight:(float)arg1 ;
-(bool)_useBarHeight;
-(void)setToolbarTintColor:(id)arg1 ;
-(void)setAnimatedTrashButton:(bool)arg1 ;
@end

