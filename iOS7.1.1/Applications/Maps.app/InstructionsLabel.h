/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UILabel.h>

@class NSArray, NSDictionary;

@interface InstructionsLabel : UILabel {

	BOOL _offsetAlignmentRectToAscender;
	BOOL _offsetAlignmentRectToDescender;
	NSArray* _alternatives;
	NSDictionary* _alternativesTextAttributes;
	SCD_Struct_In2 _growingRequirements;

}

@property (nonatomic,copy) NSArray * alternatives;                                 //@synthesize alternatives=_alternatives - In the implementation block
@property (nonatomic,copy) NSDictionary * alternativesTextAttributes;              //@synthesize alternativesTextAttributes=_alternativesTextAttributes - In the implementation block
@property (assign,nonatomic) SCD_Struct_In2 growingRequirements;                   //@synthesize growingRequirements=_growingRequirements - In the implementation block
@property (assign,nonatomic) BOOL offsetAlignmentRectToAscender;                   //@synthesize offsetAlignmentRectToAscender=_offsetAlignmentRectToAscender - In the implementation block
@property (assign,nonatomic) BOOL offsetAlignmentRectToDescender;                  //@synthesize offsetAlignmentRectToDescender=_offsetAlignmentRectToDescender - In the implementation block
-(void)_updateAlternativeSelectionConstrainingToBounds:(BOOL)arg1 ;
-(id)alternativesTextAttributes;
-(SCD_Struct_In2)growingRequirements;
-(BOOL)offsetAlignmentRectToAscender;
-(BOOL)offsetAlignmentRectToDescender;
-(id)_alternativeSelectionWithSize:(CGSize)arg1 constrainingToSize:(BOOL)arg2 ;
-(void)setAlternatives:(id)arg1 ;
-(void)setAlternativesTextAttributes:(id)arg1 ;
-(void)setGrowingRequirements:(SCD_Struct_In2)arg1 ;
-(void)setOffsetAlignmentRectToAscender:(BOOL)arg1 ;
-(void)setOffsetAlignmentRectToDescender:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(void).cxx_destruct;
-(id)alternatives;
@end

