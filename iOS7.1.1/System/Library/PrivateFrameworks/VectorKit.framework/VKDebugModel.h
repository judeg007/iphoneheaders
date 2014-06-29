/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VKModelObject.h>
#import <VectorKit/VKMapLayer.h>

@interface VKDebugModel : VKModelObject <VKMapLayer> {

	bool _geocentric;
	float _fontSize;

}

@property (assign,nonatomic) bool geocentric;              //@synthesize geocentric=_geocentric - In the implementation block
-(void)dealloc;
-(unsigned long long)mapLayerPosition;
-(unsigned)supportedRenderPasses;
-(void)drawDebugScene:(id)arg1 withContext:(id)arg2 ;
-(void)_paintTile:(id)arg1 fromLayer:(unsigned long long)arg2 withContext:(id)arg3 ;
-(bool)geocentric;
-(void)setGeocentric:(bool)arg1 ;
@end
