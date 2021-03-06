/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:17:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TCC.framework/tccd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSBundle;

@interface Client : NSObject {

	int _client_type;
	NSString* _client;
	NSString* _client_name;
	NSString* _path;
	NSBundle* _bundle;

}

@property (assign) int client_type;                     //@synthesize client_type=_client_type - In the implementation block
@property (retain) NSString * client;                   //@synthesize client=_client - In the implementation block
@property (retain) NSString * client_name;              //@synthesize client_name=_client_name - In the implementation block
@property (retain) NSString * path;                     //@synthesize path=_path - In the implementation block
@property (retain) NSBundle * bundle;                   //@synthesize bundle=_bundle - In the implementation block
-(int)client_type;
-(void)setClient_type:(int)arg1 ;
-(id)client_name;
-(void)setClient_name:(id)arg1 ;
-(id)path;
-(void)setPath:(id)arg1 ;
-(id)bundle;
-(void)setBundle:(id)arg1 ;
-(void).cxx_destruct;
-(void)setClient:(id)arg1 ;
-(id)client;
@end

