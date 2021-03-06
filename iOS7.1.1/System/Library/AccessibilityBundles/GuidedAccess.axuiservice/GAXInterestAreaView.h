/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/GAXEventStealerView.h>
#import <GuidedAccess/GAXInterestAreaFingerPathViewDataSource.h>
#import <GuidedAccess/GAXInterestAreaClippedViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol GAXInterestAreaViewDelegate, GAXInterestAreaViewDataSource;
@class GAXStyleProvider, UIColor, UIView, GAXInterestAreaClippedView, GAXInterestAreaFingerPathView, NSMutableArray, GAXInterestAreaViewButton;

@interface GAXInterestAreaView : GAXEventStealerView <GAXInterestAreaFingerPathViewDataSource, GAXInterestAreaClippedViewDelegate, UIGestureRecognizerDelegate> {

	bool _specialControlsVisible;
	bool _backgroundShouldCoverEverything;
	int _backgroundStyle;
	<GAXInterestAreaViewDelegate>* _delegate;
	<GAXInterestAreaViewDataSource>* _dataSource;
	GAXStyleProvider* _styleProvider;
	double _backgroundPatternScaleFactor;
	UIColor* _backgroundStripesPatternColor;
	UIView* _contentsView;
	UIView* _backgroundContainerView;
	GAXInterestAreaClippedView* _backgroundViewCoveringEverything;
	GAXInterestAreaFingerPathView* _fingerPathView;
	NSMutableArray* _clippedViews;
	NSMutableArray* _closeButtons;
	NSMutableArray* _resizingKnobButtons;
	GAXInterestAreaViewButton* _buttonBeingDragged;
	unsigned long long _indexOfInterestAreaPathBeingDragged;
	CGPoint _buttonBeingDraggedInitialCenter;
	CGRect _savedFrame;

}

