/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMF/FMF-Structs.h>
#import <MapKit/MKAnnotation.h>

@class NSString, SAFmfLocation;

@interface FMFSAMapAnnotation : NSObject <MKAnnotation> {

	bool _isFenceAnnotation;
	SAFmfLocation* location;
	SCD_Struct_FM1 coordinate;

}

@property (nonatomic,readonly) SCD_Struct_FM1 coordinate; 
@property (nonatomic,retain) SAFmfLocation * location; 
@property (assign,nonatomic) bool isFenceAnnotation;                   //@synthesize isFenceAnnotation=_isFenceAnnotation - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
+(id)annotationWithLocation:(id)arg1 ;
-(void)setIsFenceAnnotation:(bool)arg1 ;
-(bool)isFenceAnnotation;
-(void)updateCoordinateForLocation:(id)arg1 ;
-(void)dealloc;
-(id)title;
-(id)location;
-(void).cxx_destruct;
-(SCD_Struct_FM1)coordinate;
-(void)setCoordinate:(SCD_Struct_FM1)arg1 ;
-(void)setLocation:(id)arg1 ;
@end

