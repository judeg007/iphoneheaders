/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <PhotosUI/PUFeedCollectionViewLayoutDelegate.h>
#import <PhotosUI/PUFeedSectionInfosManagerDelegate.h>
#import <PhotosUI/PUPhotoBrowserZoomTransitionDelegate.h>
#import <PhotosUI/PUFeedImageCellDelegate.h>
#import <PhotosUI/PUFeedTextCellDelegate.h>
#import <PhotosUI/PUFeedInvitationCellDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <PhotosUI/PUAlbumStreamActivityDelegate.h>
#import <UIKit/_UISettingsKeyObserver.h>
#import <PhotosUI/PUScrollViewSpeedometerDelegate.h>
#import <PhotoLibrary/PLCloudFeedNavigating.h>
#import <PhotosUI/PLNavigableCloudFeedViewController.h>

@class PUFeedViewControllerSpec, PUFeedSectionInfosManager, PUImageManager, PUFeedPreheatManager, PLDateRangeFormatter, UICollectionView, PUScrollViewSpeedometer, PUFeedViewControllerRestorableState, UITapGestureRecognizer, UIBarButtonItem, UIPopoverController, NSIndexPath, PUPhotoPinchGestureRecognizer, PLManagedAlbumList, PLCloudSharedAlbum, UIViewController, PUPhotosPickerViewController, _UIContentUnavailableView, PUAlbumStreamActivity, PLManagedAsset, PLCloudSharedComment, PUFeedAssetContainerList, NSDictionary, NSMutableSet;

@interface PUFeedViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, PUFeedCollectionViewLayoutDelegate, PUFeedSectionInfosManagerDelegate, PUPhotoBrowserZoomTransitionDelegate, PUFeedImageCellDelegate, PUFeedTextCellDelegate, PUFeedInvitationCellDelegate, UIGestureRecognizerDelegate, PUAlbumStreamActivityDelegate, _UISettingsKeyObserver, PUScrollViewSpeedometerDelegate, PLCloudFeedNavigating, PLNavigableCloudFeedViewController> {

	bool __flowDirectionReversed;
	bool __collectionViewScrolledToNewest;
	bool __shouldSuspendQualityImageFormats;
	bool __viewDidAppear;
	bool __viewsInSyncWithModel;
	bool __appJustEnteredForeground;
	bool __userDidDismissPlaceholder;
	bool __interfaceBatchUpdateScheduled;
	bool __invitationsPopoverShowPending;
	bool __libraryUpdatingPreviouslyExpired;
	PUFeedViewControllerSpec* _spec;
	long long _contentType;
	PUFeedSectionInfosManager* __feedSectionInfosManager;
	PUImageManager* __imageManager;
	PUFeedPreheatManager* __preheatManager;
	PLDateRangeFormatter* __dateRangeFormatter;
	UICollectionView* __portraitCollectionView;
	UICollectionView* __landscapeCollectionView;
	PUScrollViewSpeedometer* __collectionViewSpeedometer;
	long long __rotationState;
	long long __rotationSourceInterfaceOrientation;
	long long __rotationTargetInterfaceOrientation;
	PUFeedViewControllerRestorableState* __rotationLastRestorableState;
	long long __barsState;
	long long __loadedSectionInfosWindowSize;
	UITapGestureRecognizer* __tapGestureRecognizer;
	UIBarButtonItem* __invitationsBarButtonItem;
	UIPopoverController* __invitationsPopoverController;
	NSIndexPath* __indexPathForImageHiddenDuringZoomTransition;
	PUPhotoPinchGestureRecognizer* __pinchGestureRecognizer;
	UICollectionView* __pinchedCollectionView;
	PLManagedAlbumList* __sharedAlbumList;
	PLCloudSharedAlbum* __pushedAlbum;
	UIViewController* __pushedViewController;
	PUPhotosPickerViewController* __presentedPhotosPickerViewController;
	_UIContentUnavailableView* __emptyPlaceholderView;
	PUAlbumStreamActivity* __albumStreamActivity;
	PLManagedAsset* __browsingSelectedAsset;
	PLCloudSharedComment* __browsingSelectedComment;
	PUFeedAssetContainerList* __browsingAssetContainerList;
	NSDictionary* __justLikedSections;
	NSMutableSet* __sectionInfosWithCommentChanges;
	NSMutableSet* __updatedAssets;
	double __preheatingWindowSize;
	CGPoint __lastPreheatedContentOffset;

}

