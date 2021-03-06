/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, NSError;

@interface IMXMLReparserContext : NSObject {

	NSString* _inContent;
	NSString* _outContent;
	NSArray* _attributesToPreserve;
	NSDictionary* _attributesToMerge;
	NSError* _error;

}

@property (nonatomic,readonly) NSArray * attributesToPreserve;                //@synthesize attributesToPreserve=_attributesToPreserve - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributesToMerge;              //@synthesize attributesToMerge=_attributesToMerge - In the implementation block
@property (nonatomic,readonly) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * outContent;                         //@synthesize outContent=_outContent - In the implementation block
@property (readonly) NSString * _inContent;                                   //@synthesize inContent=_inContent - In the implementation block
-(void)dealloc;
-(id)_inContent;
-(void)_setOutContent:(id)arg1 error:(id)arg2 ;
-(id)attributesToPreserve;
-(id)attributesToMerge;
-(id)initWithContent:(id)arg1 attributesToPreserve:(id)arg2 attributesToMerge:(id)arg3 ;
-(id)outContent;
-(id)error;
@end

