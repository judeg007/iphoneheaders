/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPCharacterStyler.h>

@class TSWPCharacterStyle;

@interface TSWPRemoveIdentifiedCharacterStyleStyler : TSWPCharacterStyler {

	TSWPCharacterStyle* _styleToRemove;

}
-(void)removeStyle:(id)arg1 inRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(id)replacementStyleForStyle:(id)arg1 range:(NSRange)arg2 ;
@end

