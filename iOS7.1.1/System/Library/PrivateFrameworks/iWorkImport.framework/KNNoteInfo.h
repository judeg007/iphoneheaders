/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSDContainerInfo.h>
#import <iWorkImport/TSWPStorageParent.h>
#import <iWorkImport/TSKDocumentObject.h>

@protocol TSDContainerInfo;
@class NSObject, TSWPStorage, TSDInfoGeometry;

@interface KNNoteInfo : TSPObject <TSDContainerInfo, TSWPStorageParent, TSKDocumentObject> {

	NSObject<TSDContainerInfo>* mParentInfo;
	TSWPStorage* mContainedStorage;
	CGRect mFrameForPrinting;
	bool mShrinkTextForPrinting;

}

@property (nonatomic,retain) TSWPStorage * containedStorage; 
@property (nonatomic,readonly) int verticalAlignment; 
@property (assign,nonatomic) CGRect frameForPrinting; 
@property (assign,nonatomic) bool shrinkTextForPrinting; 
@property (assign,nonatomic) bool matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject<TSDContainerInfo> * parentInfo; 
@property (assign,nonatomic) TSPObject<TSDOwningAttachment> * owningAttachment; 
@property (nonatomic,readonly) TSPObject<TSDOwningAttachment> * owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) bool floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) bool anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) bool inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) bool attachedToBodyText; 
@property (nonatomic,readonly) long long contentWritingDirection; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(NoteArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const NoteArchive*)arg1 unarchiver:(id)arg2 ;
-(id)copyWithContext:(id)arg1 ;
-(bool)isThemeContent;
-(id)parentInfo;
-(Class)repClass;
-(id)owningAttachment;
-(id)childInfos;
-(void)setParentInfo:(id)arg1 ;
-(void)setOwningAttachment:(id)arg1 ;
-(id)owningAttachmentNoRecurse;
-(bool)isFloatingAboveText;
-(bool)isAnchoredToText;
-(bool)isInlineWithText;
-(bool)isAttachedToBodyText;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(bool)autoListRecognition;
-(bool)autoListTermination;
-(bool)textIsVertical;
-(long long)contentWritingDirection;
-(id)containedStorage;
-(bool)shouldHideEmptyBullets;
-(void)setContainedStorage:(id)arg1 ;
-(id)initWithContext:(id)arg1 containedStorage:(id)arg2 ;
-(CGRect)frameForPrinting;
-(void)setFrameForPrinting:(CGRect)arg1 ;
-(bool)shrinkTextForPrinting;
-(void)setShrinkTextForPrinting:(bool)arg1 ;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
-(id)geometry;
-(void)setGeometry:(id)arg1 ;
-(id)childEnumerator;
-(int)verticalAlignment;
-(Class)layoutClass;
@end

