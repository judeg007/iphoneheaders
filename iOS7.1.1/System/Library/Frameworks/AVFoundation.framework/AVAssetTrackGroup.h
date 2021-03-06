/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class AVAssetTrackGroupInternal, NSArray;

@interface AVAssetTrackGroup : NSObject <NSCopying> {

	AVAssetTrackGroupInternal* _assetTrackGroup;

}

@property (nonatomic,readonly) NSArray * trackIDs; 
-(id)initWithAsset:(id)arg1 trackIDs:(id)arg2 ;
-(id)trackIDs;
-(id)_assetComparisonToken;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)finalize;
@end

