/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WeekViewDelegate <NSObject>
@optional
-(void)weekViewDidLayout:(id)arg1;
-(void)weekViewDidBeginDragging:(id)arg1;
-(void)weekViewDidScroll:(id)arg1;
-(void)weekViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)weekViewDidEndDecelerating:(id)arg1;
-(void)weekView:(id)arg1 didSelectEvent:(id)arg2;
-(void)weekView:(id)arg1 receivedTapInAllDayAreaOnDate:(id)arg2;
-(void)weekViewAllDaySectionDidScroll:(id)arg1;
-(id)weekViewForWeekBefore:(id)arg1;
-(id)weekViewForWeekAfter:(id)arg1;
-(void)emptySpaceClickedOnDate:(id)arg1;
-(void)emptySpaceClick;
@end

