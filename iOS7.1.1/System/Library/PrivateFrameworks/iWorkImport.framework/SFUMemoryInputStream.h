/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/SFUBufferedInputStream.h>

@class NSData;

@interface SFUMemoryInputStream : NSObject <SFUBufferedInputStream> {

	NSData* mData;
	const char* mStart;
	const char* mCurrent;
	const char* mEnd;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(long long)offset;
-(void)close;
-(unsigned long long)readToOwnBuffer:(const char**)arg1 size:(unsigned long long)arg2 ;
-(bool)canSeek;
-(void)seekToOffset:(long long)arg1 ;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(bool)seekWithinBufferToOffset:(long long)arg1 ;
-(id)closeLocalStream;
-(id)initWithData:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 ;
@end

