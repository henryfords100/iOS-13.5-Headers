/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INSpeakableString, NSArray;


@protocol INCreateTaskListIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * title; 
@property (nonatomic,copy) NSArray * taskTitles; 
@property (nonatomic,copy) INSpeakableString * groupName; 
@required
-(id)init;
-(INSpeakableString *)title;
-(void)setTitle:(id)arg1;
-(INSpeakableString *)groupName;
-(void)setGroupName:(id)arg1;
-(NSArray *)taskTitles;
-(void)setTaskTitles:(id)arg1;

@end

