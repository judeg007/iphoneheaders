/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSDictionary, NSError, NSString;

@interface HSResponse : NSObject {

	NSData* _responseData;
	unsigned long long _responseCode;
	NSDictionary* _responseHeaderFields;
	NSError* _error;
	NSString* _MIMEType;

}

@property (nonatomic,readonly) NSString * MIMEType;                              //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) unsigned long long responseCode;                  //@synthesize responseCode=_responseCode - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseHeaderFields;              //@synthesize responseHeaderFields=_responseHeaderFields - In the implementation block
@property (nonatomic,readonly) NSData * responseData;                            //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,readonly) NSError * error;                                  //@synthesize error=_error - In the implementation block
+(id)responseWithCode:(unsigned long long)arg1 headerFields:(id)arg2 data:(id)arg3 MIMEType:(id)arg4 error:(id)arg5 ;
+(id)responseWithResponse:(id)arg1 ;
-(unsigned long long)responseCode;
-(id)responseData;
-(void)dealloc;
-(id)description;
-(id)MIMEType;
-(id)initWithCode:(unsigned long long)arg1 headerFields:(id)arg2 data:(id)arg3 MIMEType:(id)arg4 error:(id)arg5 ;
-(id)responseHeaderFields;
-(id)error;
@end

