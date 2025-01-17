/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface ASActivityDataNotificationGroup : NSObject {

	NSSet* _goalCompletionNotifications;
	NSSet* _achievementNotifications;
	NSSet* _workoutNotifications;

}

@property (nonatomic,retain) NSSet * goalCompletionNotifications;              //@synthesize goalCompletionNotifications=_goalCompletionNotifications - In the implementation block
@property (nonatomic,retain) NSSet * achievementNotifications;                 //@synthesize achievementNotifications=_achievementNotifications - In the implementation block
@property (nonatomic,retain) NSSet * workoutNotifications;                     //@synthesize workoutNotifications=_workoutNotifications - In the implementation block
@property (nonatomic,readonly) NSSet * allNotifications; 
-(unsigned long long)notificationCount;
-(NSSet *)allNotifications;
-(NSSet *)goalCompletionNotifications;
-(void)setGoalCompletionNotifications:(NSSet *)arg1 ;
-(NSSet *)achievementNotifications;
-(void)setAchievementNotifications:(NSSet *)arg1 ;
-(NSSet *)workoutNotifications;
-(void)setWorkoutNotifications:(NSSet *)arg1 ;
@end

