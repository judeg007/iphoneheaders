/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSProgress, NSMutableSet;

@interface _NSProgressGroup : NSObject {

	NSProgress* _parent;
	long long _portionOfParent;
	NSMutableSet* _children;
	double _fractionCompleted;
	unsigned long long _finishedChildrenCount;
	bool _closed;

}
-(long long)portionOfParent;
-(void)setPortionOfParent:(long long)arg1 ;
-(void)updateChild:(id)arg1 oldFractionCompleted:(double)arg2 newFractionCompleted:(double)arg3 finished:(bool)arg4 ;
-(double)fractionCompleted;
-(void)stopNotifications;
-(void)dealloc;
-(id)description;
-(void)close;
-(void)addChild:(id)arg1 ;
-(id)children;
-(id)initWithParent:(id)arg1 ;
-(id)parent;
@end

