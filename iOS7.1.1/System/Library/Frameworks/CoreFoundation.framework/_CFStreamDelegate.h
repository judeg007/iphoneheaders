/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSStreamDelegate.h>

@interface _CFStreamDelegate : NSObject <NSStreamDelegate> {

	unsigned long long _flags;
	SCD_Struct_CF9* _client;
	SCD_Union_CF10* _cb;

}
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(id)initWithStreamEvents:(unsigned long long)arg1 callback:(void*)arg2 context:(SCD_Struct_CF9*)arg3 ;
-(void)dealloc;
@end
