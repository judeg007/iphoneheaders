/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBAwayViewPluginController, SBLockOverlayContext, NSString;

@interface SBLockScreenPlugin : NSObject {

	SBAwayViewPluginController* _controller;
	SBLockOverlayContext* _overlay;
	NSString* _bundleName;

}

@property (retain) SBAwayViewPluginController * controller;              //@synthesize controller=_controller - In the implementation block
@property (retain) SBLockOverlayContext * overlay;                       //@synthesize overlay=_overlay - In the implementation block
@property (copy) NSString * bundleName;                                  //@synthesize bundleName=_bundleName - In the implementation block
-(void)dealloc;
-(id)controller;
-(void)setController:(id)arg1 ;
-(id)overlay;
-(void)setOverlay:(id)arg1 ;
-(id)bundleName;
-(void)setBundleName:(id)arg1 ;
@end

