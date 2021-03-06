/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableDictionary;

@interface SBFMappedImageCache : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	NSString* _path;
	NSMutableDictionary* _images;

}
+(id)wallpaperCache;
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeImageForKey:(id)arg1 ;
-(id)imageForKey:(id)arg1 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDescription:(id)arg1 ;
-(id)imageForKey:(id)arg1 options:(int)arg2 ;
-(id)imageForKey:(id)arg1 options:(int)arg2 generateImageWithBlockIfNecessary:(/*^block*/ id)arg3 ;
-(id)imageForKey:(id)arg1 generateImageWithBlockIfNecessary:(/*^block*/ id)arg2 ;
-(void)warmupImageForKey:(id)arg1 ;
@end

