/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetWriterInternal, NSURL, NSString, NSArray, NSError, AVAssetWriterHelper;

@interface AVAssetWriter : NSObject {

	AVAssetWriterInternal* _internal;

}

@property (nonatomic,readonly) NSURL * outputURL; 
@property (nonatomic,readonly) NSString * outputFileType; 
@property (nonatomic,readonly) NSArray * availableMediaTypes; 
@property (readonly) long long status; 
@property (readonly) NSError * error; 
@property (nonatomic,copy) NSArray * metadata; 
@property (assign,nonatomic) bool shouldOptimizeForNetworkUse; 
@property (nonatomic,readonly) NSArray * inputs; 
@property (getter=_helper,readonly) AVAssetWriterHelper * helper; 
+(id)_errorForOSStatus:(int)arg1 ;
+(id)assetWriterWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3 ;
+(id)keyPathsForValuesAffectingStatus;
+(id)keyPathsForValuesAffectingError;
+(void)initialize;
+(bool)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(float)preferredRate;
-(float)preferredVolume;
-(void)setPreferredVolume:(float)arg1 ;
-(SCD_Struct_CM4)movieFragmentInterval;
-(void)setMovieFragmentInterval:(SCD_Struct_CM4)arg1 ;
-(bool)shouldOptimizeForNetworkUse;
-(int)movieTimeScale;
-(void)setMovieTimeScale:(int)arg1 ;
-(void)setPreferredRate:(float)arg1 ;
-(id)inputGroups;
-(id)initWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3 ;
-(id)outputURL;
-(id)outputFileType;
-(bool)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2 withBlock:(/*^block*/ id)arg3 ;
-(id)availableMediaTypes;
-(bool)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 ;
-(bool)canAddInput:(id)arg1 ;
-(void)addInput:(id)arg1 ;
-(bool)canAddInputGroup:(id)arg1 ;
-(void)addInputGroup:(id)arg1 ;
-(void)startSessionAtSourceTime:(SCD_Struct_CM4)arg1 ;
-(void)endSessionAtSourceTime:(SCD_Struct_CM4)arg1 ;
-(void)cancelWriting;
-(bool)finishWriting;
-(void)finishWritingWithCompletionHandler:(/*^block*/ id)arg1 ;
-(bool)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2 ;
-(void)_transitionToFailedStatusWithError:(id)arg1 ;
-(id)_helper;
-(void)dealloc;
-(id)init;
-(id)description;
-(long long)status;
-(bool)startWriting;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(CGAffineTransform)preferredTransform;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setShouldOptimizeForNetworkUse:(bool)arg1 ;
-(id)error;
-(id)inputs;
-(void)finalize;
@end
