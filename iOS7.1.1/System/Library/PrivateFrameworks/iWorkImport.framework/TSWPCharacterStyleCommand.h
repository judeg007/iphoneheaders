/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSWPTextCommand.h>

@class TSWPCharacterStyle;

@interface TSWPCharacterStyleCommand : TSWPTextCommand {

	TSWPCharacterStyle* _characterStyle;

}
-(id)initWithStorage:(id)arg1 selection:(id)arg2 characterStyle:(id)arg3 ;
-(void)doCommit;
-(int)persistenceKind;
-(void)doUndoRedo;
-(void)dealloc;
-(id)actionString;
@end

