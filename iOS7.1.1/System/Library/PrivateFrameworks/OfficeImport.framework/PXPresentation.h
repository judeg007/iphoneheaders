/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PXPresentation : NSObject
+(CGSize)readSizeFromChildOfElement:(xmlNode*)arg1 childName:(const char*)arg2 ;
+(void)readPresentationProperties:(id)arg1 to:(id)arg2 ;
+(void)readSlideIndicesWithPresentationPart:(id)arg1 presentationState:(id)arg2 ;
+(id)readFromPackage:(id)arg1 fileName:(id)arg2 reader:(id)arg3 cancel:(id)arg4 isThumbnail:(bool)arg5 delegate:(id)arg6 ;
@end

