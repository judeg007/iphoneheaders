/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Calculator.app/Calculator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface CalcStackItem : NSObject {

	unsigned _op;
	unsigned _precedence;
	NSString* _number;

}
+(int)tagForOperator:(unsigned)arg1 ;
+(unsigned)operatorForTag:(int)arg1 ;
+(unsigned)precedenceOfOperator:(unsigned)arg1 ;
-(unsigned)op;
-(id)initWithNumber:(id)arg1 operator:(unsigned)arg2 openParenthesisCount:(unsigned)arg3 ;
-(void)dealloc;
-(id)description;
-(id)number;
-(unsigned)precedence;
@end

