/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISPersonalizeOffersRequest, SSPersonalizeOffersResponse;

@interface ISPersonalizeOffersOperation : ISOperation {

	ISPersonalizeOffersRequest* _request;
	SSPersonalizeOffersResponse* _response;

}

@property (readonly) ISPersonalizeOffersRequest * personalizeOffersReqeust; 
@property (readonly) SSPersonalizeOffersResponse * response; 
-(void)dealloc;
-(void)run;
-(id)response;
-(bool)_runWithURLDictionary:(id)arg1 error:(id*)arg2 ;
-(id)_copyResponseForURL:(id)arg1 requestString:(id)arg2 error:(id*)arg3 ;
-(void)_addDictionaryToResponse:(id)arg1 ;
-(id)personalizeOffersReqeust;
-(id)initWithPersonalizeOffersRequest:(id)arg1 ;
@end

