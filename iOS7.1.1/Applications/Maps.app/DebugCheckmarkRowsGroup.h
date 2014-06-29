/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface DebugCheckmarkRowsGroup : NSObject {

	/*^block*/ id _selectionChanged;
	NSMutableArray* _heldRows;
	NSMutableArray* _weakRows;

}

@property (nonatomic,readonly) NSArray * rows; 
@property (nonatomic,copy) id selectionChanged;              //@synthesize selectionChanged=_selectionChanged - In the implementation block
+(id)rowsGroupContainingRows:(out id*)arg1 withContent:(/*^block*/ id)arg2 get:(/*^block*/ id)arg3 set:(/*^block*/ id)arg4 ;
-(id)addRowWithTitle:(id)arg1 value:(id)arg2 ;
-(id)_initWithHeldRows;
-(id)_relinquishOwnershipOfHeldRows;
-(void)setSelectionChanged:(/*^block*/ id)arg1 ;
-(void)checkmarkRowDidChangeChecked:(id)arg1 ;
-(void)checkmarkRowWillInvalidate:(id)arg1 ;
-(id)init;
-(/*^block*/ id)selectionChanged;
-(void)update;
-(id)rows;
-(void).cxx_destruct;
-(void)addRow:(id)arg1 ;
@end
