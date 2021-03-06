/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class Protocol;

@interface NSXPCInterface : NSObject {

	Protocol* _protocol;
	CFDictionaryRef _methods2;
	id _reserved1;

}

@property (assign) Protocol * protocol; 
+(id)mf_mailComposeRemoteServiceInterface;
+(id)mf_mailComposeRemoteHostInterface;
+(id)signatureForBlock:(id)arg1 ;
+(id)interfaceWithProtocol:(id)arg1 ;
-(id)_verifiedMethodSignatureForReplyBlockOfSelector:(SEL)arg1 ;
-(id)_interfaceForArgument:(unsigned long long)arg1 ofSelector:(SEL)arg2 reply:(bool)arg3 ;
-(id)_allowedClassesForSelector:(SEL)arg1 reply:(bool)arg2 ;
-(id)_verifiedMethodSignatureForSelector:(SEL)arg1 ;
-(void)setProtocol:(id)arg1 ;
-(id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3 ;
-(id)interfaceForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3 ;
-(void)setClass:(Class)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4 ;
-(Class)classForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3 ;
-(void)setReplyBlockSignature:(id)arg1 forSelector:(SEL)arg2 ;
-(id)replyBlockSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)debugDescription;
-(void)setInterface:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4 ;
-(void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4 ;
-(id)protocol;
-(void)finalize;
@end

