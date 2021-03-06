/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIRemoveControlMinusButton.h>

@interface UIRemoveControlMultiSelectButton : UIRemoveControlMinusButton {

	unsigned _isHighlighted : 1;
	unsigned _isSelected : 1;

}
+(id)minusImage;
+(float)defaultWidth;
+(id)plusImage;
+(id)minusCenterImage;
-(void)drawRect:(CGRect)arg1 ;
-(bool)isRotating;
-(void)setHighlighted:(bool)arg1 ;
-(bool)isHighlighted;
-(void)setSelected:(bool)arg1 ;
-(id)initWithRemoveControl:(id)arg1 ;
-(void)setHiding:(bool)arg1 ;
-(bool)isHiding;
-(void)toggleRotate:(bool)arg1 ;
-(bool)isRotated;
-(void)setSelected:(bool)arg1 highlighted:(bool)arg2 ;
@end

