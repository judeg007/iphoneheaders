/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLPlayingExternallyBackgroundView.h>

@class NSString;

@interface PLAirPlayBackgroundView : PLPlayingExternallyBackgroundView {

	NSString* _deviceName;

}

@property (nonatomic,retain) NSString * deviceName;              //@synthesize deviceName=_deviceName - In the implementation block
-(void)dealloc;
-(id)deviceName;
-(id)initWithFrame:(CGRect)arg1 deviceName:(id)arg2 ;
-(void)setIsMovie:(bool)arg1 ;
-(void)setDeviceName:(id)arg1 ;
@end

