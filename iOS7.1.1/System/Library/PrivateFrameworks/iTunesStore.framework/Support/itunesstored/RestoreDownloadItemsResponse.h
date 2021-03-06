/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:12 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, StoreDownloadQueueResponse;

@interface RestoreDownloadItemsResponse : NSObject {

	NSArray* _requestItems;
	StoreDownloadQueueResponse* _serverResponse;

}

@property (nonatomic,copy) NSArray * requestItems;                                     //@synthesize requestItems=_requestItems - In the implementation block
@property (nonatomic,retain) StoreDownloadQueueResponse * serverResponse;              //@synthesize serverResponse=_serverResponse - In the implementation block
-(void)setRequestItems:(id)arg1 ;
-(void)setServerResponseWithError:(id)arg1 ;
-(id)serverResponse;
-(id)requestItems;
-(void)setServerResponse:(id)arg1 ;
-(void)dealloc;
@end

