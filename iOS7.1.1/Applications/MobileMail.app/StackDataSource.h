/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol StackDataSource
@required
-(id)defaultViewForStackController:(id)arg1;
-(id)stackContainerViewForStackController:(id)arg1;
-(UIEdgeInsets*)stackContainerViewEdgeInsetsForStackController:(id)arg1;
-(id)defaultItemForStackController:(id)arg1;
-(id)stackController:(id)arg1 viewForItem:(id)arg2;
-(BOOL)stackController:(id)arg1 isDataLoadedForItem:(id)arg2 inView:(id)arg3;
-(void)stackController:(id)arg1 loadDataForItem:(id)arg2 inView:(id)arg3;
@end
