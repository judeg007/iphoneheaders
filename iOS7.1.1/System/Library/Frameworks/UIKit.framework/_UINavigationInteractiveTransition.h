/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UINavigationInteractiveTransitionBase.h>

@class UIScreenEdgePanGestureRecognizer;

@interface _UINavigationInteractiveTransition : _UINavigationInteractiveTransitionBase {

	UIScreenEdgePanGestureRecognizer* _edgePanRecognizer;

}

@property (nonatomic,readonly) UIScreenEdgePanGestureRecognizer * screenEdgePanGestureRecognizer; 
-(void)dealloc;
-(id)gestureRecognizerView;
-(void)startInteractiveTransition;
-(void)setNotInteractiveTransition;
-(bool)gestureRecognizerShouldBegin:(id)arg1 ;
-(bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(bool)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)_configureNavigationGesture;
-(id)initWithViewController:(id)arg1 animator:(id)arg2 ;
-(id)screenEdgePanGestureRecognizer;
@end
