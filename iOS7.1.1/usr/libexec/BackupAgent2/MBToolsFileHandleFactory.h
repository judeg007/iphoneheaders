/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:27 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BackupAgent2/MBFileHandleFactory.h>

@class MBKeyBag, NSData;

@interface MBToolsFileHandleFactory : NSObject <MBFileHandleFactory> {

	MBKeyBag* _keybag;
	NSData* _key;

}
-(id)fileHandleWithPath:(id)arg1 flags:(int)arg2 mode:(unsigned short)arg3 error:(id*)arg4 ;
-(id)initWithKeyBag:(id)arg1 key:(id)arg2 ;
-(void)dealloc;
@end

