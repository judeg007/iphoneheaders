/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSString, NSMutableOrderedSet, AXDialectMap;

@interface AXLanguageTag : NSObject {

	bool _wasPredicted;
	NSString* _content;
	NSMutableOrderedSet* _unambiguousDialects;
	NSMutableOrderedSet* _ambiguousDialects;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                                             //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) NSString * content;                                        //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * unambiguousDialects;                 //@synthesize unambiguousDialects=_unambiguousDialects - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * ambiguousDialects;                   //@synthesize ambiguousDialects=_ambiguousDialects - In the implementation block
@property (nonatomic,readonly) AXDialectMap * preferredAmbiguousDialect; 
@property (nonatomic,readonly) AXDialectMap * preferredUnambiguousDialect; 
@property (nonatomic,readonly) NSString * contentSubstring; 
@property (nonatomic,readonly) AXDialectMap * dialect; 
@property (assign,nonatomic) bool wasPredicted;                                         //@synthesize wasPredicted=_wasPredicted - In the implementation block
+(id)tagWithDialects:(id)arg1 range:(NSRange)arg2 content:(id)arg3 predictedByTagger:(bool)arg4 ;
-(void)dealloc;
-(id)description;
-(NSRange)range;
-(id)content;
-(void)setRange:(NSRange)arg1 ;
-(void)setWasPredicted:(bool)arg1 ;
-(void)addAmbiguousDialect:(id)arg1 ;
-(void)addUnambiguousDialect:(id)arg1 ;
-(id)ambiguousDialects;
-(id)unambiguousDialects;
-(id)preferredUnambiguousDialect;
-(id)preferredAmbiguousDialect;
-(void)setUnambiguousDialects:(id)arg1 ;
-(void)setAmbiguousDialects:(id)arg1 ;
-(id)dialect;
-(id)contentSubstring;
-(bool)canBeSpokenByDialect:(id)arg1 ;
-(bool)hasAmbigiousDialects;
-(void)addAmbiguousDialects:(id)arg1 ;
-(bool)canBeSpokenByLanguage:(id)arg1 ;
-(bool)wasPredicted;
-(void)setContent:(id)arg1 ;
@end

