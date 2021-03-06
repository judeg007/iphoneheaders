/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSDeserializerStream.h>

@interface NSAKDeserializerStream : NSObject <NSDeserializerStream> {

	const void* memory;
	const char* current;
	unsigned long long left;
	unsigned long long max;
	bool freeWhenDone;

}
-(id)initFromMemoryNoCopy:(const void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3 ;
-(int)readInt;
-(unsigned long long)readAlignedDataSize;
-(void)readData:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)initFromPath:(id)arg1 ;
-(void)dealloc;
-(void)finalize;
@end

