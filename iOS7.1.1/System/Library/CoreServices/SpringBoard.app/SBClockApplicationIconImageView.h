/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLiveIconImageView.h>

@class CALayer;

@interface SBClockApplicationIconImageView : SBLiveIconImageView {

	CALayer* _seconds;
	CALayer* _minutes;
	CALayer* _hours;
	CALayer* _blackDot;
	CALayer* _redDot;

}
+(void)_iconEditingStateChanged:(id)arg1 ;
+(void)_handleTimeChange:(id)arg1 ;
+(void)_timerFired:(id)arg1 ;
+(void)initialize;
-(id)_generateSquareContentsImage;
-(void)updateUnanimated;
-(void)updateAnimatingState;
-(void)_timerFiredWithComponents:(id)arg1 flags:(unsigned)arg2 ;
-(void)_updateUnanimatedWithComponents:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_setAnimating:(BOOL)arg1 ;
-(id)contentsImage;
@end

