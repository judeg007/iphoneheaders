/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPTOCEntryStyle : <TSWPParagraphStyle : TSSStyle : TSPObject> = {
   16 fontName
   17 fontSize
   18 fontColor
   19 bold
   20 italic
   21 capitalization
   22 underline
   23 underlineWidth
   24 underlineColor
   25 word_underline
   26 strikethru
   27 strikethruWidth
   28 strikethruColor
   29 word_strikethrough
   31 outline
   32 outlineColor
   33 baselineShift
   34 kerning
   35 tracking
   36 superscript
   37 textBackground
   38 language
   39 textShadow
   40 ligatures
   42 coreTextFontFeatures
   43 writingDirection
   44 emphasisMarks
   45 compatibilityFont
   80 firstLineIndent
   81 leftIndent
   82 rightIndent
   83 defaultTabStops
   84 tabs
   85 lineSpacing
   86 alignment
   87 spaceBefore
   88 spaceAfter
   89 keepLinesTogether
   90 keepWithNext
   91 pageBreakBefore
   92 widowControl
   93 hyphenate
   94 paragraphFill
   95 followingParagraphStyle
   97 decimalTab
   98 paragraphBorderType
   99 paragraphStroke
  100 paragraphRuleWidth
  101 paragraphRuleOffset
  102 outlineLevel
  103 outlineStyleType
  104 listStyle
  105 followingParagraphStyleIdentifier
  106 showInTOC
  107 tocStyle
}
+(id)defaultValueForProperty:(int)arg1 ;
+(int)defaultIntValueForProperty:(int)arg1 ;
+(id)propertiesAllowingNSNull;
+(id)properties;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(TOCEntryStyleArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(bool)arg4 ;
-(id)presetKind;
-(const ParagraphStyleArchive*)paragraphStyleArchiveFromUnarchiver:(id)arg1 ;
-(id)initWithContext:(id)arg1 name:(id)arg2 basedOnParagraphStyle:(id)arg3 ;
-(void)p_loadTOCEntryParagraphStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const TOCEntryStylePropertiesArchive*)arg2 unarchiver:(id)arg3 ;
-(void)p_saveTOCEntryStylePropertiesToArchive:(TOCEntryStylePropertiesArchive*)arg1 archiver:(id)arg2 ;
@end

