/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CKTranscriptDataRowObject, CKMessage;
#import <ChatKit/ChatKit-Structs.h>
@class NSString;

@interface CKTranscriptDataRow : NSObject {

	bool _hasTail;
	NSString* _guid;
	<CKTranscriptDataRowObject>* _object;
	<CKMessage>* _message;
	CGRect _frame;

}

@property (nonatomic,retain) <CKTranscriptDataRowObject> * object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) <CKMessage> * message;                             //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSString * guid;                                 //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) CGRect frame;                                      //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) bool hasTail;                                      //@synthesize hasTail=_hasTail - In the implementation block
+(void)contentSizeCategoryDidChange:(id)arg1 ;
+(id)rowWithObject:(id)arg1 forMessage:(id)arg2 ;
+(id)rowAttributes;
-(id)attributeForKey:(id)arg1 ;
-(void)dealloc;
-(CGSize)size;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(bool)isEditable;
-(Class)cellClass;
-(id)message;
-(id)object;
-(void)setMessage:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(id)rowSize;
-(void)setHasTail:(bool)arg1 ;
-(bool)hasTail;
-(UIEdgeInsets)textAlignmentInsets;
-(UIEdgeInsets)contentAlignmentInsets;
-(bool)wantsDrawerLayout;
-(id)cellIdentifier;
-(bool)wantsPrewarmForDisplay;
-(void)prewarmForDisplay;
-(BOOL)transcriptOrientation;
-(bool)transcriptUsesTextAlignmentInsets;
-(id)contactImage;
-(bool)wantsContactImageLayout;
-(void)removeAttributes;
-(bool)displayDuringSend;
-(void)removeSize;
-(id)initWithObject:(id)arg1 forMessage:(id)arg2 ;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)removeAttributeForKey:(id)arg1 ;
-(id)rowAttributes;
-(id)attributedTimestamp;
-(id)guid;
-(bool)isTypingIndicator;
@end