@property (nonatomic,readonly) PUFeedViewControllerSpec * spec;                                                                                                           //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) long long contentType;                                                                                                                     //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) PUFeedSectionInfosManager * _feedSectionInfosManager;                                                                                      //@synthesize _feedSectionInfosManager=__feedSectionInfosManager - In the implementation block
@property (nonatomic,readonly) PUImageManager * _imageManager;                                                                                                            //@synthesize _imageManager=__imageManager - In the implementation block
@property (nonatomic,readonly) PUFeedPreheatManager * _preheatManager;                                                                                                    //@synthesize _preheatManager=__preheatManager - In the implementation block
@property (nonatomic,readonly) PLDateRangeFormatter * _dateRangeFormatter;                                                                                                //@synthesize _dateRangeFormatter=__dateRangeFormatter - In the implementation block
@property (setter=_setPortraitCollectionView:,nonatomic,retain) UICollectionView * _portraitCollectionView;                                                               //@synthesize _portraitCollectionView=__portraitCollectionView - In the implementation block
@property (setter=_setLandscapeCollectionView:,nonatomic,retain) UICollectionView * _landscapeCollectionView;                                                             //@synthesize _landscapeCollectionView=__landscapeCollectionView - In the implementation block
@property (assign,setter=_setFlowDirectionReversed:,getter=_isFlowDirectionReversed,nonatomic) bool _flowDirectionReversed;                                               //@synthesize _flowDirectionReversed=__flowDirectionReversed - In the implementation block
@property (setter=_setCollectionViewSpeedometer:,nonatomic,retain) PUScrollViewSpeedometer * _collectionViewSpeedometer;                                                  //@synthesize _collectionViewSpeedometer=__collectionViewSpeedometer - In the implementation block
@property (assign,setter=_setCollectionViewScrolledToNewest:,getter=_isCollectionViewScrolledToNewest,nonatomic) bool _collectionViewScrolledToNewest;                    //@synthesize _collectionViewScrolledToNewest=__collectionViewScrolledToNewest - In the implementation block
@property (assign,setter=_setShouldSuspendQualityImageFormats:,nonatomic) bool _shouldSuspendQualityImageFormats;                                                         //@synthesize _shouldSuspendQualityImageFormats=__shouldSuspendQualityImageFormats - In the implementation block
@property (assign,setter=_setViewDidAppear:,nonatomic) bool _viewDidAppear;                                                                                               //@synthesize _viewDidAppear=__viewDidAppear - In the implementation block
@property (assign,setter=_setRotationState:,nonatomic) long long _rotationState;                                                                                          //@synthesize _rotationState=__rotationState - In the implementation block
@property (assign,setter=_setRotationSourceInterfaceOrientation:,nonatomic) long long _rotationSourceInterfaceOrientation;                                                //@synthesize _rotationSourceInterfaceOrientation=__rotationSourceInterfaceOrientation - In the implementation block
@property (assign,setter=_setRotationTargetInterfaceOrientation:,nonatomic) long long _rotationTargetInterfaceOrientation;                                                //@synthesize _rotationTargetInterfaceOrientation=__rotationTargetInterfaceOrientation - In the implementation block
@property (setter=_setRotationLastRestorableState:,nonatomic,retain) PUFeedViewControllerRestorableState * _rotationLastRestorableState;                                  //@synthesize _rotationLastRestorableState=__rotationLastRestorableState - In the implementation block
@property (assign,setter=_setBarsState:,nonatomic) long long _barsState;                                                                                                  //@synthesize _barsState=__barsState - In the implementation block
@property (assign,setter=_setLoadedSectionInfosWindowSize:,nonatomic) long long _loadedSectionInfosWindowSize;                                                            //@synthesize _loadedSectionInfosWindowSize=__loadedSectionInfosWindowSize - In the implementation block
@property (assign,setter=_setViewsInSyncWithModel:,getter=_areViewsInSyncWithModel,nonatomic) bool _viewsInSyncWithModel;                                                 //@synthesize _viewsInSyncWithModel=__viewsInSyncWithModel - In the implementation block
@property (setter=_setTapGestureRecognizer:,nonatomic,retain) UITapGestureRecognizer * _tapGestureRecognizer;                                                             //@synthesize _tapGestureRecognizer=__tapGestureRecognizer - In the implementation block
@property (setter=_setInvitationsBarButtonItem:,nonatomic,retain) UIBarButtonItem * _invitationsBarButtonItem;                                                            //@synthesize _invitationsBarButtonItem=__invitationsBarButtonItem - In the implementation block
@property (setter=_setInvitationsPopoverController:,nonatomic,retain) UIPopoverController * _invitationsPopoverController;                                                //@synthesize _invitationsPopoverController=__invitationsPopoverController - In the implementation block
@property (assign,setter=_setLastPreheatedContentOffset:,nonatomic) CGPoint _lastPreheatedContentOffset;                                                                  //@synthesize _lastPreheatedContentOffset=__lastPreheatedContentOffset - In the implementation block
@property (setter=_setIndexPathForImageHiddenDuringZoomTransition:,nonatomic,copy) NSIndexPath * _indexPathForImageHiddenDuringZoomTransition;                            //@synthesize _indexPathForImageHiddenDuringZoomTransition=__indexPathForImageHiddenDuringZoomTransition - In the implementation block
@property (setter=_setPinchGestureRecognizer:,nonatomic,retain) PUPhotoPinchGestureRecognizer * _pinchGestureRecognizer;                                                  //@synthesize _pinchGestureRecognizer=__pinchGestureRecognizer - In the implementation block
@property (setter=_setPinchedCollectionView:,nonatomic,retain) UICollectionView * _pinchedCollectionView;                                                                 //@synthesize _pinchedCollectionView=__pinchedCollectionView - In the implementation block
@property (nonatomic,readonly) PLManagedAlbumList * _sharedAlbumList;                                                                                                     //@synthesize _sharedAlbumList=__sharedAlbumList - In the implementation block
@property (setter=_setPushedAlbum:,nonatomic,retain) PLCloudSharedAlbum * _pushedAlbum;                                                                                   //@synthesize _pushedAlbum=__pushedAlbum - In the implementation block
@property (setter=_setPushedViewController:,nonatomic,retain) UIViewController * _pushedViewController;                                                                   //@synthesize _pushedViewController=__pushedViewController - In the implementation block
@property (setter=_setPresentedPhotosPickerViewController:,nonatomic,retain) PUPhotosPickerViewController * _presentedPhotosPickerViewController;                         //@synthesize _presentedPhotosPickerViewController=__presentedPhotosPickerViewController - In the implementation block
@property (assign,setter=_setAppJustEnteredForeground:,nonatomic) bool _appJustEnteredForeground;                                                                         //@synthesize _appJustEnteredForeground=__appJustEnteredForeground - In the implementation block
@property (setter=_setEmptyPlaceholderView:,nonatomic,retain) _UIContentUnavailableView * _emptyPlaceholderView;                                                          //@synthesize _emptyPlaceholderView=__emptyPlaceholderView - In the implementation block
@property (assign,setter=_setUserDidDismissPlaceholder:,nonatomic) bool _userDidDismissPlaceholder;                                                                       //@synthesize _userDidDismissPlaceholder=__userDidDismissPlaceholder - In the implementation block
@property (setter=_setAlbumStreamActivity:,nonatomic,retain) PUAlbumStreamActivity * _albumStreamActivity;                                                                //@synthesize _albumStreamActivity=__albumStreamActivity - In the implementation block
@property (setter=_setBrowsingSelectedAsset:,nonatomic,retain) PLManagedAsset * _browsingSelectedAsset;                                                                   //@synthesize _browsingSelectedAsset=__browsingSelectedAsset - In the implementation block
@property (setter=_setBrowsingSelectedComment:,nonatomic,retain) PLCloudSharedComment * _browsingSelectedComment;                                                         //@synthesize _browsingSelectedComment=__browsingSelectedComment - In the implementation block
@property (setter=_setBrowsingAssetContainerList:,nonatomic,retain) PUFeedAssetContainerList * _browsingAssetContainerList;                                               //@synthesize _browsingAssetContainerList=__browsingAssetContainerList - In the implementation block
@property (setter=_setJustLikedSections:,nonatomic,retain) NSDictionary * _justLikedSections;                                                                             //@synthesize _justLikedSections=__justLikedSections - In the implementation block
@property (assign,setter=_setInterfaceBatchUpdateScheduled:,getter=_isInterfaceBatchUpdateScheduled,nonatomic) bool _interfaceBatchUpdateScheduled;                       //@synthesize _interfaceBatchUpdateScheduled=__interfaceBatchUpdateScheduled - In the implementation block
@property (setter=_setSectionInfosWithCommentChanges:,nonatomic,retain) NSMutableSet * _sectionInfosWithCommentChanges;                                                   //@synthesize _sectionInfosWithCommentChanges=__sectionInfosWithCommentChanges - In the implementation block
@property (setter=_setUpdatedAssets:,nonatomic,retain) NSMutableSet * _updatedAssets;                                                                                     //@synthesize _updatedAssets=__updatedAssets - In the implementation block
@property (assign,setter=_setInvitationsPopoverShowPending:,getter=_isInvitationsPopoverShowPending,nonatomic) bool _invitationsPopoverShowPending;                       //@synthesize _invitationsPopoverShowPending=__invitationsPopoverShowPending - In the implementation block
@property (assign,setter=_setLibraryUpdatingPreviouslyExpired:,getter=_isLibraryUpdatingPreviouslyExpired,nonatomic) bool _libraryUpdatingPreviouslyExpired;              //@synthesize _libraryUpdatingPreviouslyExpired=__libraryUpdatingPreviouslyExpired - In the implementation block
@property (assign,setter=_setPreheatingWindowSize:,nonatomic) double _preheatingWindowSize;                                                                               //@synthesize _preheatingWindowSize=__preheatingWindowSize - In the implementation block
+(void)initialize;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(bool)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(bool)gestureRecognizerShouldBegin:(id)arg1 ;
-(bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(bool)shouldAutorotate;
-(bool)canBecomeFirstResponder;
-(bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)viewWillAppear:(bool)arg1 ;
-(id)contentScrollView;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void).cxx_destruct;
-(void)_handleTap:(id)arg1 ;
-(long long)contentType;
-(void)_appDidEnterBackground:(id)arg1 ;
-(void)assetContainerListDidChange:(id)arg1 ;
-(id)_tapGestureRecognizer;
-(void)_setTapGestureRecognizer:(id)arg1 ;
-(bool)zoomTransition:(id)arg1 getFrame:(CGRect*)arg2 contentMode:(long long*)arg3 forPhotoToken:(id)arg4 operation:(long long)arg5 ;
-(bool)pu_shouldActAsTabRootViewController;
-(bool)prepareForDismissingForced:(bool)arg1 ;
-(void)_updateEmptyPlaceholderAnimated:(bool)arg1 ;
-(id)_emptyPlaceholderView;
-(void)_setEmptyPlaceholderView:(id)arg1 ;
-(bool)pu_wantsToolbarVisible;
-(bool)pu_wantsTabBarVisible;
-(id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3 ;
-(void)zoomTransition:(id)arg1 setVisibility:(bool)arg2 forPhotoToken:(id)arg3 ;
-(void)zoomTransition:(id)arg1 willBeginForOperation:(long long)arg2 animated:(bool)arg3 interactive:(bool)arg4 ;
-(void)zoomTransition:(id)arg1 didFinishForOperation:(long long)arg2 animated:(bool)arg3 interactive:(bool)arg4 ;
-(bool)pu_handleSecondTabTap;
-(id)spec;
-(void)_dateRangeFormatterChanged:(id)arg1 ;
-(void)navigateToRevealCloudFeedAsset:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)navigateToCloudFeedAsset:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)navigateToRevealCloudFeedComment:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)navigateToCloudFeedComment:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)navigateToRevealCloudFeedInvitationForAlbum:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(bool)cloudFeedAssetIsAvailableForNavigation:(id)arg1 ;
-(bool)cloudFeedCommentIsAvailableForNavigation:(id)arg1 ;
-(bool)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg1 ;
-(void)feedInvitationCell:(id)arg1 didAccept:(bool)arg2 ;
-(void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(long long)arg2 from:(long long)arg3 ;
-(bool)pu_wantsStatusBarVisible;
-(bool)pu_wantsNavigationBarVisible;
-(void)_updatePeripheralInterfaceAnimated:(bool)arg1 ;
-(id)_imageManager;
-(void)_updateInterfaceForModelReloadAnimated:(bool)arg1 ;
-(bool)zoomTransition:(id)arg1 transitionImageForPhotoToken:(id)arg2 callback:(/*^block*/ id)arg3 ;
-(void)didTapFeedCell:(id)arg1 ;
-(void)navigateToNewestContentAnimated:(bool)arg1 ;
-(id)_preheatManager;
-(bool)_appAllowsSupressionOfAlerts;
-(id)_suppressionContexts;
-(void)_appWillEnterForeground:(id)arg1 ;
-(id)_dateRangeFormatter;
-(void)_setPreheatingWindowSize:(double)arg1 ;
-(void)_updateWindowOfLoadedSectionInfos;
-(void)_setViewsInSyncWithModel:(bool)arg1 ;
-(id)_pinchGestureRecognizer;
-(void)_handlePinch:(id)arg1 ;
-(void)_setPinchGestureRecognizer:(id)arg1 ;
-(void)_setPushedAlbum:(id)arg1 ;
-(void)_setPushedViewController:(id)arg1 ;
-(void)_tearDownBrowsing;
-(bool)_areViewsInSyncWithModel;
-(void)_updateCollectionViews;
-(bool)_shouldShowBarsForInterfaceOrientation:(long long)arg1 ;
-(void)_setBarsState:(long long)arg1 ;
-(void)_userDidViewFeed;
-(long long)_currentInterfaceOrientation;
-(id)_collectionViewForInterfaceOrientation:(long long)arg1 ;
-(void)_invalidateLastPreheatedContentOffset;
-(void)_updatePreheatedAssetsForCollectionView:(id)arg1 ;
-(long long)_barsState;
-(void)_scheduleBarsAutoHide;
-(bool)_isInvitationsPopoverShowPending;
-(void)_showInvitationsPopoverAnimated:(bool)arg1 ;
-(void)_setViewDidAppear:(bool)arg1 ;
-(void)_cancelBarsAutoHide;
-(void)_appDidFinishEnteringForeground;
-(id)_invitationsPopoverController;
-(void)_setRotationState:(long long)arg1 ;
-(void)_setRotationSourceInterfaceOrientation:(long long)arg1 ;
-(void)_setRotationTargetInterfaceOrientation:(long long)arg1 ;
-(id)_rotationLastRestorableState;
-(id)_currentRestorableState;
-(void)_setRotationLastRestorableState:(id)arg1 ;
-(void)_restoreScrollPositionInCollectionViewForInterfaceOrientation:(long long)arg1 fromRestorableState:(id)arg2 ;
-(void)_updateNavigationItemAnimated:(bool)arg1 ;
-(id)_portraitCollectionView;
-(id)_landscapeCollectionView;
-(id)_collectionViews;
-(id)_feedSectionInfosManager;
-(id)_sectionInfoForSection:(long long)arg1 collectionView:(id)arg2 ;
-(long long)_typeForCollectionView:(id)arg1 ;
-(id)_indexPathForImageHiddenDuringZoomTransition;
-(id)_sectionInfosForSections:(id)arg1 collectionView:(id)arg2 ;
-(id)_justLikedSections;
-(void)_getDescriptionPhrase:(out id*)arg1 streamAffordanceLabel:(out id*)arg2 actionText:(out id*)arg3 buttonType:(long long*)arg4 forSections:(id)arg5 inCollectionView:(id)arg6 ;
-(id)_dateForSectionWithInfo:(id)arg1 ;
-(id)_textForDate:(id)arg1 ;
-(bool)_appJustEnteredForeground;
-(void)_setAppJustEnteredForeground:(bool)arg1 ;
-(void)_contextDidFinishRemoteMerge:(id)arg1 ;
-(double)_preheatingWindowSize;
-(id)_assetForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_setLastPreheatedContentOffset:(CGPoint)arg1 ;
-(bool)_areSharedStreamsEnabled;
-(id)_sharedAlbumList;
-(void)_setLibraryUpdatingPreviouslyExpired:(bool)arg1 ;
-(bool)_isLibraryUpdatingPreviouslyExpired;
-(bool)_isLibraryUpdatingTimeoutExpired;
-(bool)_shouldShowTransitionUI;
-(bool)_userDidDismissPlaceholder;
-(bool)_shouldHideSectionWithType:(long long)arg1 inCollectionViewType:(long long)arg2 ;
-(bool)_isCollectionViewEmptyForInterfaceOrientation:(long long)arg1 ;
-(void)_setupBrowsingFromAsset:(id)arg1 orComment:(id)arg2 ;
-(void)_setBrowsingSelectedAsset:(id)arg1 ;
-(void)_setBrowsingSelectedComment:(id)arg1 ;
-(void)_updateBrowsingAssetContainerList;
-(void)_setBrowsingAssetContainerList:(id)arg1 ;
-(long long)_browsingSelectedSection;
-(void)_ensureWindowOfLoadedSectionInfosIncludesSection:(long long)arg1 ;
-(id)_sectionInfosForBrowsingFromSectionInfo:(id)arg1 ;
-(id)_browsingAssetContainerList;
-(id)_pushedViewController;
-(id)_browsingSelectedComment;
-(id)_browsingSelectedAsset;
-(long long)_loadedSectionInfosWindowSize;
-(bool)_isFlowDirectionReversed;
-(void)_setLoadedSectionInfosWindowSize:(long long)arg1 ;
-(void)_preheatSectionInfosAtIndexes:(id)arg1 ;
-(long long)_rotationState;
-(long long)_rotationTargetInterfaceOrientation;
-(void)_setFlowDirectionReversed:(bool)arg1 ;
-(void)_configureCollectionView:(id)arg1 ;
-(void)_setPortraitCollectionView:(id)arg1 ;
-(void)_updateSubviewsOrdering;
-(void)_setLandscapeCollectionView:(id)arg1 ;
-(id)_collectionViewSpeedometer;
-(void)_configureSpeedometer:(id)arg1 ;
-(void)_setCollectionViewSpeedometer:(id)arg1 ;
-(bool)_isAnySharedAlbumAvailable;
-(id)_invitationsBarButtonItem;
-(void)_invitationsButtonAction:(id)arg1 ;
-(void)_setInvitationsBarButtonItem:(id)arg1 ;
-(long long)_placeholderTypeForInterfaceOrientation:(long long)arg1 ;
-(void)_setUserDidDismissPlaceholder:(bool)arg1 ;
-(long long)_rotationSourceInterfaceOrientation;
-(void)_handlePlaceholderAction;
-(void)_autoHideBarsNow;
-(long long)_numberOfSectionInfosForCollectionView:(id)arg1 ;
-(void)_configureImageCell:(id)arg1 forAssetAtIndexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_configureTextCell:(id)arg1 forCommentAtIndexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_configureTextCell:(id)arg1 forLikesAtIndexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_configureTextCell:(id)arg1 forTextAtIndexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_configureInvitationCell:(id)arg1 forInvitationAtIndexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_configureImageCell:(id)arg1 forThumbnailAtIndexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_configureStackCell:(id)arg1 forThumbnailsAtIndexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_configureTextCell:(id)arg1 forCaptionAtIndexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_configureTextCell:(id)arg1 forHeaderOfSections:(id)arg2 inCollectionView:(id)arg3 animated:(bool)arg4 ;
-(bool)_configureTextCell:(id)arg1 forFooterOfSection:(long long)arg2 inCollectionView:(id)arg3 ;
-(id)_groupIDForSectionWithInfo:(id)arg1 ;
-(void)_configureTextCell:(id)arg1 forHeaderOfGroupID:(id)arg2 inCollectionView:(id)arg3 ;
-(bool)_setupBrowsingFromItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_getPhotoBrowserController:(out id*)arg1 transition:(out id*)arg2 withOptions:(long long)arg3 ;
-(bool)_shouldHideSectionInfo:(id)arg1 forCollectionView:(id)arg2 ;
-(long long)_typeForSectionInfo:(id)arg1 ;
-(bool)_shouldJoinSectionInfo:(id)arg1 withSectionInfo:(id)arg2 collectionViewType:(long long)arg3 ;
-(bool)_shouldHideHeaderForSectionWithType:(long long)arg1 ;
-(bool)_viewDidAppear;
-(bool)_isCollectionViewScrolledToNewest;
-(void)_setCollectionViewScrolledToNewest:(bool)arg1 ;
-(void)_expandWindowOfLoadedSectionInfos;
-(CGPoint)_lastPreheatedContentOffset;
-(void)_userDidScrollFeed;
-(void)_updateInterfaceForDeletedSections:(id)arg1 insertedSections:(id)arg2 updatedSections:(id)arg3 ;
-(void)_scheduleInterfaceUpdateForSectionInfosWithCommentChanges:(id)arg1 updatedAssets:(id)arg2 ;
-(id)_sectionInfosWithCommentChanges;
-(void)_setSectionInfosWithCommentChanges:(id)arg1 ;
-(id)_updatedAssets;
-(void)_setUpdatedAssets:(id)arg1 ;
-(bool)_isInterfaceBatchUpdateScheduled;
-(void)_setInterfaceBatchUpdateScheduled:(bool)arg1 ;
-(void)_performInterfaceBatchUpdateNow;
-(void)_updateSectionsWithCaptionChangesFromUpdatedAssets:(id)arg1 ;
-(id)_pushedAlbum;
-(void)_setIndexPathForImageHiddenDuringZoomTransition:(id)arg1 ;
-(id)_pinchedCollectionView;
-(id)_loadedSectionInfoForCloudFeedEntry:(id)arg1 ;
-(void)_navigateToRevealAsset:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(bool)_navigateToRevealComment:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_navigateToSectionInfo:(id)arg1 atItemIndex:(long long)arg2 completion:(/*^block*/ id)arg3 ;
-(id)collectionViewForCurrentInterfaceOrientation;
-(id)_presentedPhotosPickerViewController;
-(void)_setPresentedPhotosPickerViewController:(id)arg1 ;
-(void)_didTapThumbnailOrOverlayPlayButtonInFeedCell:(id)arg1 ;
-(void)_didTapSectionHeaderFeedCell:(id)arg1 ;
-(void)_didTapSectionFooterFeedCell:(id)arg1 ;
-(id)_collectionViewContainingView:(id)arg1 ;
-(void)_navigateToRevealPhoto:(id)arg1 inAlbum:(NSObject*)arg2 animated:(bool)arg3 ;
-(void)_setJustLikedSections:(id)arg1 ;
-(void)_setUserCloudSharedLiked:(bool)arg1 forItemsInSections:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_showOutOfNetworkInvitationMessageForSharedAlbum:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(long long)_defaultMaximumScrollRegimeForQualityImageFormats;
-(bool)_shouldSuspendQualityImageFormats;
-(void)_setShouldSuspendQualityImageFormats:(bool)arg1 ;
-(id)_indexPathForItemWithAsset:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_enumerateCenterAssetsInRestorableState:(id)arg1 inCollectionView:(id)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(void)_openiCloudSettings;
-(bool)_beginInteractiveNavigationForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_setPinchedCollectionView:(id)arg1 ;
-(void)_setInvitationsPopoverShowPending:(bool)arg1 ;
-(id)initWithSpec:(id)arg1 contentType:(long long)arg2 ;
-(void)_setInvitationsPopoverController:(id)arg1 ;
-(void)_createNewStream;
-(void)_setAlbumStreamActivity:(id)arg1 ;
-(bool)collectionView:(id)arg1 layout:(id)arg2 shouldHideSection:(long long)arg3 ;
-(long long)collectionView:(id)arg1 layout:(id)arg2 typeForSection:(long long)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 contentInsetsForSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 imageSizeForTileAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 mininumSizeForTileAtIndexPath:(id)arg3 ;
-(bool)collectionView:(id)arg1 layout:(id)arg2 shouldShowCaptionForTileAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 captionSizeForTileAtIndexPath:(id)arg3 proposedSize:(CGSize)arg4 ;
-(id)collectionView:(id)arg1 layout:(id)arg2 batchIDForTileAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 layout:(id)arg2 referenceMaximumLength:(double*)arg3 minimumNumberOfTilesToOmit:(long long*)arg4 forSection:(long long)arg5 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForRowAtIndexPath:(id)arg3 proposedSize:(CGSize)arg4 ;
-(PUFeedSeparatorMetrics)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenRowAtIndexPath:(id)arg3 andRowAtIndexPath:(id)arg4 proposedMetrics:(PUFeedSeparatorMetrics)arg5 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForThumbnailInSection:(long long)arg3 ;
-(bool)collectionView:(id)arg1 layout:(id)arg2 shouldJoinSection:(long long)arg3 withSection:(long long)arg4 ;
-(bool)collectionView:(id)arg1 layout:(id)arg2 shouldHideHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForHeaderOfSections:(id)arg3 proposedSize:(CGSize)arg4 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(long long)arg3 proposedSize:(CGSize)arg4 ;
-(PUFeedSeparatorMetrics)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenSection:(long long)arg3 andSection:(long long)arg4 proposedMetrics:(PUFeedSeparatorMetrics)arg5 ;
-(id)collectionView:(id)arg1 layout:(id)arg2 groupIDForSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 headerSizeForGroupID:(id)arg3 proposedSize:(CGSize)arg4 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 spacingBetweenSection:(long long)arg3 andHeaderForGroupID:(id)arg4 ;
-(void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2 ;
-(void)didTapOverlayPlayButtonInFeedImageCell:(id)arg1 ;
-(void)didTapCommentButtonInFeedImageCell:(id)arg1 ;
-(void)didTapButtonInFeedTextCell:(id)arg1 ;
-(id)_albumStreamActivity;
@end

