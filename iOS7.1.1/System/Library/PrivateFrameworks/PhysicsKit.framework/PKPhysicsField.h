/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@protocol NSObject;
@interface PKPhysicsField : NSObject <NSCopying, NSCoding> {

	unsigned* _field : 2PKField;
	bool _inUse;
	CGVector _scale;
	CGVector _halfExtent;
	<NSObject>* _representedObject;
	bool _active;
	bool _override;
	bool _exclusive;

}

@property (assign,nonatomic) bool _inUse; 
@property (assign,nonatomic) double strength; 
@property (assign,getter=isActive,nonatomic) bool active;                        //@synthesize active=_active - In the implementation block
@property (assign,getter=isOverride,nonatomic) bool override;                    //@synthesize override=_override - In the implementation block
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) double rotation; 
@property (assign,nonatomic) CGVector halfExtent; 
@property (assign,nonatomic) CGVector scale; 
@property (assign,getter=isRound,nonatomic) bool round; 
@property (assign,getter=isExclusive,nonatomic) bool exclusive;                  //@synthesize exclusive=_exclusive - In the implementation block
@property (assign,nonatomic,__weak) <NSObject> * representedObject; 
-(bool)_inUse;
-(void)set_inUse:(bool)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(bool)isActive;
-(CGVector)scale;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(void)setScale:(CGVector)arg1 ;
-(bool)active;
-(void)setIsActive:(bool)arg1 ;
-(void)setActive:(bool)arg1 ;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(id).cxx_construct;
-(void).cxx_destruct;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(bool)isExclusive;
-(void)setIsExclusive:(bool)arg1 ;
-(unsigned*)_field;
-(void)set_field:(unsigned*)arg1 ;
-(bool)override;
-(void)setIsOverride:(bool)arg1 ;
-(CGVector)halfExtent;
-(void)setHalfExtent:(CGVector)arg1 ;
-(bool)isRound;
-(void)setRound:(bool)arg1 ;
-(bool)exclusive;
-(bool)isOverride;
-(void)setOverride:(bool)arg1 ;
-(void)setExclusive:(bool)arg1 ;
@end

