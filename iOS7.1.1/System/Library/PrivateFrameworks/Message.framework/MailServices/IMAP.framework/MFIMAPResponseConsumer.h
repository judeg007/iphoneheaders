/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MFIMAPResponseConsumer : NSObject {

	NSMutableDictionary* _consumersBySection;

}
-(void)dealloc;
-(void)done;
-(void)addConsumer:(id)arg1 forSection:(id)arg2 ;
-(void)appendData:(id)arg1 forSection:(id)arg2 ;
-(id)consumersBySection;
@end

