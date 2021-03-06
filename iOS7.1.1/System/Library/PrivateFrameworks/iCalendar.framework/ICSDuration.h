/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@interface ICSDuration : NSObject <NSCoding> {

	double _duration;

}
+(id)durationFromICSString:(id)arg1 ;
+(id)durationFromRFC2445UTF8String:(const char*)arg1 ;
+(id)generateDurationFromICSString:(id)arg1 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)initWithWeeks:(long long)arg1 days:(long long)arg2 hours:(long long)arg3 minutes:(long long)arg4 seconds:(long long)arg5 ;
-(bool)isNegative;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)timeInterval;
-(id)ICSStringWithOptions:(unsigned long long)arg1 ;
-(long long)days;
-(long long)weeks;
-(long long)hours;
-(long long)minutes;
-(long long)seconds;
@end

