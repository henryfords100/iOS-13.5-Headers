/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, CalDAVCalendarServerScheduleChangesItem, CalDAVUpdateOwnerItem;


@protocol CalDAVCalendarItemProtocol
@property (nonatomic,retain) NSString * scheduleTag; 
@property (nonatomic,retain) CalDAVCalendarServerScheduleChangesItem * scheduleChanges; 
@property (nonatomic,retain) CalDAVUpdateOwnerItem * createdBy; 
@property (nonatomic,retain) CalDAVUpdateOwnerItem * updatedBy; 
@required
-(void)setCreatedBy:(id)arg1;
-(CalDAVUpdateOwnerItem *)createdBy;
-(NSString *)scheduleTag;
-(void)setScheduleTag:(id)arg1;
-(void)setScheduleChanges:(id)arg1;
-(CalDAVCalendarServerScheduleChangesItem *)scheduleChanges;
-(CalDAVUpdateOwnerItem *)updatedBy;
-(void)setUpdatedBy:(id)arg1;

@end
