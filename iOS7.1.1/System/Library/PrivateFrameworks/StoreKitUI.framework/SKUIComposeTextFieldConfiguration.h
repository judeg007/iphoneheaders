/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSString;

@interface SKUIComposeTextFieldConfiguration : NSObject {

	UIEdgeInsets _borderInsets;
	long long _columnIndex;
	bool _isRequired;
	NSString* _label;
	unsigned long long _maxLength;
	NSString* _placeholder;
	NSString* _value;

}

@property (assign,nonatomic) UIEdgeInsets borderInsets;                    //@synthesize borderInsets=_borderInsets - In the implementation block
@property (assign,nonatomic) long long columnIndex;                        //@synthesize columnIndex=_columnIndex - In the implementation block
@property (nonatomic,copy) NSString * label;                               //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long maxLength;                 //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                         //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,getter=isRequired,nonatomic) bool required;              //@synthesize isRequired=_isRequired - In the implementation block
@property (nonatomic,copy) NSString * value;                               //@synthesize value=_value - In the implementation block
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)label;
-(void)setPlaceholder:(id)arg1 ;
-(void)setLabel:(id)arg1 ;
-(id)placeholder;
-(void).cxx_destruct;
-(void)setColumnIndex:(long long)arg1 ;
-(long long)columnIndex;
-(unsigned long long)maxLength;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(void)setRequired:(bool)arg1 ;
-(UIEdgeInsets)borderInsets;
-(void)setBorderInsets:(UIEdgeInsets)arg1 ;
-(bool)isRequired;
@end

