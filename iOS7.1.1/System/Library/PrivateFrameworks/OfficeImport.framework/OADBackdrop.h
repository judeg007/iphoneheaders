/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class OADPoint3D, OADVector3D;

@interface OADBackdrop : NSObject <NSCopying> {

	OADPoint3D* mAnchor;
	OADVector3D* mNormal;
	OADVector3D* mUp;

}
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)anchor;
-(void)setAnchor:(id)arg1 ;
-(id)normal;
-(id)up;
-(void)setNormal:(id)arg1 ;
-(void)setUp:(id)arg1 ;
@end

