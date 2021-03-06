/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:46 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBControlCenterSectionViewController.h>
#import <MediaPlayerUI/SBUIControlCenterButtonDelegate.h>

@protocol OS_dispatch_queue;
@class SBControlCenterButton, NSMutableArray, AVFlashlight, NSObject;

@interface SBCCQuickLaunchSectionController : SBControlCenterSectionViewController <SBUIControlCenterButtonDelegate> {

	SBControlCenterButton* _torchButton;
	SBControlCenterButton* _clockButton;
	SBControlCenterButton* _calculatorButton;
	SBControlCenterButton* _cameraButton;
	NSMutableArray* _buttons;
	AVFlashlight* _flashlight;
	BOOL _ccVisible;
	NSObject<OS_dispatch_queue>* _flashlightQueue;
	BOOL _flashlightOn;

}

@property (assign,getter=isFlashlightOn,nonatomic) BOOL flashlightOn;              //@synthesize flashlightOn=_flashlightOn - In the implementation block
+(Class)viewClass;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(CGSize)contentSizeForOrientation:(int)arg1 ;
-(void)_deviceBlockStateDidChangeNotification:(id)arg1 ;
-(void)_featureLockStateDidChangeNotification:(id)arg1 ;
-(void)_updateFlashlightPowerState;
-(void)_updateTorchButtonState;
-(id)_bundleIDForButton:(id)arg1 ;
-(void)_enableTorch:(BOOL)arg1 ;
-(id)_urlForButton:(id)arg1 ;
-(void)_activateAppWithBundleId:(id)arg1 url:(id)arg2 ;
-(void)noteSettingsDidUpdate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)view;
-(void)viewWillLayoutSubviews;
-(void)buttonTapped:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)sectionIdentifier;
-(void)setFlashlightOn:(BOOL)arg1 ;
-(BOOL)isFlashlightOn;
@end

