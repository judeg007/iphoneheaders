/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreMediaStream/MSStorageProtocol.h>

@class NSString;

@interface MSMMCSProtocol : NSObject <MSStorageProtocol> {

	NSString* _personID;
	NSString* _MMCSDirPath;
	MMCSEngineRef _engine;
	NSString* _engineDirPath;

}

@property (nonatomic,readonly) NSString * personID;               //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) MMCSEngineRef engine;              //@synthesize engine=_engine - In the implementation block
+(id)computeItemIDForAsset:(id)arg1 ;
-(void)dealloc;
-(void)deactivate;
-(void).cxx_destruct;
-(void)deactivateRemoveAllFiles:(bool)arg1 ;
-(void)didFinishUsingAssets:(id)arg1 ;
-(id)initWithPersonID:(id)arg1 path:(id)arg2 ;
-(int)_getFileDescriptorFromItem:(unsigned long long)arg1 ;
-(id)_getUTIFromItem:(unsigned long long)arg1 ;
-(void)_getItemDone:(unsigned long long)arg1 path:(id)arg2 error:(id)arg3 ;
-(void)_putItemDone:(unsigned long long)arg1 putReceipt:(id)arg2 error:(id)arg3 ;
-(void)_requestCompleted;
-(MMCSEngineRef)engine;
-(void)abort;
-(id)personID;
@end

