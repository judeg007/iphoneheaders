/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:37 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iap2d/iap2d-Structs.h>
@interface iAP2PostAlert : NSObject
+(void)iAP2TearDownAccessoryNotification:(_CFUserNotification*)arg1 ;
+(CFStringRef)getStringForDeviceContext:(CFStringRef)arg1 ;
+(void)iAP2NotificationPostAccessoryNotification:(CFStringRef)arg1 forMsg:(CFStringRef)arg2 forDefaultButton:(CFStringRef)arg3 withAlternateButton:(CFStringRef)arg4 forNotification:(_CFUserNotification*)arg5 withCallback:(/*function pointer*/ void*)arg6 andTimeout:(double)arg7 ;
@end
