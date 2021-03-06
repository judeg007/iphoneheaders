/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <Preferences/PSController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class PSSpecifier, NSMutableSet;

@interface PSRootController : UINavigationController <PSController, UINavigationControllerDelegate> {

	PSSpecifier* _specifier;
	NSMutableSet* _tasks;
	bool _deallocating;
	unsigned char _hasTelephony;

}
+(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
+(id)readPreferenceValue:(id)arg1 ;
+(id)domainForSpecifier:(id)arg1 ;
+(void)writePreference:(id)arg1 ;
+(bool)processedBundle:(id)arg1 parentController:(id)arg2 parentSpecifier:(id)arg3 bundleControllers:(id*)arg4 settings:(id)arg5 ;
-(Class)volumeLimitDetailClass;
-(Class)volumeLimitPaneClass;
-(void)showVolumeLimit:(id)arg1 ;
-(id)specifier;
-(void)setSpecifier:(id)arg1 ;
-(void)dealloc;
-(id)popViewControllerAnimated:(bool)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)suspend;
-(void)showLeftButton:(id)arg1 withStyle:(long long)arg2 rightButton:(id)arg3 withStyle:(long long)arg4 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3 ;
-(void)setViewControllers:(id)arg1 animated:(bool)arg2 ;
-(id)popToViewController:(id)arg1 animated:(bool)arg2 ;
-(id)popToRootViewControllerAnimated:(bool)arg1 ;
-(void)addTask:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(id)parentController;
-(void)setParentController:(id)arg1 ;
-(id)specifiers;
-(id)rootController;
-(id)aggregateDictionaryPath;
-(void)setRootController:(id)arg1 ;
-(void)pushController:(id)arg1 ;
-(bool)canBeShownFromSuspendedState;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(void)sendWillBecomeActive;
-(void)sendWillResignActive;
-(void)statusBarWillChangeHeight:(id)arg1 ;
-(bool)busy;
-(void)_delayedControllerReleaseAfterPop:(id)arg1 ;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 ;
-(id)tasksDescription;
-(bool)taskIsRunning:(id)arg1 ;
-(void)taskFinished:(id)arg1 ;
-(id)contentViewForTopController;
-(bool)deallocating;
-(void)willDismissPopupView;
-(void)didDismissPopupView;
-(void)willDismissFormSheetView;
-(void)didDismissFormSheetView;
@end

