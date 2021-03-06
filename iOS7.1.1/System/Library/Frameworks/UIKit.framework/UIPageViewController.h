/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/_UIQueuingScrollViewDelegate.h>
#import <UIKit/_UIQueuingScrollViewDataSource.h>

@protocol UIPageViewControllerDelegate, UIPageViewControllerDataSource;
@class NSArray, _UIPageCurl, UIPanGestureRecognizer, UITapGestureRecognizer, NSMutableArray, NSMutableDictionary, NSDictionary, _UIPageViewControllerContentView, _UIQueuingScrollView;

@interface UIPageViewController : UIViewController <UIGestureRecognizerDelegate, _UIQueuingScrollViewDelegate, _UIQueuingScrollViewDataSource> {

	<UIPageViewControllerDelegate>* _delegate;
	<UIPageViewControllerDataSource>* _dataSource;
	long long _transitionStyle;
	long long _navigationOrientation;
	long long _spineLocation;
	bool _doubleSided;
	bool _pageControlRequiresValidation;
	NSArray* _viewControllers;
	_UIPageCurl* _pageCurl;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	bool _stashingViewControllersForRotation;
	NSArray* _viewControllersStashedForRotation;
	bool _interfaceRotating;
	NSMutableArray* _rotationSnapshotViews;
	long long _spineLocationPriorToInterfaceRotation;
	UIEdgeInsets _tapRegionInsets;
	CGSize _tapRegionBreadths;
	UIEdgeInsets _effectiveTapRegionInsets;
	CGSize _effectiveTapRegionBreadths;
	CGRect* _tapRegions;
	double _pageSpacing;
	NSMutableDictionary* _cachedViewControllersForCurl;
	NSMutableArray* _cachedViewControllersForScroll;
	NSDictionary* _incomingAndOutgoingViewControllersForManualTransition;
	long long _lastKnownNavigationDirection;
	long long _disableAutorotationCount;
	struct {
		unsigned delegateWantsTransitionWillBegin : 1;
		unsigned delegateWantsTransitionCompleted : 1;
		unsigned delegateWantsTransitionsFinished : 1;
		unsigned delegateCustomizesSpineLocationForInterfaceOrientation : 1;
		unsigned delegateSupportedInterfaceOrientations : 1;
		unsigned delegatePreferredInterfaceOrientationForPresentation : 1;
		unsigned dataSourceSuppliesBeforeViewController : 1;
		unsigned dataSourceSuppliesAfterViewController : 1;
		unsigned dataSourceSuppliesPageCount : 1;
		unsigned dataSourceSuppliesPageNumber : 1;
	}  _delegateFlags;

}

