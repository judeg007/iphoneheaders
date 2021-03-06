/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/SFUOutputStream.h>

@protocol SFUOutputStream;
@interface SFUOffsetOutputStream : NSObject <SFUOutputStream> {

	<SFUOutputStream>* mOutputStream;
	long long mInitialOffset;

}
-(void)dealloc;
-(long long)offset;
-(void)close;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(bool)canSeek;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(bool)canCreateInputStream;
-(id)inputStream;
-(id)initWithOutputStream:(id)arg1 ;
@end

