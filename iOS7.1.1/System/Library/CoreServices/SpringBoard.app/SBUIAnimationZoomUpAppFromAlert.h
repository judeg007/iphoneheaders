/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationZoomUpApp.h>

@class SBAlertManager, SBAlert;

@interface SBUIAnimationZoomUpAppFromAlert : SBUIAnimationZoomUpApp {

	SBAlertManager* _alertManager;
	SBAlert* _alert;

}
-(id)initWithActivatingApp:(id)arg1 deactivatingAlert:(id)arg2 alertManager:(id)arg3 ;
-(void)prepareZoom;
-(void)animateZoomWithCompletion:(/*^block*/ id)arg1 ;
-(void)cleanupZoom;
-(double)animationDelay;
-(void)dealloc;
-(double)animationDuration;
@end