@property (assign,nonatomic) <UIPageViewControllerDelegate> * delegate; 
@property (assign,nonatomic) <UIPageViewControllerDataSource> * dataSource; 
@property (nonatomic,readonly) long long transitionStyle; 
@property (nonatomic,readonly) long long navigationOrientation; 
@property (nonatomic,readonly) long long spineLocation; 
@property (assign,getter=isDoubleSided,nonatomic) bool doubleSided; 
@property (nonatomic,readonly) NSArray * gestureRecognizers; 
@property (nonatomic,readonly) NSArray * viewControllers; 
@property (nonatomic,readonly) long long _transitionStyle; 
@property (nonatomic,readonly) long long _navigationOrientation; 
@property (setter=_setViewControllers:,nonatomic,retain) NSArray * _viewControllers;                                                  //@synthesize viewControllers=_viewControllers - In the implementation block
@property (setter=_setViewControllersStashedForRotation:,nonatomic,retain) NSArray * _viewControllersStashedForRotation;              //@synthesize viewControllersStashedForRotation=_viewControllersStashedForRotation - In the implementation block
@property (getter=_isPageControlVisible,nonatomic,readonly) bool _pageControlVisible; 
@property (nonatomic,readonly) _UIPageViewControllerContentView * _contentView; 
@property (nonatomic,readonly) _UIQueuingScrollView * _scrollView; 
@property (assign,setter=_setPageSpacing:,nonatomic) double _pageSpacing; 
@property (getter=_isInterfaceRotating,nonatomic,readonly) bool _interfaceRotating;                                                   //@synthesize interfaceRotating=_interfaceRotating - In the implementation block
+(bool)doesOverrideSupportedInterfaceOrientations;
+(bool)doesOverridePreferredInterfaceOrientationForPresentation;
+(bool)_isSupportedTransitionStyle:(long long)arg1 ;
+(bool)_isNavigationOrientation:(long long)arg1 supportedForTransitionStyle:(long long)arg2 ;
+(bool)_isSpineLocation:(long long)arg1 supportedForTransitionStyle:(long long)arg2 ;
+(id)stringForSpineLocation:(long long)arg1 ;
+(id)_outgoingViewControllerKeys;
+(id)_incomingViewControllerKeys;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)_contentView;
-(id)dataSource;
-(id)delegate;
-(long long)transitionStyle;
-(long long)_transitionStyle;
-(id)gestureRecognizers;
-(unsigned long long)supportedInterfaceOrientations;
-(bool)_gestureRecognizerShouldBegin:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(bool)arg1 ;
-(bool)_shouldPersistViewWhenCoding;
-(void)viewWillUnload;
-(bool)shouldAutomaticallyForwardRotationMethods;
-(bool)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(bool)_shouldSynthesizeSupportedOrientations;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)_beginDisablingInterfaceAutorotation;
-(void)_endDisablingInterfaceAutorotation;
-(id)viewControllers;
-(id)_scrollView;
-(id)_pageControl;
-(id)_viewControllers;
-(double)_pageSpacing;
-(bool)_isPageControlVisible;
-(long long)navigationOrientation;
-(void)_contentViewFrameOrBoundsDidChange;
-(void)_pageControlValueChanged:(id)arg1 ;
-(void)_updatePageControlViaDataSourceIfNecessary;
-(void)_setSpineLocation:(long long)arg1 ;
-(void)_setPageSpacing:(double)arg1 ;
-(id)initWithTransitionStyle:(long long)arg1 navigationOrientation:(long long)arg2 options:(id)arg3 ;
-(void)_handlePanGesture:(id)arg1 ;
-(void)_handleTapGesture:(id)arg1 ;
-(bool)_canHandleGestures;
-(long long)_navigationOrientation;
-(UIEdgeInsets)_effectiveTapRegionInsets;
-(void)_invalidateEffectiveTapRegions;
-(CGSize)_effectiveTapRegionBreadths;
-(void)_setViewControllers:(id)arg1 withCurlOfType:(long long)arg2 fromLocation:(CGPoint)arg3 direction:(long long)arg4 animated:(bool)arg5 notifyDelegate:(bool)arg6 completion:(/*^block*/ id)arg7 ;
-(void)_setViewControllers:(id)arg1 withScrollInDirection:(long long)arg2 animated:(bool)arg3 completion:(/*^block*/ id)arg4 ;
-(bool)_child:(id)arg1 canBeginAppearanceTransition:(bool)arg2 ;
-(void)_child:(id)arg1 beginAppearanceTransition:(bool)arg2 animated:(bool)arg3 ;
-(void)_child:(id)arg1 beginAppearanceTransitionIfPossible:(bool)arg2 animated:(bool)arg3 ;
-(bool)_childCanEndAppearanceTransition:(id)arg1 ;
-(void)_childEndAppearanceTransition:(id)arg1 ;
-(void)_child:(id)arg1 endAppearanceTransitionIfPossible:(bool)arg2 ;
-(long long)_requestSpineLocationForInterfaceOrientationAndUpdateStashedViewControllers:(long long)arg1 ;
-(void)_invalidatePageCurl;
-(void)_setViewControllersStashedForRotation:(id)arg1 ;
-(void)_sendChildViewWill:(bool)arg1 appear:(bool)arg2 animated:(bool)arg3 ;
-(NSRange)_validRangeForPresentationOfViewControllersWithSpineLocation:(long long)arg1 ;
-(id)_validatedViewControllersForPresentationOfViewControllers:(id)arg1 validRange:(NSRange)arg2 ;
-(id)_viewControllersForPendingSpineLocation:(long long)arg1 ;
-(void)_child:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3 ;
-(void)_child:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3 ;
-(void)_child:(id)arg1 didRotateFromInterfaceOrientation:(long long)arg2 ;
-(id)_viewControllerBefore:(bool)arg1 viewController:(id)arg2 ;
-(bool)_isCurrentViewControllerStateValid;
-(id)_validatedViewControllersForTransitionWithViewControllers:(id)arg1 animated:(bool)arg2 ;
-(void)_populateOutgoingViewControllersInMap:(id)arg1 ;
-(void)_populateIncomingViewControllersInMap:(id)arg1 withViewControllers:(id)arg2 forCurlInDirection:(long long)arg3 ;
-(void)_setViewControllers:(id)arg1 ;
-(id)_viewControllersForCurlWithViewControllers:(id)arg1 direction:(long long)arg2 ;
-(void)_invalidateViewControllersStashedForCurlFromDataSource;
-(void)_cacheViewControllerForScroll:(id)arg1 ;
-(id)_viewControllerAfterViewController:(id)arg1 ;
-(id)_viewControllerBeforeViewController:(id)arg1 ;
-(CGRect*)_tapRegions;
-(bool)_shouldNavigateInDirection:(long long*)arg1 inResponseToVelocity:(double*)arg2 ofGestureRecognizedByPanGestureRecognizer:(id)arg3 ;
-(bool)_shouldNavigateInDirection:(long long*)arg1 inResponseToTapGestureRecognizer:(id)arg2 ;
-(bool)_shouldBeginNavigationInDirection:(long long*)arg1 inResponseToPanGestureRecognizer:(id)arg2 ;
-(id)_incomingViewControllersForGestureDrivenCurlInDirection:(long long)arg1 ;
-(long long)_navigationEndDirectionInResponseToPanGestureRecognizer:(id)arg1 suggestedVelocity:(double*)arg2 ;
-(bool)_shouldCompleteManualCurlWithSuggestedVelocity:(double*)arg1 ;
-(id)_queuingScrollView:(id)arg1 viewBefore:(bool)arg2 view:(id)arg3 ;
-(void)_flushViewController:(id)arg1 animated:(bool)arg2 ;
-(void)queuingScrollView:(id)arg1 willManuallyScroll:(bool)arg2 toRevealView:(id)arg3 concealView:(id)arg4 animated:(bool)arg5 ;
-(void)queuingScrollView:(id)arg1 didCommitManualScroll:(bool)arg2 toRevealView:(id)arg3 concealView:(id)arg4 direction:(long long)arg5 animated:(bool)arg6 canComplete:(bool)arg7 ;
-(void)queuingScrollView:(id)arg1 didEndManualScroll:(bool)arg2 toRevealView:(id)arg3 direction:(long long)arg4 animated:(bool)arg5 didFinish:(bool)arg6 didComplete:(bool)arg7 ;
-(void)queuingScrollView:(id)arg1 didBailoutOfScrollAndRevealedView:(id)arg2 ;
-(void)queuingScrollViewDidFinishScrolling:(id)arg1 ;
-(bool)queuingScrollViewShouldLayoutSubviews:(id)arg1 ;
-(id)queuingScrollView:(id)arg1 viewBeforeView:(id)arg2 ;
-(id)queuingScrollView:(id)arg1 viewAfterView:(id)arg2 ;
-(void)queuingScrollView:(id)arg1 didFlushView:(id)arg2 animated:(bool)arg3 ;
-(long long)spineLocation;
-(bool)isDoubleSided;
-(void)setDoubleSided:(bool)arg1 ;
-(UIEdgeInsets)_tapRegionInsets;
-(void)_setTapRegionInsets:(UIEdgeInsets)arg1 ;
-(CGSize)_tapRegionBreadths;
-(void)_setTapRegionBreadths:(CGSize)arg1 ;
-(CGRect)_disabledScrollingRegion;
-(void)_setDisabledScrollingRegion:(CGRect)arg1 ;
-(CGSize)_contentSizeForSize:(CGSize)arg1 ;
-(void)setViewControllers:(id)arg1 direction:(long long)arg2 animated:(bool)arg3 completion:(/*^block*/ id)arg4 ;
-(id)_viewControllersStashedForRotation;
-(bool)_isInterfaceRotating;
@end

