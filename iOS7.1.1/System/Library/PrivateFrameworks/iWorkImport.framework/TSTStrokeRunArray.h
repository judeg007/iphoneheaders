/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSTStrokeRunArray : NSObject {

	bool mHasCustomStrokes;
	double mMaxWidth;
	unsigned mCount;
	unsigned mAllocCount;
	unsigned mLastLookup;
	TSTStrokeRun* mStrokes;
	opaque_pthread_rwlock_t mRWLock;

}

@property (nonatomic,readonly) double maxWidth; 
-(id)initWithCount:(unsigned)arg1 ;
-(void)dealloc;
-(id)description;
-(id).cxx_construct;
-(double)maxWidth;
@end

