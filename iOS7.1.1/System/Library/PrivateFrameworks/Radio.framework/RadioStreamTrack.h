/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioTrack.h>

@class NSURL;

@interface RadioStreamTrack : RadioTrack

@property (nonatomic,readonly) NSURL * certificateURL; 
@property (nonatomic,readonly) NSURL * contentURL; 
@property (nonatomic,readonly) NSURL * keyServerURL; 
@property (getter=isSkipable,nonatomic,readonly) bool skipable; 
-(id)contentURL;
-(id)certificateURL;
-(id)keyServerURL;
-(bool)isSkipable;
@end

