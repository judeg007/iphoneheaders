/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SyncingHistoryItem <NSObject,NSCopying,MapsSynced>
@property (nonatomic,readonly) BOOL isValid; 
@property (assign,nonatomic) double position; 
@property (nonatomic,copy) NSString * syncIdentifier; 
@property (nonatomic,readonly) SyncedBookmarkRepr * bookmarkRepresentation; 
@required
-(id)initWithBookmarkRepresentation:(id)arg1;
-(BOOL)updateFromBookmarkRepresentation:(id)arg1;
-(id)bookmarkRepresentation;
-(id)syncIdentifier;
-(void)setSyncIdentifier:(id)arg1;
-(BOOL)isValid;
-(void)setPosition:(double)arg1;
-(double)position;
@end

