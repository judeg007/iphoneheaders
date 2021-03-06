/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DLinkablePipeline.h>

@class TSCH3DTileSceneRenderSetup;

@interface TSCH3DTileSceneRenderPipeline : TSCH3DLinkablePipeline {

	TSCH3DTileSceneRenderSetup* mTileSetup;

}

@property (nonatomic,readonly) TSCH3DTileSceneRenderSetup * tileSetup; 
+(id)pipeline;
-(id)setupWithTileSize:(long long)arg1 overlap:(long long)arg2 tileSamples:(long long)arg3 tileSuperSamples:(long long)arg4 targetPipeline:(id)arg5 ;
-(id)tileSetup;
-(bool)renderTile:(tvec2<int>*)arg1 targetPipeline:(id)arg2 ;
-(id)cloneTargetPipeline:(id)arg1 ;
-(void)dealloc;
@end

