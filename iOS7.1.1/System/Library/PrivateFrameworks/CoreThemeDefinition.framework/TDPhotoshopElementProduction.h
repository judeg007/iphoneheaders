/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDElementProduction.h>
#import <CoreThemeDefinition/TDElementAttributes.h>

@class NSMutableAttributedString, CUIPSDImageRef, NSDate, CUIImage, TDPhotoshopAsset;

@interface TDPhotoshopElementProduction : TDElementProduction <TDElementAttributes> {

	NSMutableAttributedString* log;
	CUIPSDImageRef* psdImageRef;
	NSDate* _cachedImageDate;
	CUIImage* _edgeMetricsMask;
	CUIImage* _textMetricsMask;
	bool _didCheckForMetricsMasks;

}

@property (nonatomic,@dynamic,retain) TDPhotoshopAsset * asset; 
+(unsigned)sliceRowsPerRendition:(long long)arg1 ;
+(unsigned)sliceColumnsPerRendition:(long long)arg1 ;
-(void)dealloc;
-(id)isActive;
-(void)setIsActive:(id)arg1 ;
-(id)log;
-(id)columnCount;
-(void)setColumnCount:(id)arg1 ;
-(void)setRowCount:(id)arg1 ;
-(void)copyAttributesInto:(id)arg1 ;
-(id)copyDataFromAttributes;
-(void)setAttributesFromCopyData:(id)arg1 ;
-(void)addDrawingLayerIndex:(id)arg1 themeLayer:(id)arg2 toIndices:(id)arg3 layers:(id)arg4 lowestIndex:(long long*)arg5 ;
-(id)psdImageRefWithDocument:(id)arg1 ;
-(void)_loadMetricsMasksWithDocument:(id)arg1 ;
-(void)appendToLog:(id)arg1 ;
-(void)getDrawingLayerIndices:(id*)arg1 themeLayers:(id*)arg2 lowestIndex:(long long*)arg3 ;
-(void)fillIterationKeyAttribute:(id)arg1 iteration:(int)arg2 rowOrColumn:(int)arg3 document:(id)arg4 ;
-(id)baseKeySpec;
-(id)dataFromAttributes;
-(void)setAttributesFromData:(id)arg1 ;
-(id)_layerMappingForPhotoshopLayer:(long long)arg1 drawingLayer:(long long)arg2 ;
-(id)columnIterationType;
-(id)rowIterationType;
-(void)setColumnIterationType:(id)arg1 ;
-(void)setRowIterationType:(id)arg1 ;
-(id)associatedFileURLWithDocument:(id)arg1 ;
-(id)edgeMetricsMaskWithDocument:(id)arg1 ;
-(id)textMetricsMaskWithDocument:(id)arg1 ;
-(bool)generateRenditionsWithEntityName:(id)arg1 document:(id)arg2 errorDescription:(id*)arg3 ;
-(void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(bool)arg2 ;
-(id)rowCount;
-(id)relativePath;
@end

