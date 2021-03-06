/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AXUIService;
@class NSString, AXTimer, AXUIAlert, UIImage;

@interface AXUIAlertContext : NSObject {

	NSString* _identifier;
	double _creationTimeInterval;
	double _fadeAnimationDuration;
	AXTimer* _showOrHideTimer;
	AXUIAlert* _alertView;
	<AXUIService>* _service;
	unsigned long long _priority;
	double _duration;
	NSString* _text;
	NSString* _subtitleText;
	UIImage* _iconImage;
	unsigned long long _type;

}

@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double creationTimeInterval;               //@synthesize creationTimeInterval=_creationTimeInterval - In the implementation block
@property (assign,nonatomic) double fadeAnimationDuration;              //@synthesize fadeAnimationDuration=_fadeAnimationDuration - In the implementation block
@property (nonatomic,retain) AXTimer * showOrHideTimer;                 //@synthesize showOrHideTimer=_showOrHideTimer - In the implementation block
@property (nonatomic,retain) AXUIAlert * alertView;                     //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,retain) <AXUIService> * service;                   //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned long long priority;               //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double duration;                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;                     //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                       //@synthesize iconImage=_iconImage - In the implementation block
@property (assign,nonatomic) unsigned long long type;                   //@synthesize type=_type - In the implementation block
-(id)service;
-(void)setAlertView:(id)arg1 ;
-(id)alertView;
-(void)dealloc;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(id)iconImage;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(void)setCreationTimeInterval:(double)arg1 ;
-(id)showOrHideTimer;
-(void)setShowOrHideTimer:(id)arg1 ;
-(void)setFadeAnimationDuration:(double)arg1 ;
-(double)fadeAnimationDuration;
-(double)creationTimeInterval;
-(void)setService:(id)arg1 ;
-(void)setIconImage:(id)arg1 ;
-(void)setSubtitleText:(id)arg1 ;
-(id)subtitleText;
@end

