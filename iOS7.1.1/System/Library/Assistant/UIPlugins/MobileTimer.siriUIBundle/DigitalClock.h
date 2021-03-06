/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/MobileTimer.siriUIBundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>
#import <MobileTimer/Clock.h>

@class DigitalClockLabel, UILabel, NSTimeZone;

@interface DigitalClock : UIView <Clock> {

	DigitalClockLabel* _timeLabel;
	UILabel* _dayLabel;
	NSTimeZone* _timeZone;

}

@property (nonatomic,retain) NSTimeZone * timeZone;              //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) int runMode; 
+(id)relativeLabelForDate:(id)arg1 timeZone:(id)arg2 fromDate:(id)arg3 timeZone:(id)arg4 ;
-(void)handleLocaleChanged;
-(void)refreshDigitalClock;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTimeZone:(id)arg1 ;
-(void)setTime:(id)arg1 ;
-(void)start;
-(id)timeZone;
-(void)stop;
-(int)runMode;
-(void)updateTime;
@end

