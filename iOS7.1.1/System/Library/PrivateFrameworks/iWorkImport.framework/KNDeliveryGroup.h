/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray, NSArray, KNBuildChunk;

@interface KNDeliveryGroup : NSObject <NSCopying> {

	NSMutableArray* mBuildChunks;
	bool mIsPhantom;

}

@property (nonatomic,readonly) NSArray * buildChunks; 
@property (nonatomic,readonly) unsigned long long buildChunkCount; 
@property (nonatomic,readonly) KNBuildChunk * firstChunk; 
@property (nonatomic,readonly) KNBuildChunk * lastChunk; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) NSArray * builds; 
@property (assign,nonatomic) bool isPhantom; 
-(bool)isPhantom;
-(id)builds;
-(id)buildChunks;
-(void)addBuildChunk:(id)arg1 ;
-(bool)containsBuildChunk:(id)arg1 ;
-(long long)indexOfBuildChunk:(id)arg1 ;
-(void)insertBuildChunk:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeBuildChunk:(id)arg1 ;
-(bool)hasComplementForBuildChunk:(id)arg1 ;
-(void)p_setBuildChunks:(id)arg1 ;
-(unsigned long long)buildChunkCount;
-(id)firstChunk;
-(id)lastChunk;
-(void)removeBuildChunkAtIndex:(long long)arg1 ;
-(id)buildChunkAtIndex:(long long)arg1 ;
-(id)complementForChunk:(id)arg1 ;
-(void)setIsPhantom:(bool)arg1 ;
-(void)dealloc;
-(id)init;
-(double)duration;
-(id)copyWithZone:(NSZone)arg1 ;
@end

