/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DResourceLoader.h>

@protocol TSCH3DRenderBufferAllocator;
@interface TSCH3DFBOLoader : TSCH3DResourceLoader {

	tvec2<int> mSize;
	FramebufferAttributes mFramebufferAttributes;
	<TSCH3DRenderBufferAllocator>* mColorAllocator;
	<TSCH3DRenderBufferAllocator>* mDepthAllocator;

}

@property (nonatomic,readonly) tvec2<int> size; 
@property (nonatomic,readonly) FramebufferAttributes framebufferAttributes; 
@property (nonatomic,readonly) <TSCH3DRenderBufferAllocator> * colorAllocator; 
@property (nonatomic,readonly) <TSCH3DRenderBufferAllocator> * depthAllocator; 
+(id)loaderWithFramebufferAttributes:(const FramebufferAttributes*)arg1 size:(const tvec2<int>*)arg2 colorAllocator:(id)arg3 depthAllocator:(id)arg4 ;
-(id)generateHandleWithConfig:(void*)arg1 ;
-(unsigned long long)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void*)arg4 ;
-(void)bindHandle:(id)arg1 config:(void*)arg2 ;
-(void)deactivateHandle:(id)arg1 insideContext:(id)arg2 ;
-(id)initWithFramebufferAttributes:(const FramebufferAttributes*)arg1 size:(const tvec2<int>*)arg2 colorAllocator:(id)arg3 depthAllocator:(id)arg4 ;
-(SessionLoadResourceResult)loadResource:(id)arg1 insideSession:(id)arg2 ;
-(id)colorAllocator;
-(id)depthAllocator;
-(FramebufferAttributes)framebufferAttributes;
-(void)dealloc;
-(tvec2<int>)size;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id).cxx_construct;
@end

