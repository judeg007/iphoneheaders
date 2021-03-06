/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class NSMutableArray, NSString;

@interface VKFeatureAccessibilityElement : UIAccessibilityElement {

	NSMutableArray* _featureArray;
	NSMutableArray* _paths;
	int _style;
	float _strokeWidth;
	int _mapFeatureType;
	unsigned long long _featureId;
	unsigned long long _shieldType;
	NSString* _iconName;
	NSString* _shieldText;

}

@property (assign,nonatomic) int style;                                    //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long featureId;                 //@synthesize featureId=_featureId - In the implementation block
@property (assign,nonatomic) unsigned long long shieldType;                //@synthesize shieldType=_shieldType - In the implementation block
@property (nonatomic,readonly) NSMutableArray * featureArray;              //@synthesize featureArray=_featureArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * paths;                       //@synthesize paths=_paths - In the implementation block
@property (nonatomic,readonly) bool isRoad; 
@property (nonatomic,readonly) bool isPOI; 
@property (assign,nonatomic) float strokeWidth;                            //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,retain) NSString * iconName;                          //@synthesize iconName=_iconName - In the implementation block
@property (nonatomic,@dynamic,readonly) NSString * trueLabel; 
@property (nonatomic,retain) NSString * shieldText;                        //@synthesize shieldText=_shieldText - In the implementation block
@property (assign,nonatomic) int mapFeatureType;                           //@synthesize mapFeatureType=_mapFeatureType - In the implementation block
-(id)featureArray;
-(void)addFeature:(void*)arg1 ;
-(id)trueLabel;
-(bool)pointInside:(CGPoint)arg1 ;
-(bool)isRoad;
-(unsigned long long)featureId;
-(id)shieldText;
-(void)setShieldText:(id)arg1 ;
-(int)mapFeatureType;
-(id)accessibilityPaths;
-(id)_accessibilityShortAddress:(id)arg1 ;
-(id)detailedFeatureElementInfoAtPoint:(CGPoint)arg1 ;
-(void)startLocationInformationRequest:(CGPoint)arg1 ;
-(id)pointsFromFeature:(id)arg1 ;
-(void)_updateElementStatus;
-(id)initWithAccessibilityContainer:(id)arg1 feature:(SCD_Struct_VK2*)arg2 featureTypeContext:(void*)arg3 ignoreMissingName:(bool)arg4 useLocalizedLabels:(bool)arg5 ;
-(void)setMapFeatureType:(int)arg1 ;
-(void)addFeaturesFromElement:(id)arg1 ;
-(void)setFeatureId:(unsigned long long)arg1 ;
-(bool)isPOI;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(void)setStyle:(int)arg1 ;
-(int)style;
-(id)accessibilityLabel;
-(void)_updatePath;
-(CGRect)accessibilityFrame;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(id)paths;
-(void)setPaths:(id)arg1 ;
-(float)strokeWidth;
-(void)setIconName:(id)arg1 ;
-(id)iconName;
-(id)_accessibilityMapDetailedInfoAtPoint:(CGPoint)arg1 ;
-(int)_accessibilityMapFeatureType;
-(bool)_allowCustomActionHintSpeakOverride;
-(void)setStrokeWidth:(float)arg1 ;
-(unsigned long long)shieldType;
-(void)setShieldType:(unsigned long long)arg1 ;
@end

