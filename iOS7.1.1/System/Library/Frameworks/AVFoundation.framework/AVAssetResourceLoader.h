/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVAssetResourceLoaderInternal;

@interface AVAssetResourceLoader : NSObject {

	AVAssetResourceLoaderInternal* _resourceLoader;

}

@property (nonatomic,readonly) <AVAssetResourceLoaderDelegate> * delegate; 
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * delegateQueue; 
-(id)_weakReference;
-(void)_attemptDelegateHandlingOfRequestWithDictionary:(id)arg1 fallbackBlock:(/*^block*/ id)arg2 ;
-(id)stateQueue;
-(void)_performDelegateCallbackSynchronouslyIfCurrentDelegateQueueIsQueue:(id)arg1 delegateCallbackBlock:(/*^block*/ id)arg2 ;
-(void)_noteFinishingOfLoadingRequest:(id)arg1 ;
-(void)cacheContentInformation:(id)arg1 forURL:(id)arg2 ;
-(id)cachedContentInformationForURL:(id)arg1 ;
-(id)delegateQueue;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithAsset:(id)arg1 ;
-(id)asset;
-(void)finalize;
@end

