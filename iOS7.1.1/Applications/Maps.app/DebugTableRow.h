/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DebugTableSection, UITableViewCell, NSString;

@interface DebugTableRow : NSObject {

	DebugTableSection* _section;
	UITableViewCell* _currentCell;
	NSString* _title;
	NSString* _subtitle;
	/*^block*/ id _prepareContentBlock;
	/*^block*/ id _selectionAction;

}

@property (assign,nonatomic,__weak) DebugTableSection * section;              //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) UITableViewCell * currentCell;                   //@synthesize currentCell=_currentCell - In the implementation block
@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) id prepareContentBlock;                            //@synthesize prepareContentBlock=_prepareContentBlock - In the implementation block
@property (nonatomic,copy) id selectionAction;                                //@synthesize selectionAction=_selectionAction - In the implementation block
@property (nonatomic,readonly) NSString * reuseIdentifier; 
@property (nonatomic,readonly) int cellStyle; 
-(id)currentCell;
-(void)setPrepareContentBlock:(/*^block*/ id)arg1 ;
-(void)setCurrentCell:(id)arg1 ;
-(void)configureCell:(id)arg1 ;
-(id)cellForTableView:(id)arg1 ;
-(/*^block*/ id)prepareContentBlock;
-(void)setSelectionAction:(/*^block*/ id)arg1 ;
-(/*^block*/ id)selectionAction;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(void)invalidate;
-(id)title;
-(id)section;
-(id)reuseIdentifier;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void).cxx_destruct;
-(void)setSection:(id)arg1 ;
-(int)cellStyle;
@end

