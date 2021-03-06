/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKXTileConnector : NSObject {

	unordered_multimap<unsigned int, VKRibbonMultiPolylineSegment *, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, vk_allocator<std::__1::pair<const unsigned int, VKRibbonMultiPolylineSegment *> > >* _tileMapping;
	int _segmentProcessingIndex;

}

@property (assign,nonatomic) unordered_multimap<unsigned int* tileMapping;              //@synthesize tileMapping=_tileMapping - In the implementation block
@property (assign,nonatomic) int segmentProcessingIndex;                                //@synthesize segmentProcessingIndex=_segmentProcessingIndex - In the implementation block
+(id)sharedInstance;
+(void)deregisterTile:(id)arg1 ;
+(void)registerTile:(id)arg1 ;
+(id)barriorJobQueue;
-(id)init;
-(id).cxx_construct;
-(void).cxx_destruct;
-(unordered_multimap<unsigned int, VKRibbonMultiPolylineSegment *, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, vk_allocator<std::__1::pair<const unsigned int, VKRibbonMultiPolylineSegment *> > >*)tileMapping;
-(void)setTileMapping:(unordered_multimap<unsigned int, VKRibbonMultiPolylineSegment *, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, vk_allocator<std::__1::pair<const unsigned int, VKRibbonMultiPolylineSegment *> > >*)arg1 ;
-(int)segmentProcessingIndex;
-(void)setSegmentProcessingIndex:(int)arg1 ;
@end

