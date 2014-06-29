/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIFont, _MessageHeaderLayoutToolbox;

@interface _FontBasedSpec : NSObject {

	_FontBasedSpec* _shortVariant;
	UIFont* _font;
	_MessageHeaderLayoutToolbox* _toolbox;

}

@property (readonly) _FontBasedSpec * shortVariant;                    //@synthesize shortVariant=_shortVariant - In the implementation block
@property (assign) UIFont * font;                                      //@synthesize font=_font - In the implementation block
@property (assign) _MessageHeaderLayoutToolbox * toolbox;              //@synthesize toolbox=_toolbox - In the implementation block
+(id)fontSpecWithFont:(id)arg1 ;
-(float)leadingValueWithCoefficient:(float)arg1 ;
-(float)leadingValue;
-(id)shortVariant;
-(id)toolbox;
-(void)setToolbox:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)font;
@end
