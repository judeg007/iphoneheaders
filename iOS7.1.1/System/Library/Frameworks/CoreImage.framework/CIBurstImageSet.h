/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class CIBurstImageSetInternal;

@interface CIBurstImageSet : NSObject {

	CIBurstImageSetInternal* _priv;

}
+(id)burstImageSet;
-(void)addImageFromCGImage:(CGImageRef)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)addImage:(id)arg1 identifier:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)addImageFromIOSurface:(IOSurfaceRef)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(id)bestImageIdentifiers;
-(id)imageClusterForIdentifier:(id)arg1 ;
-(id)allImageIdentifiers;
-(id)burstId;
-(id)coverImageIdentifier;
-(unsigned long long)imageClusterCount;
-(id)imageClusterForIndex:(unsigned long long)arg1 ;
-(id)statsForImageWithIdentifier:(id)arg1 ;
-(double)secondsSinceStart;
-(void)setLoggingListener:(void*)arg1 withUserInfo:(void*)arg2 ;
-(void)dealloc;
-(id)init;
@end