@property (assign,nonatomic) <GAXInterestAreaViewDataSource> * dataSource;                               //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) <GAXInterestAreaViewDelegate> * delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GAXStyleProvider * styleProvider;                                           //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) CGRect contentsBounds; 
@property (assign,nonatomic) double contentsCornerRadius; 
@property (assign,nonatomic) bool shouldStealAllEvents; 
@property (assign,nonatomic) double backgroundPatternScaleFactor;                                        //@synthesize backgroundPatternScaleFactor=_backgroundPatternScaleFactor - In the implementation block
@property (assign,nonatomic) int backgroundStyle;                                                        //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign,getter=areSpecialControlsVisible,nonatomic) bool specialControlsVisible;               //@synthesize specialControlsVisible=_specialControlsVisible - In the implementation block
@property (assign,nonatomic) bool backgroundShouldCoverEverything;                                       //@synthesize backgroundShouldCoverEverything=_backgroundShouldCoverEverything - In the implementation block
@property (nonatomic,retain) UIColor * backgroundStripesPatternColor;                                    //@synthesize backgroundStripesPatternColor=_backgroundStripesPatternColor - In the implementation block
@property (nonatomic,retain) UIView * contentsView;                                                      //@synthesize contentsView=_contentsView - In the implementation block
@property (nonatomic,retain) UIView * backgroundContainerView;                                           //@synthesize backgroundContainerView=_backgroundContainerView - In the implementation block
@property (nonatomic,retain) GAXInterestAreaClippedView * backgroundViewCoveringEverything;              //@synthesize backgroundViewCoveringEverything=_backgroundViewCoveringEverything - In the implementation block
@property (nonatomic,retain) GAXInterestAreaFingerPathView * fingerPathView;                             //@synthesize fingerPathView=_fingerPathView - In the implementation block
@property (nonatomic,retain) NSMutableArray * clippedViews;                                              //@synthesize clippedViews=_clippedViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * closeButtons;                                              //@synthesize closeButtons=_closeButtons - In the implementation block
@property (nonatomic,retain) NSMutableArray * resizingKnobButtons;                                       //@synthesize resizingKnobButtons=_resizingKnobButtons - In the implementation block
@property (nonatomic,retain) GAXInterestAreaViewButton * buttonBeingDragged;                             //@synthesize buttonBeingDragged=_buttonBeingDragged - In the implementation block
@property (assign,nonatomic) CGPoint buttonBeingDraggedInitialCenter;                                    //@synthesize buttonBeingDraggedInitialCenter=_buttonBeingDraggedInitialCenter - In the implementation block
@property (assign,nonatomic) unsigned long long indexOfInterestAreaPathBeingDragged;                     //@synthesize indexOfInterestAreaPathBeingDragged=_indexOfInterestAreaPathBeingDragged - In the implementation block
@property (assign,nonatomic) CGRect savedFrame;                                                          //@synthesize savedFrame=_savedFrame - In the implementation block
-(CGRect)contentsBounds;
-(void)_refreshBackgroundStripesPatternColor;
-(void)setSpecialControlsVisible:(bool)arg1 animated:(bool)arg2 ;
-(void)setBackgroundShouldCoverEverything:(bool)arg1 animated:(bool)arg2 ;
-(void)_resetAllSpecialControls;
-(void)_enumerateSpecialControlsUsingBlock:(/*^block*/ id)arg1 ;
-(id)backgroundStripesPatternColor;
-(double)backgroundPatternScaleFactor;
-(void)_ensureBackgroundSizeOfBackgroundViewCoveringEverythingIsSet;
-(id)_interestAreaPathAtIndex:(unsigned long long)arg1 ;
-(void)_insertClippedViewForInterestAreaPathAtIndex:(unsigned long long)arg1 ;
-(id)buttonBeingDragged;
-(unsigned long long)indexOfInterestAreaPathBeingDragged;
-(void)_getClippedViewPropertiesForInterestAreaPathAtIndex:(unsigned long long)arg1 frame:(CGRect*)arg2 constrainedFrame:(CGRect*)arg3 adjustedClippingPath:(id*)arg4 ;
-(id)resizingKnobButtons;
-(unsigned long long)numberOfInterestAreaPathsForInterestAreaFingerPathView:(id)arg1 ;
-(unsigned long long)_numberOfInterestAreaPaths;
-(void)insertInterestAreaPathAtIndex:(unsigned long long)arg1 ;
-(void)setContentsBounds:(CGRect)arg1 ;
-(void)setSavedFrame:(CGRect)arg1 ;
-(id)closeButtons;
-(id)clippedViews;
-(void)setBackgroundContainerView:(id)arg1 ;
-(void)setContentsView:(id)arg1 ;
-(void)setFingerPathView:(id)arg1 ;
-(void)setCloseButtons:(id)arg1 ;
-(void)setResizingKnobButtons:(id)arg1 ;
-(id)backgroundContainerView;
-(void)setIndexOfInterestAreaPathBeingDragged:(unsigned long long)arg1 ;
-(void)setBackgroundPatternScaleFactor:(double)arg1 ;
-(id)backgroundViewCoveringEverything;
-(void)setBackgroundStripesPatternColor:(id)arg1 ;
-(void)setButtonBeingDragged:(id)arg1 ;
-(void)setBackgroundViewCoveringEverything:(id)arg1 ;
-(void)setClippedViews:(id)arg1 ;
-(void)reloadAllInterestAreaPaths;
-(id)contentsView;
-(void)_handlePan:(id)arg1 ;
-(id)fingerPathView;
-(CGRect)savedFrame;
-(void)setBackgroundShouldCoverEverything:(bool)arg1 ;
-(void)setContentsCornerRadius:(double)arg1 ;
-(double)contentsCornerRadius;
-(id)_specialControlButtonAtLocation:(CGPoint)arg1 ;
-(void)setButtonBeingDraggedInitialCenter:(CGPoint)arg1 ;
-(void)_enumerateInterestAreaPathsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(CGPoint)buttonBeingDraggedInitialCenter;
-(void)reloadInterestAreaPathAtIndex:(unsigned long long)arg1 ;
-(id)_specialControlButtonAtLocation:(CGPoint)arg1 passingTest:(/*^block*/ id)arg2 ;
-(CGRect)_constrainedFrameForInsetFrame:(CGRect)arg1 forInterestAreaPathAtIndex:(unsigned long long)arg2 ;
-(bool)_shouldDisableSmartLayoutRelativeToEdgesForInterestAreaPathAtIndex:(unsigned long long)arg1 ;
-(bool)areSpecialControlsVisible;
-(bool)backgroundShouldCoverEverything;
-(double)_scaleFactorForSpecialControls;
-(void)_enumerateSpecialControlPropertiesForInterestAreaPath:(id)arg1 visibleKnobPositions:(unsigned long long)arg2 hasCloseButton:(bool)arg3 usingBlock:(/*^block*/ id)arg4 ;
-(void)_enumerateInterestAreaPathsUsingBlock:(/*^block*/ id)arg1 ;
-(CGPoint)centerForBackgroundOfInterestAreaClippedView:(id)arg1 ;
-(id)interestAreaFingerPathView:(id)arg1 interestAreaPathAtIndex:(unsigned long long)arg2 ;
-(void)deleteInterestAreaPathsAtIndices:(id)arg1 ;
-(void)setSpecialControlsVisible:(bool)arg1 ;
-(void)deleteDynamicInterestAreaPathAtIndices:(id)arg1 ;
-(void)reloadAllAccessoryControls;
-(void)reloadDynamicInterestAreaPathAtIndex:(unsigned long long)arg1 ;
-(void)insertDynamicInterestAreaPathAtIndex:(unsigned long long)arg1 ;
-(void)adjustOutOfBoundsDrawingToCoverView:(id)arg1 edgeInsets:(UIEdgeInsets)arg2 ;
-(void)reloadFrameOfInterestAreaPathAtIndex:(unsigned long long)arg1 ;
-(void)reloadAccessoryControlsForInterestAreaPathAtIndex:(unsigned long long)arg1 ;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(id)dataSource;
-(id)delegate;
-(bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_commonInit;
-(void)willMoveToWindow:(id)arg1 ;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(bool)isAccessibilityElement;
-(void)_handleTap:(id)arg1 ;
-(void)setBackgroundStyle:(int)arg1 ;
-(int)backgroundStyle;
-(void)setBackgroundStyle:(int)arg1 animated:(bool)arg2 ;
@end

