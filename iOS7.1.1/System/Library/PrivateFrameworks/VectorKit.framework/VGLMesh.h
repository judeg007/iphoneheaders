/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VGLVertexArrayObject.h>
#import <CoreFoundation/NSCoding.h>

@interface VGLMesh : VGLVertexArrayObject <NSCoding>
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)drawTrianglesWithContext:(id)arg1 offset:(int)arg2 count:(int)arg3 ;
-(void)drawElementsOfType:(int)arg1 withContext:(id)arg2 offset:(int)arg3 count:(int)arg4 ;
-(void)drawTrianglesWithContext:(id)arg1 ;
-(void)drawLinesWithContext:(id)arg1 ;
-(void)drawLinesWithContext:(id)arg1 offset:(int)arg2 count:(int)arg3 ;
-(void)drawTriangleStripWithContext:(id)arg1 ;
-(void)drawWireframeTrianglesWithContext:(id)arg1 ;
@end

