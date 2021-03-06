/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DTileImageSceneRenderPipelineImageGenerator.h>

@class TSCH3DPixelBuffer;

@interface TSCH3DTileImageSceneRenderPipelineSingleImageGenerator : TSCH3DTileImageSceneRenderPipelineImageGenerator {

	TSCH3DPixelBuffer* mBuffer;

}
+(id)generatorWithFullViewportSize:(const tvec2<int>*)arg1 ;
-(id)initWithFullViewportSize:(const tvec2<int>*)arg1 ;
-(void)processSourceRegion:(const box<glm::detail::tvec2<int> >*)arg1 targetRegion:(const box<glm::detail::tvec2<int> >*)arg2 ;
-(void)dealloc;
-(id)images;
@end

