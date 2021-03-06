/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/timed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TMSourceManagerDelegate;
@class NSMutableDictionary, NSDictionary;

@interface TMSourceManager : NSObject {

	NSMutableDictionary* _rules;
	NSMutableDictionary* _sources;
	NSMutableDictionary* _availability;
	<TMSourceManagerDelegate>* delegate;

}

@property (assign,nonatomic) <TMSourceManagerDelegate> * delegate; 
@property (nonatomic,retain) NSDictionary * rules;                              //@synthesize rules=_rules - In the implementation block
-(void)setSourceAvailable:(id)arg1 ;
-(void)setSourceUnavailable:(id)arg1 ;
-(BOOL)isSourceAvailable:(id)arg1 ;
-(void)setSourceAvailability:(id)arg1 ;
-(double)unavailableDelayForSource:(id)arg1 ;
-(double)timeoutForSource:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)rules;
-(void)setRules:(id)arg1 ;
@end

