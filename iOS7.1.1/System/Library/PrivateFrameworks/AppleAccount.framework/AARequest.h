/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppleAccount/AppleAccount-Structs.h>
@class NSString, NSURLRequest;

@interface AARequest : NSObject {

	NSString* _urlString;
	bool _flushCache;
	OpaqueCFHTTPCookieStorageRef _cookieStorage;
	NSString* _oneTimePassword;
	NSString* _machineId;

}

@property (readonly) NSURLRequest * urlRequest; 
@property (assign,nonatomic) bool flushCache;                //@synthesize flushCache=_flushCache - In the implementation block
+(id)protocolVersion;
+(Class)responseClass;
-(void)dealloc;
-(void).cxx_destruct;
-(id)urlString;
-(id)urlRequest;
-(void)setFlushCache:(bool)arg1 ;
-(void)setDeviceProvisioningMachineId:(id)arg1 ;
-(void)setDeviceProvisioningOneTimePassword:(id)arg1 ;
-(void)setCookieStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(id)redactedBodyStringWithPropertyList:(id)arg1 ;
-(id)initWithURLString:(id)arg1 ;
-(id)urlCredential;
-(bool)flushCache;
-(id)bodyDictionary;
-(void)performRequestWithHandler:(/*^block*/ id)arg1 ;
@end

